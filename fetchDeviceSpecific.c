// #include <stdio.h>
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
//     char result[50] = "AerohiveSR2348P:48GEPOE+ports,";
//     char *p;
//     p = strchr(result, ':');
//     printf("%s\n", p);
//     printf("%c\n", *(p + 1));

//     if (p && *(p + 1))
//         *(p + 1) = '\0';
//     // *(p)='\0';
//     printf("%s\n", result);
//     result[strlen(result) - 1] = '\0';
//     printf("%s\n", result);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>
#include <string.h>
int removeCharacter(char *oid, int character)
{
    int i, j;
    for (i = j = 0; i < strlen(oid); i++)
    {
        if (oid[i] != character)
        {
            oid[j++] = oid[i];
        }
    }
    oid[j] = '\0';
    return 0;
}

int main()
{
    char *newDevName, result[50] = "Dell Inc.";

    char *p;
    // p = strchr(result, ':');
    if (strstr(result, "Dell") != NULL)
    {
        removeCharacter(result, ' ');
        printf("%s\n", result);

        removeCharacter(result, '.');
        printf("%s\n", result);
    }

    // printf("%s\n", p);
    // printf("%c\n", *(p + 1));

    removeCharacter(result, '\\');
    result[strlen(result) - 1] = '\0';
    printf("%s\n", result);

    removeCharacter(result, '"');
    printf("%s\n", result);

    p = strrchr(result, ' ');
    if (p && *(p + 1))
    {
        p++;
    }
    else
    {
        p = result;
    }
    strncpy(newDevName, p, strlen(p));
    printf("%s\n", newDevName);
}
