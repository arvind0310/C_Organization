
//++++++++++++++++++++++++++++

// #include <stdio.h>
// int main(){
//     printf("%c\n",'6'-'3');
//     return 0;
// }

//+++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char *str1, *str2;
//     str1 = (char *)malloc(10*sizeof(char));
//     strcpy(str1,"arvind");
//     printf("str1:%p\n", str1);
//     printf("str1:%s\n", str1);
//     str2 = str1;
//     // str1 = NULL;
//     free(str1);
//     printf("str1:%s\n", str1);
//     printf("str1:%p\n", str1);

//     printf("str2:%p\n", str2);
//     printf("str2:%s\n", str2);

//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int ret = 0;
// int fun1()
// {
//     ret = 3;
//     printf("%d\n", ret);
// }
// int fun2()
// {
//     ret = 4;
//     printf("%d\n", ret);
// }
// int main()
// {
//     printf("%d\n", ret);
//     fun1();
//     // fun2();
//     printf("%d\n", ret);
//     return 0;
// }

//+++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     // //char str[]="Cisco IOS Software, IOS-XE Software, Catalyst 4500 L3 Switch Software (cat4500e-UNIVERSALK9-M), Version 03.03.01.SG RELEASE SOFTWARE (fc2) Technical Support: http://www.cisco.com/techsupport Copyright (c) 1986-2012 by Cisco Systems, Inc. Compiled Sun 2";
//     // char str[]="Jamie W Steenberge <jsteenberge@saranac.org>";
//     // printf("size:%ld",strlen(str));
//     int portNum;
//     char *ptr;
//     char str[64] = ".1.3.6.1.2.1.2.2.1.8.1";
//     ptr = strrchr(str, '.');

//     printf("%c\n", *ptr);
//     printf("%s\n", ptr);
//     printf("%s\n", ptr + 1);

//     if (ptr)
//     {
//         portNum = atoi(ptr + 1);
//         printf("portNum: %d", portNum);
//         *ptr = '\0';
//         printf("%s\n", ptr);
//     }
// }







//++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int num = 5;
//     fibb(0, 1, 10);
// }

// int fibb(int a, int b, int n)
// {
//     printf("%d\n", a);
//     printf("%d\n", b);
//     int sum=a+b;

//     for (int i = 0; i < n - 2; i++)
//     {
//         b = a + b;
//         a = b - a;
//         sum+=b;
//         printf("%d\n", b);
//     }
//     printf("sum: %d\n", sum);
// }

//+++++++++++++++++++++++++



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 7, 5, 5, 8, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("size:%d\n", size);
    int element = arr[0];
    for (int i = 1; i < size; i++)
    {
        element = element ^ arr[i];
    }
    printf("ans:%d\n", element);
}