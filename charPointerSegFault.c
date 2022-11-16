// #include <stdlib.h>
// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     char *temp;
//     strcpy(temp, "i am string"); // you can't assign a char pointer a strig or array untill malloc(), how it will store each char if it has not memory.
//     printf("temp:%s", temp);
//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     char string[] = "i am string";
//     char *temp;
//     strcpy(temp, string); // you can't assign a char pointer a strig or array untill it is malloc().
//     printf("temp:%s", temp);
//     return 0;
// }

// +++++++++++++ solution +++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     char string[] = "i am string";
//     char *temp = malloc(32 * sizeof(char));
//     strcpy(temp, string); // you can't assign a char pointer a strig or array untill it is malloc().
//     printf("temp:%s\n", temp);
//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     char *temp;
//     temp = (char *)malloc(32 * sizeof(char));
//     strcpy(temp, "i am string");
//     printf("temp:%s\n", temp);
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++