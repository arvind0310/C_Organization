
/* note: *(str+i) is same as str[i]. */

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int main()
// {
//*ptr--value , ptr--address

//     char *ptr="arvind";
//     printf("%s\n",ptr);
//     printf("%c\n",*(ptr));  // first in add of ptr(base add) there is a.. deref it
//     printf("%c\n",*(ptr+1)); // first..(adress of ptr+1) then derefrence
//     printf("%c\n",*(ptr+2));
//     printf("%c\n",*(ptr+3));
//     printf("%d\n",*ptr); // char at *ptr (i.e=='a') int ==97

//     printf("++++++++++++++++++++++++++++++\n");

//     char str[]="kumar";
//     printf("%s\n",str);
//     printf("%c\n",str[0]);
//     printf("%c\n",*(str));
//     printf("%c\n",str[1]);
//     printf("%c\n",*(str+1));

// }

//+++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int main()
// {

//     char str[]="kumar";
//     printf("%s\n",str);
//     printf("%c\n",str[0]);

//     *(str)='x';
//     printf("%s\n",str);

//     *(str+1)='\0'; // from this this everything null
//     printf("null at 1: %s\n",str);

//     *(str)='\0';// from this this everything null
//     printf("null at base : %s\n",str);

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int main()
// {
//     char *ptr="arvind";
//     printf("%s\n",ptr);
//     printf("%c\n",*(ptr));
//     *ptr='x';  // seg fault cz you are changing the read only memory
//     printf("%s\n",ptr);

// }

//++++++++++++ solution ++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char *ptr=malloc(sizeof(char)*10);
//     strcpy(ptr,"arvind");

//     printf("%c\n",*ptr);
//     *(ptr)='x';
//     printf("%c\n",*ptr);
//     printf("%s\n", ptr);
//     free(ptr);
// }

//+++++++++++++++++++++++ doubt(why not?) ++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int main()
// {
//     char string[20] = "arvind";
//     // char *ptr; /*seg fault */
//     char *ptr=malloc(sizeof(char));
//     strncpy(ptr,string,strlen(string));
//     printf("string:%s\n",string);
//     printf("ptr:%s\n",ptr);

//     *ptr='x';
//     printf("%s\n",ptr);
// }

//+++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char *p="arvind";
//     printf("%s\n", p);
// }

//++++++++++++ doubt (why not?) ++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char *p;
//     strcpy(p,"avind");
//     printf("%s\n", p);
// }

//+++++++++++++++++ warning ++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char *p=malloc(sizeof(char));
//     strcpy(p,"avind");
//     printf("%s\n", p);
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void getName(char *ptr)
// {
//     char *str; //seg fault
//     strncpy(str,ptr,strlen(ptr)); // avoid strncpy copy into a pointer, to:no , from:yes
//     printf("ptr:%s\n",str);

//     printf("%s\n",ptr);
// }
// int main()
// {
//     char name[30]="arvind kumar";
//     getName(name);
// }

//++++++++++++++++++++++++++++++++
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void getName(char *ptr)
// {
//     char str[30];
//     strncpy(str,ptr,strlen(ptr));
//     printf("str:%s\n",str);

//     printf("ptr:%s\n",ptr);
// }
// int main()
// {
//     char name[30]="arvind kumar";
//     getName(name);
// }

// +++++++++++++++++++++++++++++++++++++++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>

// int main()
// {
//     char string[20] = "1.2.3.4.5.6";
//     char * ptr;
//     ptr = strrchr(string, '.');// searches for the last occurrence of the character [.6]
//     printf("ptr:%s\n",ptr); //will tell that whom it is pointing to(last occ of elemnt)[.6]
//     printf("value1:%s\n",string);
//     // *ptr='x'; --> value2:1.2.3.4.5x6
//     *ptr = '\0';  //make null(remove)the 'from'last  occrence of element,(currently pointed by ptr)
//     /* in "1.2.3.4.5.6" [.6] is being pointed by ptr, here making [.6] -> NULL */
//     printf("value2:%s\n",string);

// //     char *str = NULL;
// //     char ip_l[20] = {0};
// //     char *ip = "192.168.88.1";
// //     strncpy(ip_l, ip, strlen(ip));
// //     str = strrchr(ip_l, '.');
// //     *str = '\0';
// //     printf("ip = %s\n", ip_l);

// //     /* we can modify anything if have the 'address' or 'pointer of that element' */
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char *ptr = "arvind";
//     for (int i = 0; i < strlen(ptr); i++)
//     {
//         printf("at %p -> %c\n", (ptr + i), *(ptr + i));
//     }
//     printf("++++++++\n");

//     char *ptr1 = malloc(sizeof(char) * 20);
//     strcpy(ptr1,"arvind");
//     for (int i = 0; i < strlen(ptr1); i++)
//     {
//         printf("at %p -> %c\n", (ptr1 + i), *(ptr1 + i));
//     }
// }


//+++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char str[]="arvind";
//     // char *ptr; // seg fault
    // char *ptr=malloc(sizeof(char)*20);
//     memset(ptr,'\0',20);

//     strcpy(ptr,str);
//     *(ptr+1)='x';
//     printf("%s",ptr);
// }

//+++++++++++++++++++++++++++++++++++++++++++++
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
int main()
{
        char str[30];
        printf("%ld\n",sizeof(str));

        char *ptr=malloc(sizeof(char)*20);
        printf("%ld\n",sizeof(ptr)); // will return the size of ptr, not how much memory its is allocating
}
