#include<stdio.h>
#include<string.h>

int main()
{
    char s[10]={'a','r','\0','v','i','n','d'};
    char p[10];
    char t[10];
    int i;
    strcpy(p,s); // terminate when it get NULL value
    memcpy(t,s,7);
    for(i=0;i<10;i++)
        printf("%c",p[i]);
        printf("\n");
    for(i=0;i<10;i++)   // copy till the count given
        printf("%c",t[i]);

    return 0;
}

// usually strcpy is used as ..>  strcpy(cmd,"ifconfig");
//                                memset(making intialized pointer 0 till the size we gave)
//                                memcpy ( may be same for copy)