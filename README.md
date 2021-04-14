# Stream Socket to UDP gateway

## Background

This utility provided a simple and simplistic solution to a problem. An app exposed a stream socket where it was receiving messages and processing them. Except that the app did not provide a classic service where multiple clients could connect and be served concurrently. In this design the rate of message arrival from the clients could sometimes not be kept up resulting in frequent clashes. 

The packets arriving were to be archived, presented to the user in a GUI, interpreted and logged in readable text files and so on.

### Further challenges

The app itself is expected to run under 3 different environments, Windows, Linux and a yocto based custom environment.

## A solution

This projectlet is a prototype solution to the above problem. This utility implements a classic server - with the ability to receive connection requests from any number of clients concurrently. The messages arriving are routed to a "local" UDP socket. The original app was modified to remove all functions except for the GUI. Thus the archiving and logging of the data can be slowed down without affecting the GUI performance. There is a moderate risk of packet loss but since the UDP channel is strictly local, this was considered minimal.

The original app was written in C++. Since the interface was changed to UDP, the helper in this projectlet had more freedom and a golang implementation was a good choice. So is an Ada solution which is available from: https://gitlab.com/ada23/sockgw.git
