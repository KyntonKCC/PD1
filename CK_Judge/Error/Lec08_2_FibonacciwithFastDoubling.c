#include <stdio.h>

typedef unsigned long long uint64_t;

void fib_fast_doubling(unsigned, uint64_t *, uint64_t *);

int main(){
    unsigned k;
    scanf("%u", &k);

    uint64_t f2k, f2k1;
    fib_fast_doubling(k / 2, &f2k, &f2k1);

    printf("%llu", (k & 0x1) ? f2k1 : f2k);

    return 0;
}
/*
fib(2k) = 2 * fib(k) * fib(k + 1) - fib(k) * fib(k)     //even
fib(2k + 1) = fib(k) * fib(k) + fib(k + 1) * fib(k + 1) //odd

where fib(1) = fib(2) = 1
*/

//1 1 2 3 5 8 13 21 34 55
//1 2 3 4 5 6  7  8  9 10
//fib(1)^2 + fib(2)^2 = fib(3)  //2*fib(2)*fib(3) - fib(2)^2 = fib(4)
//fib(2)^2 + fib(3)^2 = fib(5)  //2*fib(3)*fib(4) - fib(3)^2 = fib(6)
//fib(3)^2 + fib(4)^2 = fib(7)  //2*fib(4)*fib(5) - fib(4)^2 = fib(8)
//fib(4)^2 + fib(5)^2 = fib(9)  //2*fib(5)*fib(6) - fib(5)^2 = fib(10)

void fib_fast_doubling(unsigned k, uint64_t * f2k, uint64_t * f2k1){
    
}