package target

import (
	"fmt"
	"log"
	"net"
)

var Verbose bool = false
var NumPacketsHandled int = 0

func Serve(udpport int) {
	msgbuf := make([]byte, 1024)
	addr := net.UDPAddr{
		Port: udpport,
		IP:   net.ParseIP("127.0.0.1"),
	}
	//channel, err := net.ListenUDP("udp", "localhost:"+strconv.FormatInt(int64(udpport), 10))
	channel, err := net.ListenUDP("udp", &addr)
	if err != nil {
		fmt.Printf("Unable to create UDP listener %s\n", err.Error())
		return
	}
	for {
		len, remoteaddr, err := channel.ReadFromUDP(msgbuf)

		if err != nil {
			fmt.Printf("Some error  %v", err)
			continue
		}

		log.Printf("Received Size %d from %v %s\n", len, remoteaddr, string(msgbuf[:len]))
		channel.WriteToUDP([]byte("Got It\n"), remoteaddr)
	}
}
