#include <stdio.h>

int a_1, a_n, d;

int sum(int a_i);

int main(){
    scanf("%d %d %d", &a_1, &a_n, &d);
    printf("%d\n", sum(a_1));
    return 0;
}

int sum(int a_i) {
    return (a_n + a_1) * (a_n - a_1 + d) / d / 2;
}