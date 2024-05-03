#include<stdio.h>

int main(void){
    double d1, d2, d3, d4, d5;
    scanf("%lf %lf %lf %lf %lf", &d1, &d2, &d3, &d4, &d5);
    printf("%.15f\n", d1 * d2 * d3 * d4 * d5);
    return 0;
}