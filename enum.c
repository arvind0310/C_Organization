
// #include <stdio.h>
// void getDetails(int name);
// enum name
// {
//     Arvind = 19,
//     Ashu = 20,
//     Adham = 5
// };
// // now these name are treated as 'int'

// int main()
// {
//     // printf("Arvind's roll number is:%d\n", Arvind);
//     // printf("Ashu's roll number is:%d\n", Ashu);
//     // printf("adham's roll number is:%d\n", Adham);

//     getDetails(Arvind);
//     return 0;
// }

// void getDetails(int var)
// {
//     switch (var)
//     {
//     case Arvind:
//         printf("%d\n", Arvind);
//         break;
//     case Adham:
//         printf("%d\n", Adham);
//         break;
//     case Ashu:
//         printf("%d\n", Ashu);
//         break;

//     default:
//         printf("No details found for this name.");
//         break;
//     }
// }

//+++++++++++++++++++++++++++++++++++++

#include <stdio.h>

enum days
{
    mon = 1,
    tue,
    wed,
    thu,
    fri,
    sat,
    sun
};
int main()
{
    printf("the monday is:%dth day\n", mon);
    printf("the friday is:%dth day\n", fri);
    return 0;
}
