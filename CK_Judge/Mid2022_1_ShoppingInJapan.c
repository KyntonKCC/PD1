#include <stdio.h>
#include <math.h>
#define exchangeRate2019 0.2966
#define taxRate2019 0.08
#define exchangeRate2022 0.2178
#define taxRate2022 0.10

int main(void){
    float price;
    long cheaper;
    scanf("%f", &price);
    if(price < 5000){
        cheaper = lround((lround(price * (1 + taxRate2019))) * exchangeRate2019) - 
            lround((lround(price * (1 + taxRate2022))) * exchangeRate2022);
    }else{
        cheaper = lround(price * exchangeRate2019) - lround(price * exchangeRate2022);
    }
    printf("%ld\n", cheaper);
    return 0;
}