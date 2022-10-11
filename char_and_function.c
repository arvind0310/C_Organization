
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// void fun(void *ptr)
// {
//     char *newStr;
//     newStr = (char *)ptr;
//     printf("%s\n", newStr);
//     // free(newStr);
//     printf("%c\n", *newStr);
//     *(newStr + 1) = 'x';
//     printf("%s\n", newStr);
// }
// int main()
// {
//     char *str;
//     str = malloc(sizeof(char) * 7);
//     strcpy(str, "arvind");
//     fun(str);
// }




//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// void fun(void *ptr)
// {
//     char *newStr;
//     newStr = (char *)ptr;
//     printf("%s\n", newStr);
//     // free(newStr);
//     printf("%c\n", *newStr);
//     *(newStr + 1) = 'x';
//     printf("%s\n", newStr);
// }
// int main()
// {
//     char *str;
//     str = malloc(sizeof(char) * 7);
//     strcpy(str, "arvind");
//     fun(str);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// void fun(char *newStr)
// {

//     printf("%s\n", newStr);
//     printf("%c\n", *newStr);
//     *(newStr + 1) = 'x'; // cant change string liteal
//     printf("%s\n", newStr);
// }
// int main()
// {
//     char *str = "arvind";
//     fun(str); // will pass as a string litrel
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
void fun(void *ptr)
{
    char *newStr;
    newStr = (char *)ptr;
    printf("%s\n", newStr);
    printf("%c\n", *newStr);
    *(newStr + 1) = 'x';
    printf("%s\n", newStr);
}
int main()
{
    char *str = "arvind";
    // char str[]="arvind";
    fun(str);
}

//+++++++++++++++++++++++++++++++++++
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int main()
// {
//     char *name = "arvind";
//     *(name+1) =  'x';
// }