// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// char *fun(char *ptr) // this fun will return a pointer
// {
//     return ptr;
// }

// int main()
// {
//     char str[20] = "arvind";
//     char *var;
//     var = fun(str);
//     printf("%s\n", var);

//     printf("%c\n", *var);

// }

//++++++++++++++++++++ method:1 ++++++++++++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// void fun(char *ptr)
// {
//     printf("%s\n",ptr);

//     printf("%c\n",*ptr);
//     // *(ptr+1)='x';   /* seg fault */
//     // printf("%s\n",ptr);
// }
// int main()
// {
//     char *str="arvind";
//     fun(str);
// }

//++++++++++++++++++ method:2 +++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// void fun(char **ptr)
// {
//     printf("%s\n",*ptr);
//     printf("%c\n",**ptr);
//     // **(ptr+1)='x';   /* seg fault */
//     // printf("%s\n",*ptr);
// }
// int main()
// {
//     char *str="arvind";
//     fun(&str);
// }

//++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// typedef int ui;
// int main()
// {
//     ui uimax = ~0;

//     printf("uimax  %u\n", uimax);

//     return 0;
// }

//++++++++++++++++++++++++

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

//+++++++++++++++++++++++++++++++++++++++

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