package main

import (
	"flag"
	"fmt"
	"os"

	"github.com/RajaSrinivasan/strudpgw/gateway"
	"github.com/RajaSrinivasan/strudpgw/target"
)

var verbose bool
var test_option bool
var target_option bool
var strport int
var udpport int

func init() {
	flag.BoolVar(&verbose, "verbose", false, "set verbose")
	flag.IntVar(&strport, "stream", 1010, "Stream socket port number")
	flag.IntVar(&udpport, "udp", 1011, "UDP socket")
	flag.BoolVar(&test_option, "test", false, "Test the server")
	flag.BoolVar(&target_option, "target", false, "Target UDP app")
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
	gateway.Verbose = verbose
	if test_option {
		gateway.Client(strport, udpport)
		os.Exit(0)
	}
	if target_option {
		target.Serve(udpport)
		os.Exit(0)
	}
	gateway.Serve(strport, udpport)
}
