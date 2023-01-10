

// ask about ascii values -> refer ascii.c

// ask 1D array -> refer 1D_intArray.c

//+++++++++++++++ take user input string name and show hello with that name on screen +++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// int main()
// {
//   // char name;
//   char name[20];
//   printf("whats your name:");
//   // scanf("%[^\n]s",str); // input space
//   scanf("%s", name);
//   // scanf("%s", &name);
//   printf("hello %s", name);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
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

//+++++++++++++++++++++++ xor prop ++++++++++++++++++++++++++

/*2^2^3^3^ = 0
  2^2^3^3^4 = 4
  2^3^3^4^2 = 4 */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int arr[] = {1, 1, 2, 2, 3, 3, 7, 5, 5, 8, 8};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     printf("size:%d\n", size);
//     int element = arr[0];
//     for (int i = 1; i < size; i++)
//     {
//         element = element ^ arr[i]; //xor of [first two xor result] with [another element]
//         printf("%d\n", element);
//     }
//     printf("ans:%d\n", element);
// }

//++++++++++++++ can we pass argument in int main fun? ++++++++++++

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// // void main(int argc, char **argv)
// void main(int argc, char *argv[])
// {
//   printf("command line arg : %s\n", argv[0]);
//   printf("command line arg : %s\n", argv[1]);
//   printf("command line arg : %s\n", argv[2]);
//   printf("command line arg : %s\n", argv[3]);
//   /* extracting element */
//   // printf("command line arg[3]'s element 3rd : %c\n", argv[3][2]);
//   // printf("command line arg[3]'s element 3rd : %c\n", *(argv[3] + 2));

//   printf("total argument in CLI: %d\n", argc);
// }

//+++++++ diff bw '\0'(NULLL) and '0' +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// C program to print the value of '\0' and '0'
// #include <stdio.h>

// int main()
// {
//   // Print the value of '\0' and '0'
//   printf("\\0 is %d\n", '\0');
//   printf("0 is %d\n", '0');
//   return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// int main()
// {
//     int a = 30;
//     // printf("%p\n", &a);

//     char *j;
//     // j = &a; --> not vaid trying to give(assign) int pointer to a char pointer.

//     j = (char *)&a; // conerting char ptr into int ptr so that var of char ptr can read it
//     // printf("%p\n", j); // it will only point to 1 st byte of int a {only 1 byte(8 bit)[1xx11xx1] --> for signed till 127 int val}

//     printf("%d\n", *j); // it will read only 1 byte(8 bit) --> for signed till 127 int val
//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// int main()
// {
// int a = 129;
// char *j;
// j = (char *)&a; // it will only point to 1 st byte of int a {only 1 byte(8 bit)[1xx11xx1] --> for signed till 127 int val}

//     printf("%d\n", *j);
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr = NULL;
//     *ptr = 10;
//     printf("ptr=%d ptr=%p\n", *ptr, ptr);

//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr, a;
//     a = 10;
//     ptr = &a;
//     printf("a at :%p, ptr at %p, ptr pointing at :%p, ptr= %d\n", &a, &ptr, ptr, *ptr);
//     *ptr = 20;
//     printf("ptr =%d ptr pointing at =%p\n", *ptr, ptr);
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;
//     printf("%p\n", ptr);
//     ptr = (int *)malloc(0); // 0 byte memory allocated ??
//     printf("%p\n", ptr);
//     *ptr = 10; // then where it is stored.
//     printf("%d\n", *ptr);
// }

//++++++++++++ it is right +++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;
//     int arr[5] = {1, 2, 3, 4, 5};
//     printf("%p\n", arr);
//     ptr = arr;
//     printf("%p\n", ptr);

//     printf("%d\n", *ptr);
//     ptr++;
//     printf("%d\n", *ptr);
//     ptr++;
//     printf("%d\n", *ptr);
// }

//+++++++++++++++++ wrong +++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//   int arr[5] = {1, 2, 3, 4, 5};
//   printf("%p\n", arr);
//   printf("%d\n", *arr);
//   arr++;
//   printf("%d\n", *arr);
// }

//+++++++++++++++++ right +++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//   int arr[5] = {1, 2, 3, 4, 5};
//   printf("%p\n", arr);
//   printf("%d\n", *arr); // 1
//   printf("%d\n", *(arr + 1)); //2
// }

//+=========== also this ========================

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     char *ptr;
//     char str[8] = "arvind";
//     ptr = str;
//     printf("%c\n", *ptr);
//     ptr++;
//     printf("%c\n", *ptr);
// }

//+++++++++++++++++ for string also this ++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//   char str[8] = "arvind";
//   printf("%p\n", (str + 1));
//   printf("%c\n", *(str + 1));
// }

//+++++++++++++++ but not this +++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     char str[8] = "arvind";
//     printf("%c\n", *str);
//     str++;
//     printf("%c\n", *ptr);
// }

//++++++++++++ seg fault ++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr=NULL; // ptr is pointing to no where and no where has no value.
//     *ptr = 10; // extarct the value at that address where ptr is poiter is pointing and change it to 10
//     printf("ptr=%d ptr pointng at =%p\n", *ptr, ptr);

//     return 0;
// }

//++++++++++++++++ imp ++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//   int *ptr, a;
//   a = 10;
//   ptr = &a;
//   printf("a is at :%p, ptr is at %p, ptr pointing at :%p, ptr= %d\n", &a, &ptr, ptr, *ptr);
//   *ptr = 20;
//   printf("ptr =%d ptr pointing at =%p\n", *ptr, ptr);
//   return 0;
// }

//+++++++++++++++++++  malloc(0) ++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;
//    // *ptr = 10; // seg fault
//     printf("%p\n", ptr);
//     ptr = (int *)malloc(0); // 0 byte memory allocated ??
//     printf("%p\n", ptr);
//     *ptr = 10; // then where it is stored.
//     printf("%d\n", *ptr);
// }

//+++++++++++ store a value in both way from stack and heap ++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//   // int a = 7, *ptr;
//   // ptr = &a;
//   // printf("a:%d\n", *ptr);

//   int *ptr;
//   ptr = (int *)malloc(4); // 4 byte of memory on heap
//   *ptr = 7;
//   printf("ptr:%d\n", *ptr);
//   free(ptr);
//   ptr = NULL;
// }

//++++++++++++++++++++++++++ seg fault +++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int main()
// {
//     // char str[20]="arvind";
//     char *str="arvind"; // read only
//     *(str)='x';
//     printf("%s\n",str);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int main()
// {
//     char str[10]="arvind";
//     char *ptr; // solution -- char *ptr=malloc(sizeof(char));
//     strcpy(ptr,"arvind"); //or strncpy(ptr,str,strlen(str));
//     printf("%s\n",ptr);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>

// struct student
// {
//     int age;
//     char name[10];
//     int class;
// };

// void getData(struct student *arvind)
// {
//     printf("age is:%d\n", arvind->age);
//     printf("name is:%s\n", arvind->name);
//     printf("class is:%d\n", arvind->class);

// }

// int main()
// {
//     struct student *ptr;
//     ptr = (struct student *)malloc(sizeof(struct student));
/* or --> struct student value */

//     ptr->age = 1;
//     strcpy(ptr->name, "arvind");
//     ptr->class = 12;

//     getData(ptr);
/* getData(&value) */
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>

// int main()
// {
//     char cmd[10]="ls";
//     system(cmd);
// }

//+++++++++++++++++++++++++++ methd : 1 ++++++++++++++++

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
//     strcpy(cmd,"date");
//     executeShellCmd(cmd);
// }

//++++++++++++++ method 2 ++++++++++++++++++++++++=

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
//             printf("%s\n ", result); // print
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
//     strcpy(cmd, "ls");
//     executeShellCmd(cmd);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//   char name[]= "arvind";
//   printf("%c\n", name[2]);
//   printf("%c\n", *(name + 2));
// }

//++++++++++++++++++++++ sizeof [basically its size of arr[] - always take +1 len of string to store '\0' ] & strlen confusion ++++++++++++++++++++++++++++
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   char arr[] = "Hello";
//   printf("%ld\n", sizeof(arr));
//   return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   char arr[] = "Hello";
//   printf("%ld\n", strlen(arr));
//   return 0;
// }

//++++++++++++++ sum of 2 no using pointer ++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//   int a, b, *ptr1, *ptr2;
//   ptr1 = &a;
//   ptr2 = &b;
//   printf("enter a b:");
//   // scanf("%d %d", &a, &b);     // store the element at the add of a var, b var (draw diagram and analyze)
//   scanf("%d %d", ptr1, ptr2); // store elemnts in the add pointer by p1 -> a var and p2 -> b var
//   printf("sum is:%d\n", *ptr1 + *ptr2);
//   printf("sum is:%d\n", a + b); // same as above at the add of a there is val and same for b.
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//   char c = 'a';
//   printf("%d\n", c);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//   char c = 'a';
//   int val = (int)c;
//   printf("%d\n", val);
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//   char str[] = "ab";
//   // int val = (int)str; /*wrong -> arr is actially a char pointer */
//   // printf("%d\n", str); /*wrong*/

//   printf("%p\n", str); // base add of str.
//   int val = (int)*str; // at base add derefrencing -> *str -> 'a' then (int)a -> 97
//   printf("%d\n", (int)*str);
//   printf("%d\n", val);
// }

// +++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <string.h>
// int fun(char *oid)
// {
//   printf("[%s], ", oid);
//   // int ascci_val = (int)oid; /*wrong*/
//   int ascci_val = (int)*oid;
//   printf("ascii - [%d] ", ascci_val);
//   // if (ascci_val < 32 || ascci_val > 255)
//   if (ascci_val == 32 || ascci_val > 57)
//   {
//     printf("not a valid oid\n");
//   }
//   else
//   {
//     printf("valid oid\n");
//   }
// }
// int main()
// {
//   char oid[][20] = {
//       "1",
//       ".1.2.3.4",
//       ".1.2.6.2.5.2",
//       "66",
//       " ",
//       ".1.3.7.6.2.1.8.2",
//       "?"};
//   int total = sizeof(oid) / sizeof(oid[0]);
//   for (int i = 0; i < total; i++)
//   {
//     fun(oid[i]);
//   }
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//   char str[] = "ab";
//   // int val = (int)str; /*wrong -> arr is actially a char pointer */
//   // printf("%d\n", str); /*wrong*/

//   printf("%p\n", str); // base add of str.
//   int val = (int)*str; // at base add derefrencing -> *str -> 'a' then (int)a -> 97
//   printf("%d\n", (int)*str);
//   printf("%d\n", val);
// }

//+++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   char oid[][20] = {
//       "1",
//       ".1.2.3.4",
//       ".1.2.6.2.5.2",
//       "66",
//       " ",
//       ".1.3.7.6.2.1.8.2",
//       "?"};
//   printf("%p\n", oid[0]);
//   // printf("%p\n", *(oid+0));

//   int total = sizeof(oid) / sizeof(oid[0]);
// }

//+++++++++++ 4 byte * 4 byte -> result will try to store in 4 byte itself which is out of 4 byte, warning ... then copy into 8 byte +++++++++++

// #include <stdlib.h>
// #include <stdint.h>
// #include <stdio.h>
// #define INT_MAX_VALUE 2147483647
// void main()
// {
//      unsigned long int value = 0;
//      value = (INT_MAX_VALUE * (unsigned long int)2);
//      printf("val:%lu\n", value);
// }

//++++++++++++++++++++++++++++ valid +++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdint.h>
// #include <stdio.h>

// void main()
// {
//   long long a, b, c;

//   a = 2147483647 + 1; // int(4 byte) + 1 (4 byte) --> will try to store res in 4 byte
//   b = 2147483648; // this value assign to long long 8 byte

//   c = 2147483647; // c is long long, can easily store this value.
//   c = c + 1;

//   printf("%lld\n", a);
//   printf("%lld\n", b);
//   printf("%lld\n", c);
// }

//++++++++++++++++ infinite loop +++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// void main()
// {
//     int i = 0;
//     while (i != 10)
//     {
//         printf("%d\n", i);
//         continue;
//         i++;
//     }
//     printf("finsih\n");
// }

//++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// void main()
// {
//   int i = 0, res = 0;
//   while (i != 10)
//   {
//     printf("%d\n", i);
//     i++;
//     continue;
//   }
//   printf("finsih\n");
// }
//+++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// void main()
// {
//   int i = 0, res = 0;
//   while (i != 10)
//   {
//     printf("%d\n", i);
//     i++;
//     res = res + i;
//     continue;
//   }
//   printf("finsih res:%d\n", res);
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++

