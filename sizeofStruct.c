

/* memory padding
64 bit os means -> processor is capable of accessing 8 bytes at a time
64 bin os means -> 8 byte will be read in a single cpu cycle.

it make block of memory of 8 byte (multiple of 8)

8 + 8 + ...

*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// typedef struct studentDetails
// {
//     char a; // 1 byte
//     char b; // 1 byte
//     int c;  // 4 bytes

// } student_t;
// int main()
// {
//     student_t student;
//     printf("%ld\n", sizeof(student_t));
//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++




// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// typedef struct studentDetails
// {
//     char a; // 1 byte
//     char b; // 1 byte
//     int c;  // 4 bytes
//     char d; // 1 byte

//     int e;  // 4 byte

// } student_t;
// int main()
// {
//     student_t student;
//     printf("%ld\n", sizeof(student_t));
//     return 0;
// }
/* 1+1+4+1+e +4+e+e+e+e == 8+8 -> 16 */


//++++++++++++++++++ same type change ++++++++++++++++++++++++++


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// typedef struct studentDetails
// {
//     char a; // 1 byte
//     char b; // 1 byte
//     int c;  // 4 bytes
//     char d; // 1 byte
//     char f; // 1 byte

//     char g; // 1 byte
//     int e;  // 4 byte

// } student_t;
// int main()
// {
//     student_t student;
//     printf("%ld\n", sizeof(student_t));
//     return 0;
// }



//+++++++++++++++++ same but why 20 ??, not 16 ++++++++++++++++++++++++++++++++++++++++++++++++


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// typedef struct studentDetails
// {
//     char a; // 1 byte
//     char b; // 1 byte
//     int c;  // 4 bytes
//     char d; // 1 byte
//     char f; // 1 byte

//     int e;  // 4 byte
//     char h; // 1 byte

// } student_t;
// int main()
// {
//     student_t student;
//     printf("%ld\n", sizeof(student_t));
//     return 0;
// }


//++++++++++++++++++++ but this is not 20, it is 16 +++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// typedef struct studentDetails
// {
//     char a; // 1 byte
//     char b; // 1 byte
//     int c;  // 4 bytes
//     char d; // 1 byte
//     char f; // 1 byte

//     char h; // 1 byte
//     int e;  // 4 byte

// } student_t;
// int main()
// {
//     student_t student;
//     printf("%ld\n", sizeof(student_t));
//     return 0;
// }


//+++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// typedef struct studentDetails
// {
//     char a; // 1 byte
//     int c;  // 4 bytes
//     char b; // 1 byte

// } student_t;
// int main()
// {
//     student_t student;
//     printf("%ld\n", sizeof(student_t));
//     return 0;
// }

//+++++++++++++++++++++++++ strange .. why 12?? ... +++++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// typedef struct studentDetails
// {
//     // int c;  // 4 bytes
//     char a; // 1 byte
//     int c;  // 4 bytes
//     char b; // 1 byte

// } student_t;
// int main()
// {
//     student_t student;
//     printf("%ld\n", sizeof(student_t));
//     return 0;
// }

//++++++++++++++++++++++++++++++

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// typedef struct studentDetails
// {
//     char a; // 1 byte
//     char b; // 1 byte
//     int c;  // 4 bytes
//     char d; // 1 byte
//     char f; // 1 byte

//     int e;  // 4 byte
//     char h;

// } student_t;
// int main()
// {
//     student_t student;
//     printf("%ld\n", sizeof(student_t));
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++