

/* formatt of compilin - gcc thread_mutex.c -pthread */


// #include <stdio.h>
// #include <unistd.h>
// #include <pthread.h>

// void myTurn(void *arg) //>> void type pointer is passed   // or void* myTurn()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         printf("thread calling  %d\n", i);
//     }
// }
// int main()
// {

//     pthread_t newthread;
//     pthread_create(&newthread, NULL, (void *)myTurn, NULL);
//     pthread_join(newthread, NULL); // wait till thread is finshed other wise main will end before thread is completed
//     printf("hii this string\n");
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <unistd.h>
// #include <pthread.h>

// void *myTurn(void *arg)
// {
//     for (int i = 0; i <= 4; i++)
//     {
//         sleep(1);

//         printf("my turn %d\n", i);
//     }
//     return NULL;
// }
// void *yourTurn(void *arg)
// {
//     for (int i = 0; i <= 4; i++)
//     {
//         sleep(2);
//         printf("your turn %d\n", i);
//     }
// }

// int main()
// {

//     pthread_t newthread1;
//     pthread_t newthread2;

//     pthread_create(&newthread1, NULL, myTurn, NULL);
//     pthread_create(&newthread2, NULL, yourTurn, NULL);

//     pthread_join(newthread1, NULL); // wait untill it finsih execution
//     pthread_join(newthread2, NULL); // wait untill it finsih execution

//     // here both threads are diff and calling diff fun parllely
//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <unistd.h>
// #include <pthread.h>

// void *myTurn(void *arg)
// {
//     printf("test from thread\n");
//     sleep(2);
//     printf("End Test\n");
// }

// int main()
// {

//     pthread_t t1, t2;

//     pthread_create(&t1, NULL, myTurn, NULL);
//     //   pthread_join(t1,NULL); // time ./a.out -- more
//     //   pthread_create(&t2,NULL,myTurn,NULL);
//     //   pthread_join(t2,NULL);
//     printf("hii here\n");

//     return 0;

//     // when 1 thread will finish then other will run (but will take more time)
// }

//+++++++++++++++++++++++++++  M2 +++++++++++++++++++++++

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include<stdio.h>
// #include <unistd.h>
// #include <pthread.h>

// void* myTurn(void *arg)
// {
//         printf("test from thread\n");
//         sleep(2);
//         printf("End Test\n");

// }

// int main()
// {

//   pthread_t t1,t2;

//   pthread_create(&t1,NULL,myTurn,NULL);
//   pthread_create(&t2,NULL,myTurn,NULL);
//   pthread_join(t1,NULL);
//   pthread_join(t2,NULL);

//     return 0;

//     // both threads running parllely
// }
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <unistd.h>
// #include <pthread.h>
// pthread_t t1, t2;

// void *myTurn(void *arg)
// {
//     int val = *(int *)arg;
//     val++;
//     printf("val:%d\n",val);
//     printf("test from thread\n");
//     sleep(2);
//     printf("End Test\n");
//     pthread_exit(NULL);
// }

// int threadCall()
// {

//     int x = 1;
//     if (x == 1)
//         pthread_create(&t1, NULL, myTurn, &x);
//     printf("x:%d\n",x);
//     printf("bye\n");

// }

// int main()
// {
//     threadCall();
//     // pthread_join(t1, NULL); // this should be just after create fun for better o/p

// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <unistd.h>
// #include <pthread.h>
// pthread_t newthread1;
// pthread_t newthread2;
// void *myTurn(void *arg)
// {
//     for (int i = 0; i <= 4; i++)
//     {
//         sleep(1);
//         printf("my turn %d\n", i);
//     }
//     return NULL;
// }
// void *yourTurn(void *arg)
// {
//     for (int i = 0; i <= 4; i++)
//     {
//         sleep(2);
//         printf("your turn %d\n", i);
//     }
// }

// void *threadFun()
// {
//     int x = 1;
//     switch (x)
//     {
//     case 1:
//     {
//         pthread_create(&newthread1, NULL, myTurn, NULL);
//         break;
//     }
//     }
//     pthread_join(newthread1, NULL); // wait untill it finsih execution

//     // pthread_create(&newthread2, NULL, yourTurn, NULL);
//     // pthread_join(newthread2, NULL); // wait untill it finsih execution
// }

// int main()
// {
//     pthread_t t1;
//     pthread_create(&t1, NULL, (void *)&threadFun, NULL);
//     pthread_join(t1, NULL);
//     printf("done");
//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <unistd.h>
// #include <pthread.h>

// void *myTurn(void *arg) // this  function returns a void POINTER

// {
//     int iptr = *(int *)arg;     // it  (arg) was void pointer now making it integer type pointer(means will store integer on that adress) and then derefrence it.
//     for (int i = 0; i < 5; i++) //  >>> int x=*p type
//     {
//         printf("thread calling  %d, v=%d\n", i, iptr);
//         (iptr)++;
//     }
//     return NULL;
// }

// int main()
// {

//     pthread_t newthread;
//     int v = 5;

//     pthread_create(&newthread, NULL, myTurn, &v);
//     // pthread_join(newthread,NULL); // wait till thread is finshed
//     pthread_exit(NULL);

//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++

// #include<stdio.h>
// #include <unistd.h>
// #include <pthread.h>
// #define x 20
// int main()
// {
//     int a = 1;
//     int sum = 0;
//     for (int i=0;i<x;i++)
//     {

//         sum+=i;
//     }
//     printf("%d\n",sum);
// }
