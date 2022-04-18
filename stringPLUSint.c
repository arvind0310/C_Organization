
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     printf("arvindyadav\n"+3);
//     printf("123456789"+3);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char ipAddress[60];
//     char resp[]="wss://srfr.dev2.cobo.solutions";
//     strncpy(ipAddress, resp + 6,strlen(resp + 6));
//     printf("%s\n",ipAddress);
//     // printf("arvindyadav"+3);

//     // printf("12345678"+3);

// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int webSite(char *resp)
{
    char ipAddress[60];
    printf("%s\n", resp);
    strncpy(ipAddress, resp + 6, strlen(resp + 6));
    printf("%s\n", ipAddress);
}
int main()
{
    char resp[] = "wss://srfr.dev2.cobo.solutions";
    webSite(resp);
}
