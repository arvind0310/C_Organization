
/* fp = popen(cmd, "r"); >> will read the output fro the comand and can save it t file

  fp = popen(cmd, "w"); >> this will directly run to your terminal..( see below code)
  */



 /*      BASIC
 #include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    char value[100] = {0};
    FILE *fp = NULL;
    fp = fopen("sample.txt", "r");
    // now it will point to each litrall without spaces at once 
    // like 1st: arvind , 2nd: kumar .... 
    fscanf(fp, "%s", value);
    printf("data = [%s]\n", value);
    fscanf(fp, "%s", value);
    printf("data = [%s]\n", value);
    fscanf(fp, "%s", value);
    printf("data = [%s]\n", value);
}
*/




/* BASIC METHOD2:
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    char value[100] = {0};
    FILE *fp = NULL;
    fp = fopen("sample.txt", "r");
    if (fp != NULL)
    {
        while (fscanf(fp, "%s", value) != EOF)
        {
            printf("data = [%s]\n", value);
        }
        pclose(fp);
    }
}
*/







/*program 1:

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    char value[100] = {0};
    FILE *fp = NULL;
    fp = popen("ls", "r");
    // fread(value,sizeof(char),100, fp);
    if (fp != NULL)
    {
        while (!feof(fp)) // while((fscanf(fp,"%s",value))!=-1)
                          // >> when checking if string is there on every time
        {
            if (fgets(value, 100, fp) != NULL)
                printf("%s\n", value);
        }
        pclose(fp);
    }
    return 0;
} */

/* program 2:
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    char value[100] = {0};
    FILE *fp = NULL;
    fp = popen("ls", "r");
    while (!feof(fp))
    {
        if (fscanf(fp, "%s", value) > 0)
        {
            printf("data = [%s]\n", value);
        }
    }
    pclose(fp);
} */

/* //Program 3:
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    char value[100] = {0};
    FILE *fp = NULL;
    fp = popen("ls", "r");
    if (fp != NULL)
    {
        while (!feof(fp))
        {
            if (fscanf(fp, "%s", value) > 0)
            {
                printf("data = [%s]\n", value);
            }
        }
        pclose(fp);
    }
} */

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>

// int executeShellCmd(char *cmd)
// {
//     FILE *fp;
//     char result[128];

//     printf("[CMD] = %s\n", cmd);
//     fp = popen(cmd, "r"); // reading and storing data
//     if (fp != NULL)
//     {
//         while (fscanf(fp, "%s", result) != EOF)
//         {
//             printf("%s ", result);
//         }
//     }
//     else
//     {
//         printf("[%s:] Unable to execute cmd", __func__);
//         return -1;
//     }

//     pclose(fp);
//     return 0;
// }
// int main()
// {
//     char cmd[50];
//     strcpy(cmd, "date");
//     executeShellCmd(cmd);
// }

//++++++++++++++++ fp = popen(cmd, "w") +++++++++++++++++++++++

//  #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>

// int executeShellCmd(char *cmd)
// {
//         FILE *fp;

//         printf("[CMD] = %s\n", cmd);
//         fp = popen(cmd, "w"); // will execute on our terminal
//         if (fp == NULL) {
//                 printf("[%s:] Unable to execute cmd", __func__);
//                 return -1;
//         }

//         pclose(fp);
//         return 0;
// }
// int main()
// {
//     char cmd[50];
//     strcpy(cmd,"ls");
//     executeShellCmd(cmd);
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++

/*:

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <inttypes.h>
#include <string.h>

typedef struct storeSrfrInfo
{
    long SysUpTime;
    uint64_t LastRbtTime;
    int CpuUsage;
    int MemUsage;
    int LinkUtil_eth0[2];
    int LinkUtil_eth1[2];
    int Temperature;
} SrfrInfor;

int main()
{

    uint64_t boot_time, totalMem, free, usedMem;
    char data[50];
    SrfrInfor *srfrStats;
    srfrStats = (SrfrInfor *)malloc(sizeof(SrfrInfor));
    memset(srfrStats, '\0', sizeof(SrfrInfor));

    FILE *fp;
    fp = popen("free", "r");

    if (fp != NULL)
    {
        while ((fscanf(fp, "%s", data)) != -1) //while (fscanf(fp,"%s",buf) != EOF)
        {
            if ((strcmp(data, "Mem:")) == 0)
            {
                // memset(data, 0, 256); // if you want before putting string into data
                fscanf(fp, "%s", data); // every time fp change his pointer to his next litral
                printf("data:%s\n", data);
                totalMem = atol(data);
                fscanf(fp, "%s", data);
                printf("data:%s\n", data);
                usedMem = atol(data);
                fscanf(fp, "%s", data);
                printf("data:%s\n", data);
                free = atol(data);
            }
        }
        pclose(fp);
    }

    // if (totalMem > 0)
    // {
    //     srfrStats->MemUsage = ((usedMem * 100) / totalMem);
    // }
    // else
    // {
    //     srfrStats->MemUsage = 0;
    // }

    // printf("memory = %d\n", srfrStats->MemUsage);
} */

// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>
// #include <stdint.h> //#include <inttypes.h>

// #define PROC_STAT "/proc/stat";
// int main()
// {
//     FILE *fp;
//     uint64_t boot_time;
//     char data[100];
//     fp = fopen("/proc/stat", "r");
//     // fp = popen("cat /proc/stat", "r");

//     if (fp != NULL)
//     {

//         while (fscanf(fp, "%s", data) != EOF) // while ((fscanf(fp, "%s", data)) != -1)
//         {
//             if ((strcmp(data, "btime")) == 0)
//             {
//                 fscanf(fp, "%s", data);
//                 printf("data in string:%s\n", data);
//                 boot_time = atol(data);
//                 break;
//             }
//         }
//         printf("boot time:%ld", boot_time);

//         fclose(fp);
//     }
// }

