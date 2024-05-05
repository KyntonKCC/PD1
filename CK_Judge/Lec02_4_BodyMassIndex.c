#include <stdio.h>

int main(void){
    int W = 0;
    float H = 0, BMI = 0;
    scanf("%f %d", &H, &W);
    H = H / 100;
    BMI = W / (H * H);
    printf("%.6f\n", BMI);
    return 0;
}