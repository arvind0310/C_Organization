// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// int encURL(char *concatenatedString, char *encryptedValue)
// {
//     printf("concatenated string : %s\n", concatenatedString);
//     strncpy(encryptedValue, "***", 256);
//     encryptedValue[strlen(encryptedValue) - 1] = '\0';
// }
// int main()
// {
//     char temp_firmwareURL[] = "https://api.dev2.cobo.solutions/srfr/firmware/download/?srfrSerialNum=PRT11930U00019&fwVer=11.1.180-rel&model=SurferA&timestamp=1234677";
//     char temp_srfrSerialNo[50] = "PRT11930U00019", firmwareURL[256] = {0};
//     char *timeStampPtr, *url, timestamp[128], encryptedValue[128] = {0};

//     timeStampPtr = strrchr(temp_firmwareURL, '=');
//     printf("%s\n", timeStampPtr + 1);
//     url = strstr(temp_firmwareURL, "&timestamp");
//     *(url) = '\0';
//     printf("%s\n", temp_firmwareURL);
//     strcat(temp_srfrSerialNo, timeStampPtr + 1);
//     encURL(temp_srfrSerialNo, encryptedValue);
//     sprintf(firmwareURL, "%s&pwd=%s", temp_firmwareURL, encryptedValue);
//     printf("final URL :[%s]\n", firmwareURL);
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char name[128] = "C: Label:OS Serial Number 8eeb56c0";
//     char *ptr;
//     if (ptr = strtok(name, "Serial"))
//         *(ptr) = '\0';
//     printf("%s\n", name);
// }
//+++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char name[128] = "C: Label:OS Serial Number 8eeb56c0";
//     char *ptr;
//     ptr = strtok(name, ": ");
//     while (ptr != NULL)
//     {
//         printf("%s\n", ptr);
//         ptr = strtok(NULL, ": ");
//     }

//     // printf("%s\n", ptr);
//     // printf("%s\n", name);
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[] = "- This, a sample string.";
//     char *pch;
//     printf("Splitting string \"%s\" into tokens:\n", str);
//     pch = strtok(str, " ,.-");
//     while (pch != NULL)
//     {
//         printf("%s\n", pch);
//         pch = strtok(NULL, " ,.-");
//     }
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char name[128] = "arvind:kumar";
//     char name1[128] = "arvind:kumar";

//     char *ptr, *ptr1;
//     ptr = strtok(name, ":");
//     printf("%c\n", *ptr);
//     printf("%s\n", ptr);

//     ptr1 = strstr(name1, "kumar"); // pointing to kumar strating 'k'
//     printf("%c\n", *ptr1);
//     printf("%s\n", ptr1);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <sys/ipc.h>
// #include <sys/msg.h>
// typedef struct msgbuf
// {
//     int type;
//     // char val;
//     // char val1;
//     // int type1;
//     char str[25];

// } buff_t;

// int main(int argc, char *argv[])
// {
//     buff_t *msg;
//     printf("%ld\n", sizeof(buff_t));
//     printf("%ld\n", sizeof(char));
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     typedef struct discovery
//     {
//         char *mac;

//     } disc_t;

//     disc_t *discDev;  // do malloc other wise seg fault
//     int devCount = 0;
//     discDev[0].mac = (char *)malloc(10);

//     // for (int i = 0; i < 2; i++)
//     // {
//     //     printf("hii\n");
//     //     discDev[devCount].mac = (char *)malloc(i + 1);
//     // }
//     // discDev[devCount].mac = (char *)malloc(3);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// // #define NAME ("arvind"|"yadav")
// // #define NAME "arvind"
// // #define NAME "arvind " \
// //              "yadav"
// int fun1(int c)
// {
//     printf("fun1:%d", );
// }
// int fun(int a, int b)
// {
//     printf("Hi\n");
//     fun1(b);
// }
// int main()
// {
//     fun(3, 5);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     for (int i = 0; i < 4; i++)
//     {
//         if (i == 2)
//             continue;
//         printf("[%d]\n", i);
//     }
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char *name = "arvind", cmd[256];
//     sprintf(cmd, "%s:%s", name, name);
//     printf("[%s]", cmd);
// }

//++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int x = 5;
//     if (x > 1)
//         printf(">1\n");
//     else
//         printf(">5\n");
// }

// +++++++++++++++++moved to ascii.c +++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char ch[3] = '10';
//     int num = ch - '0';
//     printf("num:%d\n %d*10 = %d\n", num, num, num * 10);
// }

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// int main()
// {
//     int k;                         // variable declaration
//     for (int k = 0; k <= 255; k++) // for loop from 0-255
//     {
//         printf("\nThe ascii value of %c is %d", k, k);
//     }
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
//     char metric[] = "yadav";
//     int value = 2;
//     if ((strcmp(metric, "arvind") == 0 || strcmp(metric, "yadav") == 0) && value > 1)
//         printf("true\n");
//     else
//         printf("bye\n");
// }

//+++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct studentDetails
{
    // char name[20];
    // int id;
    char a; // 1 byte
    int c;  // 4 bytes

    char b; // 1 byte

} student_t;
int main()
{
    student_t student;
    printf("%ld\n", sizeof(student_t));
    return 0;
}
