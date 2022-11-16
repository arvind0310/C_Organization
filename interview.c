

// ask about ascii values -> refer ascii.c

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
// #include<string.h>
// #include <stdlib.h>
// // void main(int argc, char **argv)
// void main(int argc, char *argv[])
// {
//         printf("command line arg : %s\n", argv[0]);
//         printf("command line arg : %s\n", argv[1]);
//         printf("command line arg : %s\n", argv[2]);
//         printf("command line arg : %s\n", argv[3]);
//         /* extracting element */
//         // printf("command line arg[3]'s element 3rd : %c\n", argv[3][2]);

//         printf("total argument in CLI: %d\n", argc);

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

#include <stdio.h>
#include <stdlib.h>
int main()
{
  char str[] = "ab";
  // int val = (int)str; /*wrong -> arr is actially a char pointer */
  // printf("%d\n", str); /*wrong*/

  printf("%p\n", str); // base add of str.
  int val = (int)*str; // at base add derefrencing -> *str -> 'a' then (int)a -> 97
  printf("%d\n", (int)*str);
  printf("%d\n", val);
}

//+++++++++++++++++++++++++++++++++++++++++

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
