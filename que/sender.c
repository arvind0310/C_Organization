#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>
typedef struct msgbuf
{
    long type;
    char text[20];
} buff_t;

int main(int argc, char *argv[])
{
    int qid, rc;
    buff_t *msgQue;
    msgQue = (buff_t *)malloc(sizeof(buff_t) + strlen(argv[2])); // seg fault otherwise
    qid = msgget((key_t)6, IPC_CREAT | 0644);
    msgQue->type = atoi(argv[1]); // argv[0] --> ./a.out, argv[1]--> type, ..
    strcpy(msgQue->text, argv[2]);
    rc = msgsnd(qid, msgQue, strlen(msgQue->text) + 1, 0);
    if (rc < 0)
        printf("error inserting in que\n");
    else
        printf("msg of %ld byte send\n", strlen(msgQue->text));
}
