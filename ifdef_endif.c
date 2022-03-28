/* #ifdef MACRO  
..successful code  
#else  
...else code  
#endif  
*/

//++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// // #define NOINPUT
// void main()
// {
//     int a = 0;
// #ifdef NOINPUT
//     a = 2;  // if INPUT is define then execute this otherwise 
// #else
//     printf("Enter a:");
//     scanf("%d", &a);
// #endif
//     printf("Value of a: %d\n", a);
// }


//++++++++++++++++++++++++++++++++++

#include <stdio.h>   
// #define INPUT  
void main() {  
int a=0;  
#ifndef INPUT   
a=2;   // if INPUT is not define then execute this 
#else  
printf("Enter a:");  
scanf("%d", &a);  
#endif         
printf("Value of a: %d\n", a);    
}  