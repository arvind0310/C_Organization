// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// typedef struct employeeInformationList
// {
//     char name[20];
//     char id[10];
// } employeeInfo_t;
// int main()
// {
//     employeeInfo_t *ptr = NULL, *tmp = NULL;
//     int range, i;
//     char name_var[10], id_var[10];
//     printf("Enter Range : ");
//     scanf("%d", &range);
//     ptr = (employeeInfo_t *)malloc(range * sizeof(employeeInfo_t));
//     for (i = 0; i < range; i++)
//     {
//         memset(name_var, '\0', sizeof(name_var));
//         memset(id_var, '\0', sizeof(id_var));

//         printf("Enter name : ");
//         scanf("%s", name_var);
//         strcpy(ptr[i].name, name_var);

//         printf("Enter id: ");
//         scanf("%s", id_var);
//         strcpy(ptr[i].id, id_var);
//     }
//     printf("The values you Entered is listed below\n");
//     for (i = 0; i < range; i++)
//     {
//         printf("Name = %s\n", ptr[i].name);
//         printf("Id = %d\n", atoi(ptr[i].id));
//     }
//     ptr = tmp;
//     free(ptr);
// }

//+++++++++++++++++++++++++++++ char double pointer +++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int i, count;
//     char **ptr;
//     printf("Enter total no of String:");
//     scanf("%d", &count);
//     ptr = (char **)malloc(count * sizeof(char *));
//     for (i = 0; i < count; i++)
//     {
//         printf("Enter the content:%d:", i + 1);
//         ptr[i] = (char *)malloc(5 * sizeof(char *));
//         scanf("%s", ptr[i]);
//     }
//     for (i = 0; i < count; i++)
//     {
//         printf("entered string: %s\n", ptr[i]);
//     }
//     for (i = 0; i < count; i++)
//     {

//         free(ptr[i]);
//     }
//     free(ptr);
//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++ storing int value through normal varaible ++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int a;
//     printf("enter no: ");
//     scanf("%d", &a); // store the number at the adress of variable a
//     printf("num entered:%d at address: %p", a, &a);
// }

//++++++++++++++++++++++++++++ storing int value through ptr +++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int *ptr;
//     ptr = (int*)malloc(1*sizeof(int)); // other wise seg fault
//     printf("enter no: ");
//     scanf("%d",ptr); // store the number at the adress pointed by ptr
//     printf("num entered:%d at address: %p",*ptr,ptr);

// }
//+++++++++++++++++++++++++++++++++++++++++ storing multiple int value through pointer ++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int *ptr, count;
    printf("enter count of num: ");
    scanf("%d", &count); // store the number at the adress of vari
    for (int i = 0; i < count; i++)
    {
        printf("enter num %d: ", i + 1);
        scanf("%d", ptr + i); //.. why without malloc working??
    }
    printf("entered num are:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d at add : %p\n", *(ptr + i), ptr + i);
    }
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int count, *ptr, sum = 0;
//     printf("enter count of num:");
//     scanf("%d", &count);
//     ptr = (int *)malloc(count * sizeof(int));
//     for (int i = 0; i < count; i++)
//     {
//         printf("enter no %d: ", i + 1);
//         scanf("%d", (ptr + i));
//     }
//     for (int i = 0; i < count; i++)
//     {
//         printf("number:%d = %d\n", i + 1, *(ptr + i));
//     }
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++