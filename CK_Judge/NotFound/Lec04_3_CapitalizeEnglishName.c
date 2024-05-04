#include<stdio.h>

int main(void){
    int n, k = 0;
    scanf("%d", &n);
    char ch = getchar();
    ch = getchar();
    while (ch != '\n') {
        if(k == 0){
            if('A' <= ch && ch <= 'Z'){
                printf("%c", ch);
            }else{
                printf("%c", ch - 'a' + 'A');
            }
            k = 1;
        }else{
            if('A' <= ch && ch <= 'Z'){
                printf("%c", ch - 'A' + 'a');
            }else{
                printf("%c", ch);
            }
        }
        ch = getchar();
        if(ch == ',' || ch == '.' || ch == ';'){
            ch = getchar();
            printf("\n");
            k = 0;
        }
        if(ch == ' '){
            ch = getchar();
            printf(" ");
            k = 0;
        }
    }
    return 0;
}