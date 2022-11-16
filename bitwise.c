

// #include <stdio.h>

// int main()
// {
//     int num, n, newNum;

//     /* Input number from user */
//     printf("Enter any number: ");
//     scanf("%d", &num);

//     /* Input bit position you want to set */
//     printf("Enter nth bit to set (0-31): ");
//     scanf("%d", &n);

//     /* Left shift 1, n times and perform bitwise OR with num */
//     newNum = (1 << n) | num;

//     printf("Bit set successfully.\n\n");
//     printf("Number before setting %d bit: %d (in decimal)\n", n, num);
//     printf("Number after setting %d bit: %d (in decimal)\n", n, newNum);

//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>

// int main()
// {

//     // printf("%d\n", 2 << 30);
//     printf("%d\n", 3 ^ 30);

//     // int num = 5, i;

//     // for (i = 0; i <= 2; ++i)
//     // {
//     //     printf("Right shift by %d: %d\n", i, num >> i);
//     // }
//     // printf("\n");

//     // for (i = 0; i <= 3; ++i)
//     // {
//     //     printf("Left shift by %d: %d\n", i, num << i);
//     // }

//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int arr[] = {1, 1, 2, 2, 3, 9, 3, 5, 5, 8, 8, 11, 9};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     printf("size:%d\n", size);
//     int element = arr[0];
//     for (int i = 1; i < size; i++)
//     {
//         printf("%d ^ %d = ", element, arr[i]);
//         element = element ^ arr[i];
//         printf("%d\n", element);
//     }
//     printf("ans:%d\n", element);
// }

//++++++++++++++++++++ do xor of first n number(1^2^3^4 ...) ++++++++++++++++++++++++++++

/*O(n)*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int res = 0, n;
//     printf("entrer n:");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         // printf("%d ^ %d = ", res, i);
//         res = res ^ i;
//         // printf("%d\n", res);
//     }
//     printf("result:%d\n", res);
// }

//+++++++++++++++++++++++++++++++++++ M(2) --> O(1)++++++++++++++++++++++++++++++++++++++
/*
i=1: 1 = 1
i=2: 1 ^ 2 = 3
i=3: 3 ^ 3 = 0
i=4: 0 ^ 4 = 4
i=5: 4 ^ 5 = 1
i=6: 1 ^ 6 = 7
i=7: 7 ^ 7 = 0
i=8: 0 ^ 8 = 8

== observe patter ===
*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int res = 0, n;
//     printf("entrer n:");
//     scanf("%d", &n);
//     if (n % 4 == 0)
//         printf("%d\n", n);
//     if (n % 4 == 1)
//         printf("%d\n", 1);
//     if (n % 4 == 2)
//         printf("%d\n", n + 1);
//     if (n % 4 == 3)
//         printf("%d\n", 0);
// }

//++++++++++++++++++++++++++ do xor from L-> R (like 2-> 4 = 2^3^4)++++++++++++++++++++++++++++
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int min = 0, max = 0, res = 0;
//     printf("enter min and max:");
//     scanf("%d %d", &min, &max);
//     for (int i = min; i <= max; i++)
//     {
//         res = res ^ i;
//     }
//     printf("%d\n", res);
// }

//+++++++++++++++++++++++++ M(2) +++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int funXor(int num)
// {
//     if (num % 4 == 0)
//         return num;
//     if (num % 4 == 1)
//         return 1;
//     if (num % 4 == 2)
//         return num + 1;
//     if (num % 4 == 3)
//         return 0;
// }
// int main()
// {
//     int min = 0, max = 0;
//     printf("enter min and max range:");
//     scanf("%d %d", &min, &max);
//     int result = funXor(max) ^ funXor(min - 1);
//     printf("result:%d\n", result);
// }

//+++++++++++++++++ check even/odd number faster ++++++++++++++++++++++++++++++++++++++++++++++++
/* if num is odd LSB will be 1 --> to make odd no it is req +1 only 0th bit make +1
and vice versa if even LSB is 0 it is even

WAP to check LSB is set or not*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
// int num;
// printf("enter num:");
// scanf("%d", &num);
//     if (num & 1 == 1)
//         printf("odd\n");
//     else
//         printf("even\n");
// }
//+++++++++++++++++++++++++ check wether ith bit is set or not +++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int num, i;
//     printf("enter num and ith bit:");
//     scanf("%d %d", &num, &i);
//     int res = (1 << i) & num;
//    // printf("%d\n", res);
//     if (res == 0)
//         printf("%d bit is not set\n", i);
//     else
//         printf(" bit is set\n");
// }

//+++++++++++++++++++++++++++ exract the ith bit +++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int num, i;
//     printf("enter num and ith bit:");
//     scanf("%d %d", &num, &i);
//     int res = (1 << i) & num;
//     printf("%d\n", res);
//     if (res == 0)
//         printf("%d bit is 0\n", i);
//     else
//         printf("%d bit is 1\n", i);
// }

//++++++++++++++++++++++++++ set the ith bit +++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int num, i;
//     printf("enter num and ith bit:");
//     scanf("%d %d", &num, &i);
//     int res = (1 << i) | num;
//     printf("%d\n", res);
// }

//+++++++++++++++++++++++++clear the ith bit M1 +++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int num, i;
//     printf("enter num and ith bit:");
//     scanf("%d %d", &num, &i);
//     int res = (1 << i) ^ num;
//     printf("%d\n", res);
// }

//+++++++++++++++++++++ M2 ++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int num, i;
//     printf("enter num and ith bit:");
//     scanf("%d %d", &num, &i);
//     int res = ~(1 << i) & num;
//     printf("%d\n", res);
// }

//+++++++++++ clear the last set bit ++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int num, i;
//     printf("enter num:");
//     scanf("%d", &num);
//     int res = num & (num - 1);
//     printf("%d\n", res);
// }

//+++++++++++++++++++++ check if it is in power of 2 ++++++++++++++++++++++++++++++
/*
8 = 1 0 0 0
7 = 0 1 1 1

AND-> 0 0 0 0*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
// int num, i;
// printf("enter num:");
// scanf("%d", &num);
//     int res = num & (num - 1);
//     if (res == 0)
//         printf("power of two\n");
//     else
//         printf("not\n");
// }

//+++++++++++++++++++++++++++ count no of set bit ++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int num, i, count = 0;
//     printf("%d\n", count);
//     printf("enter num:");
//     scanf("%d", &num);
//     while (num != 0)
//     {

//         if (num & 1 == 1) // check if LSB is 1 or not
//             count++;
//         num = num >> 1; // num>>=1
//     }
//     printf("%d\n", count);
// }

//+++++++++++++++++++++ M2 -> clear the last set bit and when we do count ++ +++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int num, i, count = 0;
//     printf("enter num:");
//     scanf("%d", &num);
//     while (num != 0)
//     {
//         num = num & (num - 1);
//         count++;
//     }
//     printf("%d\n", count);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++