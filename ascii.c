/* print all the Ascii values for a char (1byte == 8 bit == 255 value) */

// #include <stdio.h>
// int main()
// {
//     int k;                         // variable declaration
//     for (int k = 0; k <= 255; k++) // for loop from 0-255
//     {
//         printf("\nThe ascii value of %c is %d", k, k);
//     }
//     return 0;
// }

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






/* 

for char -> int 

for an array to convert in int --> use atoi
for an single char [0-9] like char a = '9', use int val = a - '0'.


for char -> ascii

for char  --> int val = (int)ch 
for array --> int val = (int)*str; using *str we de-ref elem in base add to single char then -> int
*/




//+++++++++++++++++ [char -> int] without atoi for 0-9 digit, wrong ++++++++++++++++++++++++++++++++++++++++++++++


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char ch[3] = '9'; //an array
//     int num = ch - '0'; // subtraction occur bw two int hence char's int will be thier ascii
//     printf("num:%d\n %d*10 = %d\n", num, num, num * 10);
// }

//++++++++++++++++++++ [char -> int] ++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char ch = '9'; // a single char
//     int num = ch -'0';
//     printf("num:%d\n %d*10 = %d\n", num, num, num * 10);
// }

//+++++++++++++++++++++++ wrong with -> atoi it take only string double quotation  +++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char ch = '9'; // a single char
//     // int val = atoi(ch);
//     printf("%d\n", atoi(ch));
// }

//++++++++++++++++++ [ char -> int ] with atoi ++++++++++++++++++++++++++++
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char str[] = "9"; // a single char
//     // int val = atoi(str);
//     printf("%d\n", atoi(str));
// }

//+++++++++++++++++ char -> ascii ++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char ch = '9'; // a single char
//     int val = (int)ch;
//     printf("%d\n", ch);
// }

//++++++++++++++++++ char -> ascii, wrong  +++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char str[] = "9"; // basically its an array or array string pointer, *str at base add == 9, str[0]
//     int val = (int)str;
//     printf("%d\n", val);
// }

//+++++++++++++++++++ char -> ascii, correct +++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char str[] = "9";
//     int val = (int)*str; // de-ref with *str -> a single char (9) -> typecast that char into int
//     printf("%d\n", val);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char str[] = "abc";
//     int val = (int)*str; // de-ref with *str -> a single char (a) -> typecast that char into int
//     printf("%d\n", val);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>

// int main()
// {
//     printf("%d\n", '1'); // ascii value of 1
//     printf("%c\n", 49);  // who has ascii 49, %d -> 49
//     printf("%c\n", 65);  // who has ascii 65
//     return 0;
// }
