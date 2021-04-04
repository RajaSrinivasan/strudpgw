package main

import (
	"flag"
	"fmt"
)

var verbose bool
var strport int
var udpport int

func init() {
	flag.BoolVar(&verbose, "verbose", false, "set verbose")
	flag.IntVar(&strport, "stream", 1010, "Stream socket port number")
	flag.IntVar(&udpport, "udp", 1011, "UDP socket")
}

func show_options() {
	fmt.Printf("Stream socket %d UDP port %d\n", strport, udpport)
}
func main() {
	fmt.Println("Hello World.")
	flag.Parse()
	if verbose {
		show_options()
	}
}