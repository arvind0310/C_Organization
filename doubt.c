//+++++++++++ will through warning ++++++++++++++++++++++++++++++++

// #include <stdio.h>
// int main()
// {
//     int *i;
//     char j = 'a';
//     i = &j;
//     printf("%p\n",i);
//     return 0;
// }

//+++++++++++++ will through warning +++++++++++++++++++++++++++++++

// #include <stdio.h>
// int main()
// {
//     int *i;
//     char j;
//     i = (char *)&j; // i is int ptr, ptr wants adress, adress of same type (here i wants add of (int *) ) here you are pasing a char * to a int *
//     printf("%p\n", i);
//     return 0;
// }

//+++++++++++++++++ what about this ?? ++++++++++++++++++++++++++++

// #include <stdio.h>
// int main()
// {
//     int *i;
//     void *v;
//     char j;
//     v = (void *)&j; // or v = &j
//     i = (int *)v;
//     printf("%p\n", i);
//     printf("%d\n", *i);
//     return 0;
// }

//+++++++++++++++++++ will not give warning --> execute till only 1 byte(8 bit) signed --> 7 bit from left cz 8th is 1 +++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// int main()
// {
//     char *c;
//     int i = 97;
//     //int i = 128 // out of signed leage for char.
//     c = (char *)&i; // here add of i is treated as char *, now c has got what he wanted(a add of char *). 
//     printf("%p\n", c);
//     printf("%c\n", *c);
//     printf("%d\n", *c);

//     return 0;
// }

//++++++++++++ correct but will read 4 byte of that char value a (97) ++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// int main()
// {
//     int *i;
//     char j = 'a';
//     i = (int *)&j;
//     printf("%p\n",i);
//     printf("%d\n",*i);
//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++