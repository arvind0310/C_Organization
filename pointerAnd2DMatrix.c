

//++++++++++++++++++ 1 D concept +++++++++++++++++++++++++++++++++++++++++++++++++

/* if you are doing int arr[] or char str[] then you cant increment like arr++, str++ cz its not ptr its an array var.*/

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

//+++++++++++++++++++ correct ++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     printf("%p %d\n", arr, *arr);
//     printf("%p %d\n", (arr + 1), *(arr + 1));
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;
//     int arr[5] = {1, 2, 3, 4, 5};
//     printf("%p\n", arr);
//     ptr = arr; // base add of arr
//     printf("%p\n", ptr);

//     printf("%d\n", *ptr);
//     ptr++;
//     printf("%d\n", *ptr);
//     ptr++;
//     printf("%d\n", *ptr);
// }

//+++++++++++++++++++ wrong +++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//      char str[8] = "arvind";
//      printf("%p\n", str); // base add of str array.

//      printf("%c\n", *str);
//      str++;
//      printf("%c\n", *ptr);
// }

//+++++++++++++++++++++ corect +++++++++++++++++++++++++++++++++++++

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

//+++++++++++ 2D +++++++++++++++++++++++++++

//++++++++++++++++++++++ /* using double pinter */  +++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(void)
// {
//      int row = 2, col = 3;
//      int **arr = malloc(sizeof(int) * row);
//      for (int i = 0; i < row; i++)
//           arr[i] = malloc(sizeof(int) * col);

//      // take user input
//      for (int i = 0; i < row; i++)
//           for (int j = 0; j < col; j++)
//           {
//                printf("enter a[%d][%d]:", i, j);
//                scanf("%d", &arr[i][j]);
//           }

//      // print values
//      for (int i = 0; i < row; i++)
//           for (int j = 0; j < col; j++)
//           {
//                printf("a[%d][%d]:= %d\n", i, j, arr[i][j]);
//           }
//      // free memory
//      for (int i = 0; i < row; i++)
//      {
//           free(arr[i]);
//      }
//      free(arr);
// }

//+++++++++++++++++  using single pointer +++++++++++++++++++++++++++++++++++++++++++++++


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(void)
// {
//      int row = 2, col = 3;
//      int *arr[row];
//      for (int i = 0; i < row; i++)
//           arr[i] = malloc(sizeof(int) * col);

//      // take user input
//      for (int i = 0; i < row; i++)
//           for (int j = 0; j < col; j++)
//           {
//                printf("enter a[%d][%d]:", i, j);
//                scanf("%d", &arr[i][j]);
//           }

//      // print values
//      for (int i = 0; i < row; i++)
//           for (int j = 0; j < col; j++)
//           {
//                printf("a[%d][%d]:= %d\n", i, j, arr[i][j]);
//           }
//      // free memory
//      for (int i = 0; i < row; i++)
//      {
//           free(arr[i]);
//      }
// }


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

/*LINK - https://www.scaler.com/topics/c/two-dimensional-array-in-c/ */

// #include <stdio.h>
// int main(void)
// {
//     int m, n;
//     int arr[] = {4, 3, 1, 2};
//     int *p = arr; // p points to the first element of the integer array arr
//     for (int i = 0; i < 4; i++)
//     {
//         printf("%d ", *p);
//         p++; // shifts the pointer to the next element of the array
//     }
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char *str[] = {"arvind", "yadav"};
//     printf("%s\n", str[1]);        // pointing to second array
//     printf("%c\n", *str[1]);       // deref add base add
//     printf("%c\n", *(str[1] + 2)); // deref add base add + 2
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>

// int main(void)
// {
//     int arr[2][3] = {{3, 2, 1}, {8, 9, 10}};
//     int *p[2];
//     p[0] = arr[0]; // Pointer points to first row of 2D array
//     p[1] = arr[1]; // Pointer points to second row of 2D array
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", p[i][j]); // p -> points to base add
//         }
//         printf("\n");
//     }
//     return 0;
// }

//++++++++++++++++ using pointer ++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>

// int main(void)
// {
//     int arr[2][3] = {{3, 2, 1}, {8, 9, 10}};
//     // printf("%d ", *arr[1]); // arr[1] pointing to base of 2nd row, *arr[1] will deref the elem at that base add i.e = 8.
//     printf("%d ", *(arr[1] + 1)); // 8 is on base add + 1 = at add of 9 -> extract it.
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

/*  as in str[] = "abc" =>  str[1] == *(str+1)

     but here arr[][] is diff from str[], arr[0] is not same as str[0], cz there are arr[0],arr[1] .. so point to which arr??


arr[1] --> will tell VALUE --> *(arr+1) --> in string/int arr

arr[1] --> will tell ADDRESS of 2nd row --> *(arr+1) --> addresss --> in 2D string/int arr
     arr[1][2] -->  VALUE --> 3rd element of 2nd row. --> *(*(arr+1)+2)
*/

// #include <stdio.h>

// int main(void)
// {
//     int arr[4][3] = {{2, 3, 1}, {19, 12, 7}, {10, 9, 8}, {3, 11, 5}};
//     printf("%p\n", *(arr)); // same as printf("%p\n", arr[0]);

//     printf("%p\n", *(arr + 1)); // same as printf("%p\n", arr[1]);
//     printf("%d\n", *(*(arr + 1)));

//     // for (int i = 0; i < 4; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         // printf("%d  ", *(*(arr + i) + j)); // *(arr[1] + 1)
//     //         printf("%d ", *(arr[i] + j));
//     //     }
//     //     printf("\n");
//     // }
//     return 0;
// }

//+++++++++++++  important +++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>

// int main(void)
// {
//     int arr[4][3] = {{2, 3, 1}, {19, 12, 7}, {10, 9, 8}, {3, 11, 5}};

//     printf("%d\n", *(*(arr) + 2)); // --> arr[0]+2

//     printf("%p\n", *(arr + 1)); // same as printf("%p\n", arr[1]);
//     printf("%d\n", *(*(arr + 1)));

//     // for (int i = 0; i < 4; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         // printf("%d  ", *(*(arr + i) + j)); // *(arr[1] + 1)
//     //         printf("%d ", *(arr[i] + j));
//     //     }
//     //     printf("\n");
//     // }
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

