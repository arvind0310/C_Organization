// #include<stdlib.h>
//  #include<stdio.h>
//  #include<string.h>
//  #include<unistd.h>
//  #include <time.h>
//  int main (void)
// {
//     //print time in seconds from 1 Jan 1970 using c
//     char *dateTime=NULL;

//     // char *dateTime=time(NULL);  /* WRONG */

//     dateTime = (char*)  malloc(128);
//     memset(dateTime,0,128);

//     // dateTime=time(NULL); /* WRONG cz of time(NULL) of time_t data type is long int */
//     printf("%lu\n",time(NULL));
//     sprintf(dateTime, "%lu", time(NULL));

//     printf("%s\n",dateTime);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include<stdio.h>
// #include<time.h>

// int main()
// {
//     time_t t;   // not a primitive datatype
//     time(&t);
//     printf("\nThis program has been writeen at (date and time): %s", ctime(&t));
//     return 0;
// }

/* char *ctime(const time_t *timer) return string pointer */
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include<stdio.h>
// #include<time.h>

// int main()
// {
//     time_t t=time(NULL);  // not a primitive datatype
//     printf("\nThis program has been writeen at (date and time): %s", ctime(&t));
//     return 0;
// }
//+++++++++++++++++++++++++++++++++++++++++++++++++

// #include <time.h>
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     time_t mytime = time(NULL);   // mytime -> long int type cz of time_t
/* long unsigned mytime=time(NULL); */

//     char * time_str = ctime(&mytime);
//     time_str[strlen(time_str)-1] = '\0';
//     printf("Current Time : %s\n", time_str);

// }


// //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int fun(int x, unsigned long time_stamp) // int fun(int x,time_t time_stamp)
// {
//     printf("num:%d at:%lu\n", x, time_stamp);

//     printf("num:%d at:%s\n", x, ctime(&time_stamp));
// }
// int main()
// {
//     int x = 3;
//     fun(x, time(NULL));
// }



// //++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int x;
//     int *ptr = &x;
//     printf("enter num:");
//     scanf("%d", ptr); // scanf takes the add of the variable hence
//                       // ptr is pointing to add of x.
//     printf("the num is:%d\n", *ptr);
//     printf("the num is:%d\n", x);
// }

// //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
