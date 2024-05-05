#include <stdio.h>

int main(void){
    int d1, d2, d3, d4, d5, d6;
    scanf("%d %d %d %d %d %d", &d1, &d2, &d3, &d4, &d5, &d6);
    if(d1 + d2 + d3 <= 10){
        if(d4 == d5 && d5 == d6){
            printf("Player attacks: Critical Hit\n");
        }else if(d4 + d5 >= d6){
            printf("Player attacks: Normal Hit\n");
        }else{
            printf("Player attacks: Miss\n");
        }
    }else{
        if(d4 == d5 || d4 == d6 || d5 == d6 ){
            printf("Dragon attacks: Miss\n");
        }else if(d4 + d5 != d6){
            printf("Dragon attacks: Normal Hit\n");
        }else{
            printf("Dragon attacks: Critical Hit\n");
        }
    }
    return 0;
}