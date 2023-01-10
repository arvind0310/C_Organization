
//++++++++ arr in which user taking i/p and i give you the size of arr +++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// int main()
// {
//     int arr[5], i;
//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (i = 0; i < 5; i++)
//     {
//         printf("a[%d]:%d\n", i, arr[i]);
//     }
// }
//++++++++++++++++++++ seg fault ++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// int main()
// {
//     int size,arr[size], i;
//     printf("enter the size of arr:");
//     scanf("%d", &size);
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (i = 0; i < size; i++)
//     {
//         printf("a[%d]:%d\n", i, arr[i]);
//     }
// }

//++++++++++++++++if size of arr is not known ++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// int main()
// {
//     int size, i;
//     printf("enter the size of arr:");
//     scanf("%d", &size);
//     int arr[size];
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (i = 0; i < size; i++)
//     {
//         printf("a[%d]:%d\n", i, arr[i]);
//     }
// }
//+++++++++++++++ dynamically ++++++++++++++++++++++++++++++

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    int *arr, i, size;
    printf("enter the size of arr:");
    scanf("%d", &size);
    arr = (int *)malloc(size * sizeof(int));

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("a[%d]:%d\n", i, arr[i]);
    }
}