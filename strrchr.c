#include <stdio.h>
#include <string.h>

int main () {
   char str[] = ".1.3.6.1.2.1.2.2.1.8";
   printf("%s\n",str);
   char ch = '.';
   char *ptr;

   ptr = strrchr(str, ch); // will return a pointer of last occurence of element 

   printf("return:%s\n", ptr);
   *(ptr)='x';
   printf("%s\n",str);
   *(ptr)='\0';
   printf("%s\n",str);
   return(0);
}
