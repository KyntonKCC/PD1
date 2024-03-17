#include <stdio.h>
#define AMERICANO  110
#define LATTE      150
#define CAPPUCCINO 135
#define MOCHA      145

int main() {
    int i, j;
    scanf("%d %d", &i, &j);
    switch (i){
    case 1:
        printf("The total price is %d dollars!", AMERICANO * j);
        break;
    case 2:
        printf("The total price is %d dollars!", LATTE * j);
        break;
    case 3:
        printf("The total price is %d dollars!", CAPPUCCINO * j);
        break;
    case 4:
        printf("The total price is %d dollars!", MOCHA * j);
        break;
    default:
        printf("Wait, what?");
        break;
    }
    return 0;
}