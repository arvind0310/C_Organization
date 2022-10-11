

/* server reciving msg */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
int main()
{
    char client_response[256];
    int server_socket_desc;
    server_socket_desc = socket(AF_INET, SOCK_STREAM, 0);

    // server_socket_desc = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    struct sockaddr_in server_address;   // address of server from which i have to recv data
    server_address.sin_family = AF_INET; // TCP family
    server_address.sin_port = htons(9002);
    server_address.sin_addr.s_addr = INADDR_ANY; // any adress IP on system

    bind(server_socket_desc, (struct sockaddr *)&server_address, sizeof(server_address));
    listen(server_socket_desc, 5); // max number of connection

    int client_socket;
    client_socket = accept(server_socket_desc, NULL, NULL);
    recv(client_socket, &client_response, sizeof(client_response), 0); // strlen()?

    printf("message recieved by client:%s\n", client_response);

    close(server_socket_desc);
}