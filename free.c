// #include <stdlib.h>
// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
//     char *title = NULL;
//     title = (char *)malloc(15 * sizeof(char)); // allocate 15 byte of memory to title on heap.
//     strcpy(title, "C Programming");
//     printf("String = %c\n", *title);
//     printf("%p\n", title);
//     free(title);  // free the memory which has been allocated on the heap.
//     // title = NULL; // or title = 0;
//     strcpy(title, "C++");
//     printf("%s\n", title);
//     printf("%p\n", title);

//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main(void)
{
    char *title = NULL;
    title = (char *)malloc(15 * sizeof(char)); // allocate 15 byte of memory to title on heap.

    strcpy(title, "C Programming");
    printf("String = %c\n", *title);

    printf("%p\n", title);
    free(title); // free the memory which has been allocated on the heap.
    printf("%p\n", title);

    strcpy(title, "C++");
    printf("%s\n", title);
    return 0;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
