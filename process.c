#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>

int getChildProcessCount(int id)
{
    char command[100] = {0};
    FILE *fp = NULL;
    char buff[3] = {0};
    sprintf(command, "ps --ppid %d --no-headers | grep -v '[sh] <defunct>' | wc --lines ", id);
    fp = popen(command, "r");
    if (fp == NULL)
    {
        printf("fails\n");
        return 0;
    }
    else
    {
        if (fgets(buff, 3, fp) == NULL)
        {
            printf("fail1\n");
            return 0;
        }
	printf("val->%s\n",buff);
        return atoi(buff);
    }
}

int createProcess()
{
    int i = 0, ppid = getpid(), count;
    pid_t pid;
    for (; i < 5; i++)
    {
    	printf("process count:%d\n",getChildProcessCount(ppid));
        pid = fork();
        if (pid < 0)
        {
            printf("error");
        }
        else if (pid == 0)
        {
            printf("I am child  id : %d\n", getpid());
            printf("childNum : %d\n", i + 1);
            goto print;
        }
        else
        {
            printf("I am parent havind id : %d\n", getpid());
            sleep(10);
        }
    }

    // while (getChildProcessCount(ppid) > 0)
    //     sleep(3);
    // if (getChildProcessCount(ppid) == 0){
    //     printf("**end**");
    //     return 0;
    // }

print:
    printf("end for child process - %d\n", getpid());
    printf("hii from print\n");
    printf("++++++++++++++++++++\n");
    sleep(2);
    exit(0);
}

int main()
{
    createProcess();
    printf("BYE\n");
    return 0;
}

