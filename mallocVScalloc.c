//++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//     // malloc vs calloc difference example

//     int size = 0;
//     int *junk = 0;
//     // srand(time(0));

//     // this code will fill the heap with random junk data
//     for (int i = 0; i < 10; i++)
//     {
//         size = rand() % 1000; // size value less than 1000 ((Anything) % 1000 can never be greater than, or equal to 1000. The range is within 0 to 999.)

//         /* https://www.sololearn.com/discuss/360758/modulo-operator-for-rand*/

//         junk = malloc(size * sizeof(int));
//         for (int j = 0; j < size; j++)
//         {
//             junk[j] = rand();
//         }
//         free(junk);
//     }

//     int *array;
//     // array = calloc( 1000, sizeof(int) );
//     array = malloc(10 * sizeof(int));
//     for (int i = 0; i < 10; i++)
//         printf("%d\n", array[i]);
//     free(array);
//     // printf("\n");
// }

//=+++++++++++++++++++++++++++++++++++++++++++++++++++++++
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int *array;
    clock_t tic, toc;

    // test malloc
    tic = clock();
    array = malloc(1000000 * sizeof(int));
    toc = clock();
    printf("malloc: %fs\n", (double)(toc - tic) / CLOCKS_PER_SEC);
    free(array);

    // test calloc
    tic = clock();
    array = calloc(1000000, sizeof(int));
    toc = clock();
    printf("calloc: %fs\n", (double)(toc - tic) / CLOCKS_PER_SEC);
    free(array);
}