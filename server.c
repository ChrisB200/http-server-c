#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define port 8080

int main() {
    // create the socket
    int sockfd = socket(AF_LOCAL, SOCK_STREAM, 0);
    /* I am creating a socket file descriptor which contains information
     * on what action needs to be taken. The first parameter is the domain
     * which specifies how i am going to communicate. for communication on the same host
     * then i will use AF_LOCAL. for communication on different hosts IPV4 is AF_INET and 
     * IPV6 is AF_INET6
     * I can either use SOCK_STREAM or SOCK_DGRAM based on the type of socket i want to use
     * for the type and the protocol is 0 which stands for the internet protocol.
     * */

    // bind the socket
    // listen on the socket
    // accept connections
    // recieve requests
    // send requests
    // recieve end of file
    // close the connection

    return 0;
}
