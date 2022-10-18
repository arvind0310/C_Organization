/* print all the Ascii values for a char (1byte == 8 bit == 255 value) */

#include <stdio.h>
int main()
{
    int k;                         // variable declaration
    for (int k = 0; k <= 255; k++) // for loop from 0-255
    {
        printf("\nThe ascii value of %c is %d", k, k);
    }
    return 0;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

/*Now we will create the program which will sum the ascii value of a string. */

// #include <stdio.h>
// int main()
// {
//     int sum=0;  // variable initialization
//     char name[20];  // variable initialization
//     int i=0;  // variable initialization
//     printf("Enter a name: ");
//     scanf("%s", name); // or scanf("%[^\n]s",str);
//     while(name[i]!='\0')  // while loop
//     {
//         printf("\nThe ascii value of the character %c is %d", name[i],name[i]);
//         sum=sum+name[i];
//         i++;
//     }
//     printf("\nSum of the ascii value of a string is : %d\n", sum);
//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     printf("%c %c\n",48,49);

// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     printf("%d\n", ' '); // ascii of blank space.
// }

//+++++++++++++++++ char -> int for 0-9 digit ++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char ch[3] = '9';
//     int num = ch - '0';
//     printf("num:%d\n %d*10 = %d\n", num, num, num * 10);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
