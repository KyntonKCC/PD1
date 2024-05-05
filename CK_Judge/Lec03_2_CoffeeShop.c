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
        printf("The total price is %d dollars!\n", AMERICANO * j);
        break;
    case 2:
        printf("The total price is %d dollars!\n", LATTE * j);
        break;
    case 3:
        printf("The total price is %d dollars!\n", CAPPUCCINO * j);
        break;
    case 4:
        printf("The total price is %d dollars!\n", MOCHA * j);
        break;
    default:
        printf("Wait, what?\n");
        break;
    }
    return 0;
}