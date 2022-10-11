#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#define MAX_QUE_SIZE 500
typedef struct msgbuf
{
    long type;
    char text[50];
} recieved_t;
int main(int argc, char *argv[])
{
    int qid, rc;
    recieved_t *packet;
    packet = (recieved_t *)malloc(sizeof(recieved_t));
    qid = msgget((key_t)6, 0644);
    packet->type = atoi(argv[1]);
    rc = msgrcv(qid, packet, MAX_QUE_SIZE, 0, 0);
    printf("recieved msg:%s\n", packet->text);
}
