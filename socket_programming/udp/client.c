#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
int main()
{
    int soc_desc;
    struct sockaddr_in client_addr, server_addr;
    char server_msg[256], client_msg[256];
    int client_struct_len = sizeof(client_addr);
    // create socket
    soc_desc = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (soc_desc < 0)
        printf("error while creating socket");
    printf("socket created succesfully\n");

    // set port and ip
    client_addr.sin_family = AF_INET;
    client_addr.sin_port = htons(4000);
    client_addr.sin_addr.s_addr = inet_addr("127.0.0.1");

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(4000);
    server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");

    while (1)
    {
        // get input from user
        memset(client_msg, '\0', 256);
        memset(server_msg, '\0', 256);

        printf("enter msg:");
        fgets(client_msg, 256, stdin);
        if (sendto(soc_desc, client_msg, sizeof(client_msg), 0, (struct sockaddr *)&server_addr, client_struct_len) < 0)
        {
            printf("unable to send message\n");
            return -1;
        }
        if (strncmp(client_msg, "bye", 3) == 0)
            break;
        if (recvfrom(soc_desc, server_msg, sizeof(server_msg), 0, (struct sockaddr *)&client_addr, &client_struct_len) < 0)
        {
            printf("unable to send message\n");
            return -1;
        }
        printf("message recieved from server:%s\n", server_msg);
    }
    close(soc_desc);
}