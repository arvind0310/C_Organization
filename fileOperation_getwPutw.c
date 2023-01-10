
// #include <stdio.h>
// int main()
// {
//     FILE *fp;
//     int num;

//     fp = fopen("file.txt", "w");
//     printf("Enter any number:");
//     scanf("%d", &num);
//     putw(num, fp);
//     fclose(fp);
//     fp = fopen("file.txt", "r");
//     printf("%d\n", getw(fp));

//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// int main()
// {
//     FILE *fp;
//     int ch;
//     fp = fopen("file1.txt", "w");
//     for (int i = 0; i < 5; i++)
//     {
//         putw(i, fp);
//     }
//     fclose(fp);
//     fp = fopen("file1.txt", "r");
//     for (int i = 0; i < 5; i++)
//     {
//         ch = getw(fp);
//         printf("%d\n", ch);
//     }
//     fclose(fp);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// int main()
// {
//     FILE *fp;
//     int num;

//     fp = fopen("file.txt", "w");
//     printf("Enter any number:");
//     scanf("%d", &num);
//     putw(num, fp);
//     fclose(fp);
//     fp = fopen("file.txt", "r");
//     printf("val in file : %d\n", getw(fp));
//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

