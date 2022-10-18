

//+++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <unistd.h>
// #include <sys/types.h>
// #include <stdlib.h>
// #include <string.h>

// int createProcess()
// {
//     int i = 0, ppid = getpid();
//     pid_t pid;
//     FILE *fp;
//     fp = fopen("id.txt", "w");
//     putw(0, fp);
//     fclose(fp);

//     for (; i < 5; i++)
//     {
//         fp = fopen("id.txt", "r");
//         printf("%d-fp == > %d\n", i, getw(fp));
//         rewind(fp);
//         while (getw(fp) > 2)
//         {

//             printf(" >> 2\n");
//             sleep(3);
//             printf("+++ hiii  +++\n");
//             fclose(fp);
//             fp = fopen("id.txt", "r");
//         }
//         fclose(fp);

//         pid = fork();
//         if (pid < 0)
//         {
//             printf("error");
//         }
//         else if (pid == 0)
//         {
//             printf("I am child  id : %d\n", getpid());
//             printf("childNum : %d\n", i + 1);
//             fp = fopen("id.txt", "r");
//             int val = getw(fp);
//             printf("val before in child --> %d\n", val);
//             val++;
//             fclose(fp);

//             fp = fopen("id.txt", "w");
//             printf("val after in child --> %d\n", val);
//             putw(val, fp);
//             fclose(fp);
//             sleep(10);
//             goto print;
//         }
//         else
//         {
//             printf("I am parent havind id : %d\n", getpid());
//             sleep(3);
//         }
//     }
//     printf("out of loop : %d\n", i);
//     fp = fopen("id.txt", "r");
//     while (getw(fp) > 0)
//     {
//         printf("sleep mode..\n");
//         sleep(3);
//         printf("out of sleep mode..\n");
//         fclose(fp);
//         fp = fopen("id.txt", "r");

//         // continue;
//     }
//     fclose(fp);
//     return 0;

// print:
//     printf("end for child process - %d\n", getpid());
//     printf("hii from print\n");
//     fp = fopen("id.txt", "r");
//     int val = getw(fp);
//     printf("val before in goto--> %d\n", val);
//     val--;
//     fclose(fp);
//     fp = fopen("id.txt", "w");
//     printf("val after  in goto--> %d\n", val);
//     putw(val, fp);
//     fclose(fp);

//     printf("++++++++++++++++++++\n");
//     sleep(2);
//     exit(0);
// }

// int main()
// {
//     createProcess();
//     printf("BYE\n");
//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <unistd.h>
// #include <sys/types.h>
// #include <stdlib.h>
// #include <string.h>

// /* int getChildProcessCount(int id)
// {
//     char command[100] = {0};
//     FILE *fp = NULL;
//     char buff[3] = {0};
//     sprintf(command, "ps --ppid %d --no-headers | grep -v '[sh] <defunct>' | wc --lines ", id);
//     fp = popen(command, "r");
//     if (fp == NULL)
//     {
//         printf("fails\n");
//         return 0;
//     }
//     else
//     {
//         if (fgets(buff, 3, fp) == NULL)
//         {
//             printf("fail1\n");
//             return 0;
//         }
//     printf("val->%s\n",buff);
//         return atoi(buff);
//     }
// } */

// int createProcess()
// {
//     int i = 0, ppid = getpid();
//     char val[20];
//     pid_t pid;
//     FILE *fp;
//     fp = fopen("id.txt", "w");
//     // putw(1, fp);
//     fprintf(fp, "%d", 0);
//     fclose(fp);

//     for (; i < 5; i++)
//     {
//         pid = fork();
//         if (pid < 0)
//         {
//             printf("error");
//         }
//         else if (pid == 0)
//         {
//             printf("I am child  id : %d\n", getpid());
//             printf("childNum : %d\n", i + 1);
//             fp = fopen("id.txt", "r+");
//             fscanf(fp, "%s", val);
//             printf("val string --> %s\n", val);

//             // int val=getw(fp);
//             // printf("val --> %d\n",val);
//             int res = atoi(val);
//             res++;
//             printf("val --> %d\n", res);
//             fprintf(fp, "%d", res);
//             fclose(fp);

//             // fclose(fp);
//             goto print;
//         }
//         else
//         {
//             printf("I am parent havind id : %d\n", getpid());
//             sleep(5);
//         }
//     }

// print:
//     printf("end for child process - %d\n", getpid());
//     printf("hii from print\n");
//     // fp = fopen("id.txt", "w+");
//     // fscanf(fp, "%s", val);
//     // int val=getw(fp);
//     // printf("val --> %d\n",val);
//     // int res = atoi(val);
//     // res--;
//     // printf("val --> %d\n", res);
//     // fprintf(fp, "%d", res);
//     // fclose(fp);
//     // fp = fopen("id.txt", "r");
//     // printf("val --> %d\n", getw(fp));
//     // fclose(fp);
//     printf("++++++++++++++++++++\n");

//     sleep(2);
//     exit(0);
// }

// int main()
// {
//     createProcess();
//     printf("BYE\n");
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <unistd.h>
// #include <sys/types.h>
// #include <stdlib.h>
// #include <string.h>

// int createProcess()
// {
//     int i = 0;
//     pid_t pid;
//     FILE *fp;
//     fp = fopen("/tmp/id.txt", "w");
//     putw(0, fp);
//     fclose(fp);
//     for (; i < 5; i++)
//     {
//         fp = fopen("/tmp/id.txt", "r");
//         printf("fp->%d\n", getw(fp));
//         rewind(fp);
//         while (getw(fp) > 2)
//         {
//             printf(" >> 2\n");
//             sleep(3);
//             fclose(fp);
//             fp = fopen("/tmp/id.txt", "r");
//         }
//         fclose(fp);
//         pid = fork();
//         if (pid < 0)
//         {
//             printf("error");
//         }
//         else if (pid == 0)
//         {
//             printf("child %d havind id : %d\n", i + 1, getpid());
//             fp = fopen("/tmp/id.txt", "r+");
//             int val = getw(fp);
//             val++;
//             printf("val:%d\n", val);
//             rewind(fp);
//             putw(val, fp);
//             fclose(fp);
//             sleep(3);
//             goto print;
//         }
//         else
//         {
//             printf("parent havind id : %d\n", getpid());
//             sleep(3);
//         }
//     }
//     fp = fopen("/tmp/id.txt", "r");
//     while (getw(fp) > 0)
//     {
//         sleep(3);
//         fclose(fp);
//         fp = fopen("/tmp/id.txt", "r");
//     }
//     fclose(fp);
//     printf("return from main thread\n");
//     return 0;
// print:
//     printf("end for child process - %d\n", getpid());
//     fp = fopen("/tmp/id.txt", "r+");
//     int val = getw(fp);
//     val--;
//     printf("val2:%d\n", val);
//     rewind(fp);
//     putw(val, fp);
//     fclose(fp);
//     printf("++++++++++++++++++++\n");
//     sleep(2);
//     exit(0);
// }

// int main()
// {
//     createProcess();
//     printf("BYE\n");
//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
int count = 0;
void wait();
int createProcess();

void wait()
{
    sleep(5);
}
int createProcess()
{

    int i = 0;
    pid_t pid;
    for (; i < 5; i++)
    {
        while ((count) > 2)
        {
            printf(" >> 2\n");
            sleep(3);
        }
        pid = fork();
        if (pid < 0)
        {
            printf("error");
        }
        else if (pid == 0)
        {
            printf("child:%d ID:%d\n", i + 1, getpid());
            printf("val:%d\n", count);
            (count)++;
            printf("val+:%d\n", count);
            (count)++;
            printf("val+:%d\n", count);
            wait();
            goto print;
        }
        else
        {
            printf("parent havind id : %d\n", pid);
            sleep(3);
        }
    }
    while ((count) > 0)
    {
        sleep(3);
    }
    printf("return from main thread\n");
    return 0;
print:
    printf("end for child process - %d\n", getpid());
    printf("val:%d\n", count);
    (count)--;
    printf("val-:%d\n", count);
    printf("++++++++++++++++++++\n");
    sleep(2);
    exit(0);
}

int main()
{
    char str[10];
    do
    {
        printf("*********\n");
        createProcess();
        printf("/////////");
        scanf("%s", str);
    } while (str != "exit");
    printf("BYE\n");
    return 0;
}
