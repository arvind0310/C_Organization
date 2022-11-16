#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
void fun(char *ptr)
{
    printf("length:%ld\n", strlen(ptr)); // size of len of string pointed by ptr
    printf("%s\n", ptr);
    printf("%c\n", *ptr);
    *(ptr + 1) = 'x';
    printf("%s\n", ptr);
}
int main()
{
    char str[100] = "arvindtttttt";
    fun(str);
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++

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

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void modify(char **double_pointer)
// {
//     //define a char pointer
//     char *pointer = malloc(5 * sizeof(char));
//     strcpy(pointer, "test");
//     printf("%s\n", pointer); //prints test

//     // point double_pointer to pointer
//     double_pointer = malloc(sizeof(char *));
//     *double_pointer = pointer;
//     printf("%s\n", *double_pointer); //prints test
// }

// int main()
// {
//     //pointer to a pointer
//     char *double_pointer = NULL;
//     modify(&double_pointer);
//     printf("%s\n", double_pointer); // seg. fault >> it can be solved ..
//                                     //when not be allocating memory for double_pointer.
//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

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

//++++++++++++++++++ method:2 ++++++++++++++++++++++++++++++++++++++++

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
