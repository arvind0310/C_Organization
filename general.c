// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>

// int main()
// {
//   char buff[10];
//   memset(buff, 0, 10);
//   printf("%ld\n", sizeof(buff));
//   printf("%s\n",buff);

//   char *value = NULL;
//   value = (char *)malloc(sizeof(char) * 64); // typecasting to char ptr
//   memset(value, 0, 64);
//   printf("%ld\n", sizeof(value));
//   printf("%s\n", value);

//   char *data=malloc(sizeof(char)*32);// already know that its char * so no need to type cast again
//   memset(data, 0, 32);
//   printf("%ld\n", sizeof(data)); // size of pointer
//   printf("%s\n",data);

//   return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>

// int main()
// {
//   int *x,y;
//   x=&y;
//   printf("enter number:");
//   scanf("%d",x);
//   printf("number:%d",*x);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// if no one make go then ..  goto function will run at last by itself.

/*
#include <stdio.h>
int main()
{
  int num = 10;
  if (num > 10)
    goto print;
  printf("not1\n");

print:
  printf("hii by goto\n");
}
*/

//++++++++++++++++++ same but changes ++++++++++++++++++++++++++++++++++++++++++++++

/*
#include <stdio.h>
int main()
{
  int num = 10;
  if (num > 10)
    goto print;
  printf("not1\n");
  if (num == 10)
    goto print;
  printf("not2\n");

print:  // once any condition reach here then no going back.
  printf("hii by goto\n");

  return 0;
} */

/*

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int Max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int d = 1, c = 2, e = MAX(d, c);
    int a = 1, b = 2;
    int result = Max(a, b);
    printf("max among %d and %d using fun is:%d\n", a, b, result);

    printf("maximum using macros: %d\n", e);
    return 0;
}
*/

//+++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// void fun(char *ptr)
// {
//   printf("inside before:%s\n",ptr);
//   ptr="arvind yadav";
//   printf("inside after:%s\n",ptr);
// }
// int main()
// {
//   char str1[50]="arvind";
//   fun(str1);
//   printf("outside:%s\n",str1);

// }

//+++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// int main()
// {

//   char str[20] = "arvind";

//   // str="yadav"; // error

//   printf("bfore modify string:%s\n", str);
//   strcpy(str, "yadav");
//   printf("after modify string:%s\n", str);

//   // char *ptr="arvind";
//   // ptr="yadav";
//   // printf("%s\n",ptr);
// }
//++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

// int getRoute_eth0(char *gateway)
// {
//   strncpy(gateway, "arvind",strlen("arvind"));

//   printf("inside fun:%s\n",gateway);
// }
// int main()
// {
//   char Route[32] = {0};
//   if (Route[0] == '\0')
//     getRoute_eth0(Route);
//   printf("inside main:%s\n",Route);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++

//+++++++++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int main()
// {
//     char str[20]="arvind";
//     char *ptr,*dev;
//     dev = (char *)malloc(sizeof(char));
//     printf("dev1->%p\n",dev);
//     ptr = dev;
//     dev=NULL;
//     printf("ptr->%p\n",ptr);
//     printf("dev2->%p\n",dev);
//     strcpy(ptr, str); //**************
//     printf("%s\n", ptr);
// }


//+++++++++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int main()
// {
//     char *ptr,*dev;
//     dev = (char *)malloc(sizeof(char));
//     printf("dev1->%p\n",dev);
//     ptr = dev;
//     dev=NULL;
//     printf("ptr->%p\n",ptr);
//     printf("dev2->%p\n",dev);
//     strcpy(ptr,"arvind"); //********
//     printf("%s\n", ptr);
// }

//++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// #include<string.h>
// #include <stdlib.h>
// // void main(int argc, char **argv) 
// void main(int argc, char *argv[])
// {
//         printf("command line arg : %s\n", argv[0]);
//         printf("command line arg : %s\n", argv[1]);
//         printf("command line arg : %s\n", argv[2]);
//         printf("command line arg : %s\n", argv[3]);
//         printf("total argument in CLI: %d\n", argc);

// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// int main()
// {
//     long long int value; // max --> 4294967295
//     value = atoll("92233720368547758");
//     printf("%lld",value);

// }
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// int main()
// {
//     int value; // max --> 2147483647
//     value = atoll("2147483648");
//     printf("%d",value);

// }

//+++++++++++++++++++++++++++++++++++++++++++

// int main()
// {
//     char str[]={'x','x','x','x','x'};
//     printf("%s\n",str);
//     char *ptr="alongasganjs";
//     strncpy(str,ptr,5);
//     printf("%s\n",str);

// }

//+++++++++++++++++++++++++++++++++++++++++++++



// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>
// #include  <stdint.h>
// int main()
// {
//   int a;
//   uint8_t b=256;
//   uint16_t c;
//   uint32_t d;
//   uint64_t e;

//   printf("size: %ld byte\n",sizeof(a));
//   printf("size: %ld byte\n",sizeof(b));
//   printf("size: %ld byte\n",sizeof(c));
//   printf("size: %ld byte\n",sizeof(d));
//   printf("size: %ld byte\n",sizeof(e));

//   printf("%d\n",b);

// }
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>

// int main()
// {
//   int x = 4294967295;
//   unsigned int y = 4294967295;
//   printf("%ld\n", sizeof(x));
//   printf("%d\n", x);

//   printf("%ld\n", sizeof(y));
//   printf("%u\n", y);
//   return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>

// int main()
// {
//     unsigned int x=4294967295;  // maximum value that an "unsigned int" can store
//     printf("%ld\n",sizeof(x));
//     printf("%d\n",x); // for signed int
//     printf("%u\n",x); // for unsigned int

//     return 0;
// }

///+++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>

// int main()
// {
//     int x =	2147483648;  // maximum that a int (signed int ) can store after it -2147483647,46.45......2,1,0 (0 when x=4294967296)
//     printf("%ld\n",sizeof(x));
//     printf("%d\n",x); // for signed int
//     printf("%u\n",x); // for unsigned int

//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>
// #include <float.h>

// int main(int argc, char** argv) {

//     printf("CHAR_BIT    :   %d\n", CHAR_BIT);
//     printf("CHAR_MAX    :   %d\n", CHAR_MAX);
//     printf("CHAR_MIN    :   %d\n", CHAR_MIN);
//     printf("INT_MAX     :   %d\n", INT_MAX);
//     printf("INT_MIN     :   %d\n", INT_MIN);
//     printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
//     printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
//     printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
//     printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
//     printf("SHRT_MAX    :   %d\n", SHRT_MAX);
//     printf("SHRT_MIN    :   %d\n", SHRT_MIN);
//     printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
//     printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
//     printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
//     printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);

//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>

// int main()
// {
//   int x = 2147483647;
//   long int y = 9223372036854775808;
//   unsigned long z = 4294967296;
//   // printf("%ld\n",sizeof(x));
//   // printf("%d\n",x); // for signed int
//   // printf("%u\n",x); // for unsigned int
//   printf("%ld\n", sizeof(x));
//   printf("%d\n", x);

//   printf("%ld\n", sizeof(y));
//   printf("%ld\n", y);

//   printf("%ld\n", sizeof(z));
//   printf("%lu\n", z);

//   return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// int base(int a)
// {
//     if (a == 1)
//         return 38;
//     return 37;
// }

// int main()
// {
//     int n = base(1); // now base has returned value 38 
//     printf("Base(1) is %d\n", n); // printing return value
//     return n + 3; // will return 41 but you need to print if u want to see the o/p.
// }

//+++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// int fun()
// {
//     // return 2;
//     printf("hii\n");
//     return 0;
    
// }
// int main()
// {
//     int x=0;
//     while(x<3)
//     {
//         if(x==2)
//         {
//             fun();
//             printf("*****\n");
//             break;
//         }
//         printf("%d\n",x);
//         x++;
//     }
// }
