#include <stdio.h>
#include <limits.h>
// #define USHRT_MAX 0xffff                    /* max value for "unsigned" short */
// #define SHRT_MAX  0x7fff                    /* max value for short */
// #define SHRT_MIN  (-0x7fff - 1)             /* min value for short */
// #define UINT_MAX  0xffffffff                /* max value for "unsigned" int */
// #define INT_MAX   0x7fffffff                /* max value for an int */
// #define INT_MIN   (-0x7fffffff - 1)         /* min value for an int */
// #define ULONG_MAX 0xffffffffffffffff        /* max value for "unsigned" long */
// #define LONG_MAX  0x7fffffffffffffff        /* max value for long */
// #define LONG_MIN  (-0x7fffffffffffffff - 1) /* min value for long */

int main(void){
    printf("%u\n", USHRT_MAX);      //65535
    printf("%d\n", SHRT_MAX);       //32767
    printf("%d\n", SHRT_MIN);       //-32768
    printf("%u\n", UINT_MAX);       //4294967295
    printf("%d\n", INT_MAX);        //2147483647
    printf("%d\n", INT_MIN);        //-2147483648
    printf("%lu\n", ULONG_MAX);     //18446744073709551615
    printf("%ld\n", LONG_MAX);      //9223372036854775807
    printf("%ld\n", LONG_MIN);      //-9223372036854775808
    printf("%ld\n", sizeof(char));   //1
    printf("%ld\n", sizeof(int));    //4
    return 0;
}
