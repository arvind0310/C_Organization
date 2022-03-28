
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
//     char *pointer = NULL;
//     modify(&pointer);
//     printf("%s\n",pointer); // seg. fault 
                                   
//     return 0;
// }
