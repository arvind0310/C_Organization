#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
int main()
{
    int sock_desc;
    char server_msg[256], client_msg[256];
    struct sockaddr_in server_addr, client_addr;
    int client_struct_length = sizeof(client_addr); // used in sendto/recvfrom() as int
    // create a socket
    sock_desc = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (sock_desc < 0)
        printf("unable to create socket\n");
    printf("socket created succefully\n");

    // assign addr and port to socket

    client_addr.sin_family = AF_INET;
    client_addr.sin_port = htons(4000);
    client_addr.sin_addr.s_addr = inet_addr("127.0.0.1");

    // bind to a port

    if (bind(sock_desc, (struct sockaddr *)&client_addr, sizeof(server_addr)) < 0)
        printf("unable to bind\n");
    printf("bind successfully\n");
    while (1)
    {
        // Receive client's message:
        memset(client_msg, '\0', 256);
        memset(server_msg, '\0', 256);
        printf("waiting to recieve msg ...\n");
        if (recvfrom(sock_desc, client_msg, sizeof(client_msg), 0, (struct sockaddr *)&client_addr, &client_struct_length) < 0)
        {
            printf("Couldn't receive\n");
            return -1;
        }
        printf("Received message from IP: %s and port: %i\n", inet_ntoa(client_addr.sin_addr), ntohs(client_addr.sin_port));

        printf("Msg from client: %s\n", client_msg);
        if (strncmp(client_msg, "bye", 3) == 0)
            break;

        // Respond to client:
        strcpy(server_msg, client_msg);

        if (sendto(sock_desc, server_msg, strlen(server_msg), 0, (struct sockaddr *)&client_addr, client_struct_length) < 0)
        {
            printf("Can't send\n");
            return -1;
        }
    }
    // Close the socket:
    close(sock_desc);

    return 0;
}
