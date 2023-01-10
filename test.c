
//++++++++++++++++++++++++++++

// #include <stdio.h>
// int main(){
//     printf("%c\n",'6'-'3');
//     return 0;
// }

//+++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char *str1, *str2;
//     str1 = (char *)malloc(10*sizeof(char));
//     strcpy(str1,"arvind");
//     printf("str1:%p\n", str1);
//     printf("str1:%s\n", str1);
//     str2 = str1;
//     // str1 = NULL;
//     free(str1);
//     printf("str1:%s\n", str1);
//     printf("str1:%p\n", str1);

//     printf("str2:%p\n", str2);
//     printf("str2:%s\n", str2);

//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int ret = 0;
// int fun1()
// {
//     ret = 3;
//     printf("%d\n", ret);
// }
// int fun2()
// {
//     ret = 4;
//     printf("%d\n", ret);
// }
// int main()
// {
//     printf("%d\n", ret);
//     fun1();
//     // fun2();
//     printf("%d\n", ret);
//     return 0;
// }

//+++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     // //char str[]="Cisco IOS Software, IOS-XE Software, Catalyst 4500 L3 Switch Software (cat4500e-UNIVERSALK9-M), Version 03.03.01.SG RELEASE SOFTWARE (fc2) Technical Support: http://www.cisco.com/techsupport Copyright (c) 1986-2012 by Cisco Systems, Inc. Compiled Sun 2";
//     // char str[]="Jamie W Steenberge <jsteenberge@saranac.org>";
//     // printf("size:%ld",strlen(str));
//     int portNum;
//     char *ptr;
//     char str[64] = ".1.3.6.1.2.1.2.2.1.8.1";
//     ptr = strrchr(str, '.');

//     printf("%c\n", *ptr);
//     printf("%s\n", ptr);
//     printf("%s\n", ptr + 1);

//     if (ptr)
//     {
//         portNum = atoi(ptr + 1);
//         printf("portNum: %d", portNum);
//         *ptr = '\0';
//         printf("%s\n", ptr);
//     }
// }

//++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int *count;

// void fun();

// void fun()
// {
//     count = (int *)malloc(sizeof(int));
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", i);
//         (*count)++;
//     }
//     printf("final:%d\n", *count);
// }
// int main()
// {
//     fun();
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char str[80] = "a.b.c.d.e.f";
//     // char c[2] =".";
//     char *token;
//     token = strtok(str, ".");
//     while (token != NULL)
//     {
//         printf(" %s\n", token);
//         token = strtok(NULL, ".");
//         printf("%p\n",NULL);
//     }

//     return (0);
// }

//+++++++++++++ strtok_r ++++++++++++++++++++++++++++++++++

/* The strtok_r() function is thread-safe and stores its state in a user-supplied buffer
instead of possibly using a static data area that may be overwritten by an unrelated
call from another thread. */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char str[80] = "a.b.c.d.e.f";
//     // char c[2] =".";
//     char *token;
//     char* context = NULL;
//     token = strtok_r(str, ".",&context);
//     while (token != NULL)
//     {
//         printf(" %s\n", token);
//         token = strtok_r(NULL, ".",&context);
//     }

//     return (0);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char name[][30] =
//     {   "arvind kumar",
//         "chandu yadav",
//     };

//    if(strstr(name[1],"kumar")==NULL) // if(strstr(name[1],"yadav")
//    {
//        printf("true\n");
//    }

// }

//+++++++++++++++++++++++
// #include <stdio.h>
// #include <stdbool.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     bool x = true;
//     printf ("%d",x);
// }

//+++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {

//     char *ptr;
//     printf("size : %ld\n",sizeof(ptr));
//     ptr = malloc(sizeof(char));
//     printf("size : %ld\n",sizeof(ptr));
//     strcpy(ptr,"arvind");
//     if (ptr)
//     {
//         free(ptr);
//         ptr = NULL;
//         printf("done\n");
//     }
//     else
//         printf("NO MEMORY FOUND IN PTR\n");
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
//     char val[20] = "900.4Gss ss";
//     char *tmp;
//     tmp = strstr(val, "TB");
//     if (tmp == NULL)
//     {
//         printf("%s\n",strtok(val," ")); // show string before space ex: "900.4Gs sss" --> 900.4Gs
//         printf("%ld\n",atol(strtok(val," "))); // show only integer value from a string ex: 900.Gs --> 900
//     }
//     else
//     {
//         printf("bye\n");
//     }

// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
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
//     char val[20] = "900.4Gss ss";
//     char *tmp;
//     removeCharacter(val, '"');
//     printf("%s\n", val);

//     tmp = strstr(val, "TB");
//     if (tmp == NULL)
//     {
//         printf("%s\n", strtok(val, " "));        // show string before space ex: "900.4Gs sss" --> 900.4Gs
//         printf("%ld\n", atol(strtok(val, " "))); // show only integer value from a string ex: 900.Gs --> 900
//     }
//     else
//     {
//         printf("bye\n");
//     }
// }

//++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
//     char val[100] = "Centigrade:54 	Fahrenheit:129";
//     char *temp;
//     if (temp = strstr(val, ":")) // if the result is in String format eg- Centigrade : 95
//     {
//         printf("%s\n", temp);
//         printf("%s\n", temp+1);

//         printf("%d\n", atoi(temp + 1));
//     }
// }

//++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
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
//     char val[20] = "fan0: stop";
//     char *tmp;
//     // removeCharacter(val, '"');
//     printf("%s\n", val);

//     if (tmp = strstr(val, ":"))
//     {
//         removeCharacter(tmp + 1, ' ');
//         printf("%s\n", tmp+1);
//     }
//     else
//     {
//         printf("bye\n");
//     }
// }

// //++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     printf("%d\n",30-'0');
// }

//+++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
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
//     char val[20] = "arvind";
//     char *ptr = malloc(sizeof(char)*20);
//     strcpy(ptr,val);
//     removeCharacter(ptr,'i');
//     printf("%s\n",ptr);
//     printf("%s\n",val);

// }

//+++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char modelName[][32] = {
//         "arvind",
//         "chandan",
//         "ashu",
//         "adham",
//         "sakshi"};
//     char value [20] = "arvind";
//     char value1 [20] = "chandan";
//     char *name =  malloc(sizeof(char)*10);
//     strcpy(name,value);
//     // int totalModel = sizeof(modelName) / sizeof(modelName[0]);
//     // for (int index = 0; index < totalModel; index++)
//     // {
//     //     if (strcmp(value,modelName[index]) == 0)
//     //     {
//     //         printf("Hiii\n");
//     //         break;
//     //     }
//     // }
//     // printf("bye\n");

//     if (value == "arvind")
//     {
//         printf("true\n");
//     }
//     if((strcmp(value,"arvind")==0) || (strcmp(value1,"arvind")==0) )
//     {
//         printf("hello\n");
//     }
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char modelName[][32] = {
//         "arvind",
//         "chandan",
//         "ashu",
//         "adham",
//         "sakshi"};
//     if (strcmp(modelName[1], "")) // if empty is not there then go inside          OR        ** (strcmp(modelName[1], "")!=0) **
//     {
//         printf("hii\n");
//     }
//     else
//     {
//         printf("hello\n");
//     }
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char a[10];
//     a[10] = 0;
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++
