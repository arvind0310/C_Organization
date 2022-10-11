// #include <stdio.h>
// #include <string.h>

// int main () {
//    char str[] = ".1.3.6.1.2.1.2.2.1.8";
//    printf("%s\n",str);
//    char ch = '.';
//    char *ptr;

//    ptr = strrchr(str, ch); // will return a pointer of last occurence of element 

//    printf("return:%s\n", ptr);
//    *(ptr)='x';
//    printf("%s\n",str);
//    *(ptr)='\0';
//    printf("%s\n",str);
//    return(0);
// }


//+++++++++++++ strchr ++++++++++++++++++++++


// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>

// int main()
// {
//     char output[50] = "arvind=kumar=yadav";
//     char scanID[30];
//     char *ptr = strchr(output, '='); 
//     printf("%s\n", ptr); //=kumar=yadav

//     if (ptr == NULL)
//         return 0;
//     ptr++; //k...
//     printf("%c\n", *ptr); //k
//     strcpy(scanID, ptr);
//     scanID[strlen(scanID) - 1] = '\0';
//     printf("%s\n", scanID);
//     return 0;
// }


