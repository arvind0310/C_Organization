// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>

// int main()
// {
//     int mask = 0;
//     char *baseIP = NULL;
//     char cidr[20] = "192.168.88.1/32";
//     baseIP = strtok(cidr, "/"); // base IP will point to before '/' elements
//     mask = atoi(strtok(NULL, "/"));
//     printf("cidr:%s\n", cidr);

//     printf("baseIP:%s\n", baseIP);
//     printf("mask:%d\n", mask);
// }

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>

// int main()
// {
//     int mask = 0;
//     char *baseIP = NULL;
//     char cidr[150] = "192.168.88.1/30/40/50";
//     printf("cidr:%s\n", cidr);

//     baseIP = strtok(cidr, "/"); // base IP will point to before '/' elements
//     mask = atoi(strtok(NULL, "/"));
//     printf("cidr:%s\n", cidr);
//     printf("baseIP:%s\n", baseIP);
//     printf("mask:%d\n", mask);

//     char *mask1;
//     mask1 =strtok(NULL, "/");
//     printf("cidr:%s\n", cidr);
//     printf("baseIP:%s\n", baseIP);
//     printf("mask1:%s\n", mask1);
//     char *mask2;
//     mask2 =strtok(NULL, "/");
//     printf("cidr:%s\n", cidr);
//     printf("baseIP:%s\n", baseIP);
//     printf("mask:%s\n", mask2);
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>

// int main()
// {
//     char *ptr = NULL;
//     char cidr[150] = "192.168.88.1/32.a/40.b/50.c";
//     ptr = strtok(cidr, "/"); //192.168.88.1
//     printf("%s\n", ptr);

//     ptr = strtok(NULL, "/"); //32.a
//     printf("%s\n", ptr);

//     ptr = strtok(NULL, "/"); //40.b
//     printf("%s\n", ptr);

//     ptr = strtok(NULL, "/");  // return the element at base add if not found the element at first
//     printf("%s\n", ptr);

//     // ptr = strtok(NULL, "/");
//     // printf("%s\n", ptr);
// }


//+++++++++++++++++++++++++++++++++++++++


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main()
{
    char str[30]="arvind/kumar.yadav";
    char *ptr;
    ptr=strtok(str,"/");
    printf("%s\n",ptr);
    // ptr[2]='x';
    // printf("%s\n",ptr);

    ptr=strtok(NULL,"/"); // no '/', then will print base elemnt at that address
    printf("%s\n",ptr); // in buf --> kumar.yadav
 
    // ptr=strtok(NULL,"/");  /*seg fault */
    // printf("%s\n",ptr);

    // printf("%s\n",strtok(NULL,"/")); /*seg fault */

} 
