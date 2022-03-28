 
//  #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>

// struct student
// {
//     int age = 15;
//     char name[10] = "arvind";
//     int class = 12;
// };

// void getData(struct student *arvind)
// {
//     printf("age is:%d\n", arvind->age);
// }

// int main()
// {
//     struct student *kid;
//     kid = (struct student *)malloc(sizeof(struct student));
//     getData(kid);
//     return 0;
// }



 // ++++++++++++ running ++++++++

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>

// struct student
// {
//     int age;
//     char name[10];
//     int class; 
// };

// void getData(struct student *arvind)
// {
//     printf("age is:%d\n", arvind->age);
//     printf("name is:%s\n", arvind->name);
//     printf("class is:%d\n", arvind->class);

// }

// int main()
// {
//     struct student *ptr;
//     ptr = (struct student *)malloc(sizeof(struct student));

//     ptr->age = 1;
//     strcpy(ptr->name, "arvind");
//     ptr->class = 12;

//     getData(ptr);
//     return 0;
// }
