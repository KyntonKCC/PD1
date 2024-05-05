#include <stdio.h>
#define w 0.9
#define u1 0.1
#define b1 -51
#define u2 -0.98
#define b2 153

// (w, u, b, u', b') = (0.9, 0.1, -51, -0.98, 153)
// h{t+1} = w * x{t} + u * h{t} + b
// y{t+1} = f(u' * h{t+1} + b')

int main(void){
    float price;
    scanf("%f", &price);
    float table[6];
    table[0] = 0;
    for(int i = 0 ; i < 5 ; i++){
        table[i+1] = w * price + u1 * table[i] + b1;
        price = u2 * table[i+1] + b2;
        printf("%.1f ", price);
    }
    printf("\n");
    return 0;
}