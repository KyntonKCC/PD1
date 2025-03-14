#include <stdio.h>
#define LEN 5
int full_adder_c(int a, int b ,int c);
int full_adder_x(int a, int b, int c);

int main(void) {
    int a[LEN], b[LEN], ans[LEN], c = 0;
    for(int i = 0 ; i < LEN; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0 ; i < LEN; i++) {
        scanf("%d", &b[i]);
    }
    for(int i = 0 ; i < LEN ; i++) {
        ans[i] = full_adder_x(a[i], b[i], c);
        c = full_adder_c(a[i], b[i], c);
    }
    for(int i = 0 ; i < LEN; i++) {
        printf("%d ", ans[i]);
    }
    printf("%d\n", c);
    return 0;
}
int full_adder_x(int a, int b, int c) {
    return (a + b + c) % 2;
}
int full_adder_c(int a, int b ,int c) {
    return (a + b + c) / 2;
}
