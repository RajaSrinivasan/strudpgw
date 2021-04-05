package gateway

import (
	"bufio"
	"fmt"
	"log"
	"net"
	"os"
	"strconv"
	"strings"
	"time"
)

var Verbose bool = false
var NumClientsServed int = 0

func handleConnection(conn net.Conn, clientid int, udpport int) {

	udpserver, err := net.Dial("udp", "127.0.0.1:"+strconv.FormatInt(int64(udpport), 10))
	if err != nil {
		fmt.Printf("Some error %v", err)
		return
	}
	defer udpserver.Close()

	messagecount := 0
	for {
		buffer, err := bufio.NewReader(conn).ReadBytes('\n')
		if err != nil {
			fmt.Printf("Client left. Total messages %d\n", messagecount)
			conn.Close()
			return
		}
		log.Printf("Client %d message: %s", clientid, string(buffer[:len(buffer)-1]))
		udpserver.Write(buffer[:len(buffer)-1])
		messagecount++
	}
}

func Serve(sockport int, udpport int) {
	if Verbose {
		fmt.Printf("Listening on port %d and forwarding to %d\n", sockport, udpport)
	}
	l, err := net.Listen("tcp", "localhost:"+strconv.FormatInt(int64(sockport), 10))
	if err != nil {
		fmt.Println("Error listening:", err.Error())
		os.Exit(1)
	}
	defer l.Close()

	for {
		c, err := l.Accept()
		if err != nil {
			fmt.Println("Error connecting:", err.Error())
			return
		}

		fmt.Println("Client " + c.RemoteAddr().String() + " connected.")
		NumClientsServed++
		go handleConnection(c, NumClientsServed, udpport)
	}
}

func Client(sockport int, udpport int) {
	if Verbose {
		fmt.Printf("Will test on port %d and forwarding to %d\n", sockport, udpport)
	}
	conn, err := net.Dial("tcp", "localhost:"+strconv.FormatInt(int64(sockport), 10))
	if err != nil {
		fmt.Println("Error connecting:", err.Error())
		os.Exit(1)
	}
	defer conn.Close()
	StopChar := "\n"
	for i := 0; i < 10; i++ {

		msg := strings.Replace("oink oink oink", "k", "ky", 2)
		if Verbose {
			fmt.Printf("Sending a message %d %s\n", i, msg)
		}
		conn.Write([]byte(msg))
		conn.Write([]byte(StopChar))
		time.Sleep(2 * time.Second)
	}

}
