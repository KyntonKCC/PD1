#include<stdio.h>
#include<stdint.h>
#include<limits.h>
#define NUMBER_1 0x38E38E38E38E3800LLU  //  4099276460824344576
#define NUMBER_2 0x2AAAAAAAAAAAAAAALLU  //  3074457345618258602
#define NUMBER_3 0x1C71C71C71C71C71LLU  //  2049638230412172401
#define NUMBER_4 0x7CE66C50E2840000LLU  //  9000000000000000000

int main(void){
    int d1, d2, d3;
    unsigned long long D1 = 0, D2 = 0, D3 = 0, ans = 0;
    scanf("%d %d %d", &d1, &d2, &d3);
    for(int i = 0; i < d1; i++){
        D1 += NUMBER_1;
        if(D1 > NUMBER_4)
            D1 -= NUMBER_4;
    }
    for(int i = 0; i < d2; i++){
        D2 += NUMBER_2;
        if(D2 > NUMBER_4)
            D2 -= NUMBER_4;
    }
    for(int i = 0; i < d3; i++){
        D3 += NUMBER_3;
        if(D3 > NUMBER_4)
            D3 -= NUMBER_4;
    }
    ans = D1 + D2;
    if(ans > NUMBER_4){
        ans -= NUMBER_4;
    }
    ans = ans + D3;
    if(ans > NUMBER_4){
        ans -= NUMBER_4;
    }
    printf("%llu\n", ans);
    return 0;
}