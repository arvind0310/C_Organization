

#include <stdio.h>
#include <time.h>
#include <unistd.h> /* for sleep() */

void printFun()
{
    sleep(1);
}

int main()
{
    struct timespec begin, end;
    clock_gettime(CLOCK_MONOTONIC_RAW, &begin);

    printFun();

    clock_gettime(CLOCK_MONOTONIC_RAW, &end);

    printf("Total time case 1 = %f seconds\n",
           (end.tv_nsec - begin.tv_nsec) / 1000000000.0 +
               (end.tv_sec - begin.tv_sec));





    clock_gettime(CLOCK_MONOTONIC_RAW, &begin);
    sleep(5);
    clock_gettime(CLOCK_MONOTONIC_RAW, &end);

    printf("Total time case 2 = %f seconds\n",
           (end.tv_nsec - begin.tv_nsec) / 1000000000.0 +
               (end.tv_sec - begin.tv_sec));
}