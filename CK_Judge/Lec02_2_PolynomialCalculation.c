#include <stdio.h>

int main(void){
    float number, answer;
    scanf("%f", &number);
    answer = 7 * number * number * number * number - 8 * number * number * number - number * number + 6 * number - 22;
    printf("%.1f", answer);
    return 0;
}