
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

//+++++++++++++++++++++++++++++++++++++++++++++++++

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
//         element = element ^ arr[i];
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

//     ptr->age = 1;
//     strcpy(ptr->name, "arvind");
//     ptr->class = 12;

//     getData(ptr);
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
//     strcpy(cmd,"ls");
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


