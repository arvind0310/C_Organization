#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char name[][30] =
        {
            "arvindkumar",
            "chanduyadav",
        };
    printf("name[0]:%s\n",name[0]);
    printf("name[1]:%s\n",name[1]);

    if (strstr(name[0],"yadav") == NULL) // function returns a pointer points to the first character of the found s2 in s1, otherwise a NULL pointer, if no string
    {
        printf("true\n");
    }
    else
    {
        printf("bye\n");
    }
}
