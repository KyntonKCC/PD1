#include <stdio.h>
# define SQRT3 1.7320508f

int main(void){
    float a, A;
    scanf("%f", &a);
    A = a * a * SQRT3 / 4;
    printf("%.3f", A);
    return 0;
}