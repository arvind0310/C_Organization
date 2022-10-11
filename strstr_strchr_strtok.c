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

//     ptr2 = strstr(str, ":");
//     printf("%s\n", ptr2);

//     ptr3 = strtok(str, ":");
//     printf("%s\n", ptr3);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int removeCharacter(char *oid, int character)
// {
//     int i, j;
//     for (i = j = 0; i < strlen(oid); i++)
//     {
//         if (oid[i] != character)
//         {
//             oid[j++] = oid[i];
//         }
//     }
//     oid[j] = '\0';
//     return 0;
// }
// int main()
// {
//     char str[100] = "fan0:xstop";
//     char *ptr1, *ptr2, *ptr3;
//     if (ptr1 = strstr(str, ":"))
//     {
//         printf("%s\n", ptr1);
//         printf("%s\n", ptr1 + 1);

//         removeCharacter(ptr1, 'x'); // will remove character from the string.

//         printf("%s\n", ptr1);
//         printf("%s\n", ptr1 + 1);
//     }

//     printf("%s\n", ptr1 + 1);
// }


//++++++++++++++++++++++++++++++++