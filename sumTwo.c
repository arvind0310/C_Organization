#include <stdio.h>
#include <string.h>
int main()
{
    char result[50] = "AerohiveSR2348P:48GEPOE+ports,";
    char *p;
    p = strchr(result, ':');
    if (p && *(p + 1))
        *(p + 1) = '\0';
    // *(p)='\0';
    printf("%s\n", result);
    result[strlen(result) - 1] = '\0';
    printf("%s\n", result);

}
