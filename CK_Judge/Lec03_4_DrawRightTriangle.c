#include <stdio.h>

int main(void){
    int i, j;
    scanf("%d %d", &i, &j);
    switch (i){
        case 1:
            for(int x = j ; x > 0 ; x--){
                for(int y = x ; y > 0 ; y--)
                    printf("*");
                printf("\n");
            }
            break;
        case 2:
            for(int x = 0 ; x < j ; x++){
                for(int y = 0 ; y <= x ; y++)
                    printf("*");
                printf("\n");
            }
            break;
        case 3:
            for(int x = j ; x > 0 ; x--){
                for(int s = 0 ; s < j - x ; s++)
                    printf(" ");
                for(int y = x ; y > 0 ; y--)
                    printf("*");
                printf("\n");
            }
            break;
        case 4:
            for(int x = 0 ; x < j ; x++){
                for(int s = j - x - 1 ; s > 0 ; s--)
                    printf(" ");
                for(int y = 0 ; y <= x ; y++)
                    printf("*");
                printf("\n");
            }
            break;
    }
    return 0;
}