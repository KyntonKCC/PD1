#include <stdio.h>
#include <math.h>
#define N 32
int a, b, c, sum;
int A[N], B[N], AB[N];

void IEEE754(int k, int * p){
    int l, m;
    if(k > 0){
        * p = 0;
        m = l = (int)log2(k);
    }else{
        * p = 1;
        m = l = (int)log2(k * (-1));
        k *= (-1);
    }
    l += 127;
    p += 8;
    for(int i = 8; i > 0; i--){
        * p = l % 2;
        l /= 2;
        p--;
    }
    p += (8 + m);
    for(int i = m; i > 0; i--){
        * p = k % 2;
        k /= 2;
        p--;
    }
}

int main(void){
    scanf("%d %d", &a, &b);
    IEEE754(a, &A[0]);
    IEEE754(b, &B[0]);
    for(int i = N - 1; i >= 0; i--){
        AB[i] = (A[i] + B[i] + c) % 2;
        c = (A[i] + B[i] + c) / 2;
    }
    for(int i = N - 1; i >= 0; i--){
        sum += (AB[i] * (int)pow(2, N - 1 - i));
    }
    
    printf("   ");
    for(int i = 1; i <= N; i++){
        printf("%d", A[i - 1]);
        if(i % 8 == 0){
            printf(" ");
        }
    }
    printf("\n");
    printf("+) ");
    for(int i = 1; i <= N; i++){
        printf("%d", B[i - 1]);
        if(i % 8 == 0){
            printf(" ");
        }
    }
    printf("\n");
    printf("---------------------------------------");
    printf("\n");
    printf("   ");
    for(int i = 1; i <= N; i++){
        printf("%d", AB[i - 1]);
        if(i % 8 == 0){
            printf(" ");
        }
    }
    printf("\n");
    printf("%d + %d = %d\n", a, b, sum);
    return 0;
}