// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int x = 3, y = 4, index;

//     char metrics[][32] = {
//         "memoryFactor",
//         "memBuffer",
//         "memCache",
//         "test",
//         "test 1"};

//     // if (x == 3)
//     // {
//     //     for (int i = 0; i < sizeof(metrics) / sizeof(metrics[0]); i++)
//     //     {

//     //         if (strcmp(metrics[i], "memoryFactor") == 0)
//     //             index = 399;
//     //         else if (strcmp(metrics[i], "memBuffer") == 0)
//     //             index = 400;
//     //         else if (strcmp(metrics[i], "memCache") == 0)
//     //             index = 401;
//     //         else
//     //             continue;
//     //         if (y==4)
//     //         {
//     //             printf("%s\n", metrics[i]);
//     //         }

//     //     }
//     // }
//     if (y == 4)
//     {
//         for (int i = 0; i < sizeof(metrics) / sizeof(metrics[0]); i++)
//         {

//             if (strcmp(metrics[i], "test") == 0)
//                 index = 1;
//             else if (strcmp(metrics[i], "test 1") == 0)
//                 index = 2;
//             else
//                 continue;
//             printf("%s\n", metrics[i]);
//         }
//     }
// }

//++++++++++++++++++++++++++++++++++++++++++++


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fun(char oids[][100])
{
    printf("%ld\n",sizeof(oids));
    memset(&oids, '1', sizeof(oids));

    for (int j = 0; j < 2; j++)
    {
        printf("[%s]\n", oids[j]);
    }
}
int main()
{
    char metrics[][32] = {
        "aaa",
        "bbbb",
        "ccccc",
        "dddddd"
        "eeeeeeeeeeeeee"};

    // printf("%ld\n", (sizeof(metrics) / sizeof(metrics[0])));
    char oids[(sizeof(metrics) / sizeof(metrics[0]))][100] = {0};
    printf("%ld\n",sizeof(oids));

    for (int i = 0; i < 2; i++)
    {
        printf("device:%d\n", i + 1);
        fun(oids);
    }
}