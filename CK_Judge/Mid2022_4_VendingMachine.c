#include <stdio.h>

int main(void){
    int n, money = 0;
    scanf("%d", &n);
    int customer[n][2];
    int badmachine[30] = {0};
    for(int i = 0; i < n; i++){
        scanf("%d %d", &customer[i][0], &customer[i][1]);
        badmachine[customer[i][0] - 1] += customer[i][1];
        if(badmachine[customer[i][0] - 1] > 10){
            badmachine[customer[i][0] - 1] = 10;
        }
    }
    for(int i = 1; i <= 30; i++){
        if(i <= 10){
            money += badmachine[i - 1] * 10;
        }else if(i <= 20){
            money += badmachine[i - 1] * 20;
        }else{
            money += badmachine[i - 1] * 30;
        }
        printf("%d ", 10 - badmachine[i - 1]);
        if(i % 10 == 0){
            printf("\n");
        }
    }
    printf("Earned: $%d\n", money);
    return 0;
}