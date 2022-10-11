#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main()
{
    int client_sock_desc;
    char server_response[256]; // to store msg from server
    client_sock_desc = socket(AF_INET, SOCK_STREAM, 0);

    // client_sock_desc = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    struct sockaddr_in server_address; // address of server from which i have to recv data
    memset(&server_address, 0, sizeof(server_address));
    server_address.sin_family = AF_INET; // TCP family
    server_address.sin_port = htons(9002);
    server_address.sin_addr.s_addr = INADDR_ANY; // any adress IP on system

    int connection_status = connect(client_sock_desc, (struct sockaddr *)&server_address, sizeof(server_address));
    if (connection_status == -1)
        printf("error to connect with remote socket\n");

    recv(client_sock_desc, &server_response, sizeof(server_response), 0); // strlen()?

    printf("message recieved by server:%s\n", server_response);

    close(client_sock_desc);
}
