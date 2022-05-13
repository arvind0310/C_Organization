#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char baseFilter[100] = "enterprises.14823.2.3.3.1.2.4.1.1;SNMPv2-SMI::enterprises.14823.2.3.3.1.2.4.1.1.";
    char *ptr = NULL, *sed = NULL;
    char temp_baseFilter[150] = {0}, temp_grepFilter[100] = {0}, grepFilter[100] = {0}, sedFilter[100] = {0};
    strcpy(temp_baseFilter, baseFilter);
    ptr = strtok(temp_baseFilter, ";");
    printf("ptr:%s\n", ptr); //***
    strcpy(temp_grepFilter, ptr);
    ptr = strtok(NULL, ";");
    printf("ptr:%s\n", ptr); //***
    if (ptr)
    {
        sed = strtok(ptr, ",");
        printf("sed:%s\n", sed); //****
    }

    /*creates sed filter having more then one sed command eg. xyz,abc then result will be | sed 'xyz' | sed 'abc' */
    while (sed != NULL)
    {
        strcat(sedFilter, " | sed 's/");
        strcat(sedFilter, sed);
        strcat(sedFilter, "//'");

        sed = strtok(NULL, ",");
        printf("sedFilter:%s\n", sedFilter); //****
    }
    ptr = strtok(temp_grepFilter, ",");
    printf("ptr:%s\n", ptr); //****

    while (ptr != NULL)
    {
        strcat(grepFilter, " | grep '");
        strcat(grepFilter, ptr);
        strcat(grepFilter, "'");
        printf("grepFilter:%s\n", grepFilter); //****

        ptr = strtok(NULL, ",");
    }
}
