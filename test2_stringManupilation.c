// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char baseFilter[100] = "enterprises.14823.2.3.3.1.2.4.1.1;SNMPv2-SMI::enterprises.14823.2.3.3.1.2.4.1.1.";
//     char *ptr = NULL, *sed = NULL;
//     char temp_baseFilter[150] = {0}, temp_grepFilter[100] = {0}, grepFilter[100] = {0}, sedFilter[100] = {0};
//     strcpy(temp_baseFilter, baseFilter);
//     ptr = strtok(temp_baseFilter, ";");
//     printf("ptr:%s\n", ptr); //***
//     strcpy(temp_grepFilter, ptr);
//     ptr = strtok(NULL, ";");
//     printf("ptr:%s\n", ptr); //***
//     if (ptr)
//     {
//         sed = strtok(ptr, ",");
//         printf("sed:%s\n", sed); //****
//     }

//     /*creates sed filter having more then one sed command eg. xyz,abc then result will be | sed 'xyz' | sed 'abc' */
//     while (sed != NULL)
//     {
//         strcat(sedFilter, " | sed 's/");
//         strcat(sedFilter, sed);
//         strcat(sedFilter, "//'");

//         sed = strtok(NULL, ",");
//         printf("sedFilter:%s\n", sedFilter); //****
//     }
//     ptr = strtok(temp_grepFilter, ",");
//     printf("ptr:%s\n", ptr); //****

//     while (ptr != NULL)
//     {
//         strcat(grepFilter, " | grep '");
//         strcat(grepFilter, ptr);
//         strcat(grepFilter, "'");
//         printf("grepFilter:%s\n", grepFilter); //****

//         ptr = strtok(NULL, ",");
//     }
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char *str1, *str2;

//     str1 = (char *)malloc(sizeof(char) * 10);

//     // str1 = (char *)malloc(sizeof(char)*(-1)); // seg fault

//     strcpy(str1, "arvind");
//     printf("%s\n", str1);
//     printf("%c\n", *str1);
//     *(str1 + 1) = 'x';
//     printf("%s\n", str1);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define FREE(ptr) {if (ptr) {free(ptr); ptr = NULL;} else printf("NO MEMORY FOUND IN PTR\n");}
// typedef struct discovery {
//     char *ip;
//     char *mac;
//     char *oid;
//     char *community;
//     int state;
// }disc_t;

// int main()
// {
//     disc_t discDev;
//     memset(&discDev, '\0', sizeof(disc_t));
//     discDev.mac = (char *)malloc(sizeof(char) * 100);
//     FREE(discDev.mac);

// }

//+++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char *middle = "example";
//     printf("len:%ld\n",strlen(middle));
//     char *result = malloc(sizeof(char)*strlen(middle));

//     sprintf(result, "<%s>", middle);
//     printf("result:%s\n", result);

//     // the strcat solution
//     // result[0] = '\0';
//     // strcat(result, "<");
//     // strcat(result, middle);
//     // strcat(result, ">");
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++

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

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int main()
// {
//     int x = 3;
//     if (x > 3)
//     {
//         printf("hii\n");

//     }
//     // printf("hello\n"); //error
//     else
//     {
//         printf("bye\n");
//     }
// }

//+++++++++++++++++++++++++++++++++++

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
//     char *str = "arvind";
//     // str = malloc(sizeof(char) * 7);
//     // strcpy(str, "arvind");
//     fun(str);
// }

//+++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int x;
// int fun()
// {
//     return x;
// }
// int main()
// {

//     printf("%p\n",fun());

//     // int *ptr = 1;
//     // printf("%p\n", ptr);
//     // printf("%d\n", *ptr);
// }
//+++++++++++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int main()
// {
//     char str[10] = "arvind", val[10];
//     sprintf(val, "hii %s", str);
//     printf("%s\n", val);
// }

//++++++++++++++++++++ Seg Fault +++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int main()
// {
//     char str[10] = "arvind";
//     printf("%s:%p\n", str, str);
//     char *ptr = strtok("kumar:yadav", ":");
//     printf("%s\n", ptr);
// }

//+++++++++++++++++++++++++++++ important ++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int main()
// {
//     char str[10] = "arvind";
//     char str1[] = "kumar:yadav";
//     printf("%s: -> %c:%p\n", str, *str, str); // here str points to base adress
//     char *ptr = strtok(str1, ":");
//     printf("%s: -> %c:%p\n", ptr, *ptr, ptr);
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int fun(char *name)
// {
//     char val[128] = "string";
//     char res[128] = {0};
//     strcpy(res, val);
//     strcpy(name, res);
// }
// int main()
// {
//     char str[10] = "arvind";
//     char name[128] = {0};
//     fun(name);
//     printf("%s\n", name);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int fun(char *name)
// {
//     char val[128] = "string";
//     strcpy(name, val);
// }
// int main()
// {
//     char str[10] = "arvind";
//     char name[128] = {0};
//     fun(name);
//     printf("%s\n", name);
// }
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++