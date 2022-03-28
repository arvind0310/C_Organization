#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>

int getChildProcessCount()
{
    char command[100] = {0};
    FILE *fp = NULL;
    char buff[3] = {0};
    strncpy(command, "ps -a | grep 'a.out <defunct>' | wc -l", 100);
    fp = popen(command, "r");
    if (fp == NULL)
    {
        printf("no command");
        return 0;
    }
    else
    {
        if (fgets(buff, 3, fp) == NULL)
            return 0;
        pclose(fp);
        return atoi(buff);
    }
}

int main()
{
    int i = 0;
    pid_t pid;
    while (i < 5)
    {
        // while (getChildProcessCount() > 2)
        // {
        //     printf("process>2\n");
        //     sleep(3);
        //     continue;
        // }
        pid = fork();
        if (pid < 0)
        {
            printf("error");
        }
        else if (pid == 0)
        {
            printf("I am child  id : %d\n", getpid());
            printf("childNum : %d\n", i);
            goto print;
        }
        else
        {
            // wait // so that first child process run
            printf("I am parent havind id : %d\n", getpid());
            i++;
            sleep(2);
        }
    }
    // while (getChildProcessCount() > 0)
    //     sleep(3);
    // return;
print:
    printf("hii from print\n");
    sleep(2);
    exit(0);
}