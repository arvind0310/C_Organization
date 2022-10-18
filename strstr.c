
/* in strtsr you can also compare a string to know this particular part exist/not (a character as well), while in strchr you cann only first occ of a single charcater */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char name[][30] =
//         {
//             "arvindkumar",
//             "chanduyadav",
//         };
//     printf("name[0]:%s\n",name[0]);
//     printf("name[1]:%s\n",name[1]);

//     if (strstr(name[0],"yadav") == NULL) // function returns a pointer points to the first character of the found s2 in s1, otherwise a NULL pointer, if no string
//     {
//         printf("true\n");
//     }
//     else
//     {
//         printf("bye\n");
//     }
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char name[20] = "arvind";
//     char *p;
//     // p = strstr(name, "y");
//     p = strstr(name, "i"); // pointer strated from letter i onwords.

//     if (p)
//         printf("%s\n", p);
//     else
//         printf("Not found\n");
// }

//++++++++++++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int main()
// {
//     char str[100] = "fan0:stop";
//     char *ptr1, *ptr2, *ptr3;

//     ptr1 = strchr(str, ':');
//     printf("%s\n", ptr1);

//     // ptr2 = strstr(str, ":");
//     // ptr2 = strstr(str, "an0");
//     // ptr2 = strstr(str, ":st"); // show from first occ (:s..) // will show from second arg passed if avalable
//     ptr2 = strstr(str, "an"); // if not found then return NULL -- if print NULL -> seg fault
//     /* soln to escape from seg fault if no string stringa available in ptr */
//     if (ptr2)
//         printf("%s\n", ptr2);
//     else
//         printf("no string available for ptr2\n");

//     ptr3 = strtok(str, ":");
//     printf("%s\n", ptr3);
// }

//+++++++++++++++++++++++++++++++++++++++
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int main()
// {
//     char *ptr = NULL;
//     printf("%p\n", ptr); // address
//     printf("%s\n", ptr); // seg fault, you can not refrence NULL
// }

//++++++++++++++++++++++++++++++++++++++++
// #include <stdlib.h>
// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
//     char *title = NULL;
//     strcpy(title, "arvind");
//     printf("%s\n", title);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++
// #include<stdlib.h>
// #include<string.h>
// #include <stdio.h>
// int main ( void )
// {
//   char *title=NULL;
//   title = (char *) malloc(15);
//   strcpy(title, "C Programming");
//   printf("String = %c\n", *title);
// //   free(title);
//   title=NULL;    //or title = 0;
//   strcpy(title, "C++");
//   printf("%s", title);
//   return 0;
// }