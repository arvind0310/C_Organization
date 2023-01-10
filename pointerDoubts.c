//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// C++ program to illustrate
// Core Dump/Segmentation fault

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// allocating memory to p
// int *p = (int *)malloc(8 * sizeof(int));

// printf("%p\n", p);
// *p = 100;

// deallocated the space allocated to p
// free(p);

// core dump/segmentation fault
//  as now this statement is illegal

// printf("%p\n", p);

/* ----------------*/
// p = NULL;
// printf("%p\n", p);
// *p = 110;
// printf("%p\n", p);
//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     char *p = 0;
//     printf("%p\n", p);
//     printf("%d\n", *p);

//     char *p = NULL;
//     printf("%p\n", p);
//     printf("%d\n", *p);
// }

//++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// int main()
// {
//     int a = 30;
//     // printf("%p\n", &a);

//     char *j;
//     // j = &a; --> not vaid trying to give(assign) int pointer to a char pointer.

//     j = (char *)&a;
//     // printf("%p\n", j); // it will only point to 1 st byte of int a {only 1 byte(8 bit)[1xx11xx1] --> for signed till 127 int val}

//     printf("%d\n", *j); // it will read only 1 byte(8 bit) --> for signed till 127 int val
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// int main()
// {
// int a = 129;
// char *j;
// j = (char *)&a; // it will only point to 1 st byte of int a {only 1 byte(8 bit)[1xx11xx1] --> for signed till 127 int val}

//     printf("%d\n", *j);
//     return 0;
// }
//++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// int main()
// {
//     float a = 3;
//     printf("%p\n", &a);

//     char *j;
//     j = (char *)&a;
//     printf("%p\n", j);

//     printf("%d\n", *j);
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// int main()
// {
//     float a = 3.14;
//     printf("%p\n", &a);

//     char *j;
//     j = (char *)&a;
//     printf("%p\n", j);

//     printf("%d\n", *j);
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++=
// #include <stdio.h>
// int main()
// {
//     float a = 3.14;
//     printf("%p\n", &a);

//     char *j;
//     j = (char *)&a;
//     printf("%p\n", j);

//     printf("%d\n", *j);
//     return 0;
// }

//+++++++++++ seg fault +++++++++++++++++++++++++++
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr = NULL;
//     *ptr = 10;
//     printf("ptr=%d ptr=%p\n", *ptr, ptr);

//     return 0;
// }

//++++++++++ correct ++++++++++++++++++++++++

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

//++++++++++++++ correct ++++++++++++++++++++++++
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

//+++++++++++++++ wrong ++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     char str[8] = "arvind";
//     printf("%p\n", (str + 1));
//     str=str+1;
//     printf("%c\n", *(str));
// }

//+++++++++++++++ correct +++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//   int arr[5] = {1, 2, 3, 4, 5};
//   printf("%p\n", arr);
//   printf("%d\n", *arr);
//   printf("%d\n", *(arr + 1));
// }

//++++++++++++++ wrong +++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     printf("%p\n", arr);
//     printf("%d\n", *arr);
//     arr++;
//     printf("%d\n", *arr);
// }


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++