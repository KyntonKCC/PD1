#include <stdio.h>
int n = 0, total = 0;

void calculate(int a, int rem[n][n]){
    // printf("rem[%d][0] = %d\n", a, rem[a][0]);
    if(rem[a][0] == 0){
        // printf("total++\n");
        total++;
    }else{
        for(int i = rem[a][0]; i > 0; i--){
            // printf("rem[%d][%d] = %d\n", a, i, rem[a][i]);
            calculate(rem[a][i] - 1, rem);
        }
    }
}

int main(void){
    scanf("%d", &n);
    int rem[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            rem[i][j] = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &rem[i][0]);
        for(int j = 0; j < rem[i][0]; j++)
            scanf("%d", &rem[i][j+1]);
    }
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++)
    //         printf("%d ", rem[i][j]);
    //     printf("\n");
    // }
    for(int i = 0; i < n; i++)
        calculate(i, rem);
    printf("%d\n", total);
    return 0;
}

