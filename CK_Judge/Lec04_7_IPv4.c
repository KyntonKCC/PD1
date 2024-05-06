#include<stdio.h>

int main(void){
    unsigned int n = 0 , first, second, third, forth;
    for(int i = 0; i < 8; i++){
        char ch;
        scanf("%c", &ch);
        if('a' <= ch && ch <= 'f'){
            if(i == 7){
                n = (n + ch - 'a' + 10);
            }else{
                n = (n + ch - 'a' + 10) << 4;
            }
        }else if('0' <= ch && ch <= '9'){
            if(i == 7){
                n = (n + ch - '0');
            }else{
                n = (n + ch - '0') << 4;
            }
        }
    }
    first  = (n) >> 24;
    second = (n - (n >> 24 << 24)) >> 16;
    third  = (n - (n >> 16 << 16)) >> 8;
    forth  = (n - (n >> 8 << 8)) >> 0;
    printf("%d.%d.%d.%d\n", first, second, third, forth);
    return 0;
}