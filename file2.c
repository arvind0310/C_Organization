#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "file1.h"
// #include "file3.c"
extern int a;
int main()
{
    printf("val in file2:%d\n",a);
    fun();
    printf("val in file2:%d\n",a);

    return 0;
}























//+++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include "file1.h"
// // extern int a;

// int main()
// {
//     a=5;
//     printf("val in file2:%d\n",a);


// }

//+++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include "file1.h"
// #include "file3.c"
// int a;
// int main()
// {
//     printf("val in file2:%d\n",a);
//     fun();
//     printf("val in file2:%d\n",a);

// }