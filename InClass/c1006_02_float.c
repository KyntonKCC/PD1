#include <stdio.h>
#include <float.h>
// #define FLT_MANT_DIG 24             /* p */
// #define FLT_DIG 6                   /* floor((p-1)*log10(b))+(b == 10) */
// #define FLT_MIN_EXP (-125)          /* emin */
// #define FLT_MIN 1.17549435E-38F     /* b**(emin-1) */
// #define FLT_MIN_10_EXP (-37)        /* ceil(log10(b**(emin-1))) */
// #define FLT_MAX_EXP 128             /* emax */
// #define FLT_MAX 3.40282347E+38F     /* (1-b**(-p))*b**emax */
// #define FLT_MAX_10_EXP 38           /* floor(log10((1-b**(-p))*b**emax)) */


int main(void){                         
    printf("%d\n", FLT_MANT_DIG);       //24
    printf("%d\n", FLT_DIG);            //6
    printf("%d\n", FLT_MIN_EXP);        //-125
    printf("%.54f\n", FLT_MIN);         //0.000000000000000000000000000000000000011754943508222875
    printf("%d\n", FLT_MIN_10_EXP);     //-37
    printf("%d\n", FLT_MAX_EXP);        //128
    printf("%lf\n", FLT_MAX);           //340282346638528859811704183484516925440.000000
    printf("%d\n", FLT_MAX_10_EXP);     //38
    return 0;
}
