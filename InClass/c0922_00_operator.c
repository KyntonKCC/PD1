#include <stdio.h>

int main(void){
    printf("%d\n", 7 % 3);
    printf("%d\n", 7 % -3);
    printf("%d\n", -7 % 3);
    printf("%d\n", -7 % -3);
    printf("2.0 / 0 = %f\n", 2.0 / 0);
    printf("2 / 0 = %d\n", 2 / 0); //Floating exception (core dumped)
    return 0;
}