#include<stdio.h>

int main () {
    int number, group;
    scanf("%d %d", &number, &group);
    printf("%d %d\n", number / group, number % group);
    return 0;
}
