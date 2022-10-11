// #include <stdio.h>
// #include <string.h>

// int main()
// {

//     char indexes[][30] =
//     {   "1",
//         "2",
//         "3"
//     };

//     printf("%s",indexes[0]);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    typedef struct __deviceInfo
    {
        char **vmNICIndexes;

    } deviceInfo;

    deviceInfo *myNode;
    myNode = (deviceInfo *)malloc(sizeof(deviceInfo));

    char **indexes = NULL;
    char *ptr[2]={"1","2"};

    myNode->vmNICIndexes=ptr;

    // myNode->vmNICIndexes ="1";
    // myNode->vmNICIndexes ="2";

    // myNode->vmNICIndexes =


        // {
        //     "1",
        //     "2",
        //     "3"};

    indexes = myNode->vmNICIndexes;

    printf("%s\n", indexes[0]);

    return 0;
}
