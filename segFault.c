// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char *p;
//     strcpy(p,"avind");
//     printf("%s\n", p);
// }

//++++++++++++++++++++++++++++++++++=


// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int main()
// {
//     char str[10]="arvind";
//     char *ptr; // solution -- char *ptr=malloc(sizeof(char));
//     strcpy(ptr,"arvind"); //or strncpy(ptr,str,strlen(str));
//     printf("%s\n",ptr);
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

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
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int main()
// {
//     //char ptr[10]="arvind";
//     char *ptr="arvind";
//     printf("%s\n",ptr);
//     printf("%p\n",ptr);
//     printf("%c\n",*(ptr));
//     (ptr++);
//     printf("%c\n",*(ptr));
//     *(ptr)='x';
//     printf("%c\n",*(ptr));



    // *ptr='x';  // seg fault cz you are changing the read only memory
    // printf("%s\n",ptr);

// }
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++