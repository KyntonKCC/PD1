#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int line = 0;
    int table[8][8] = {0};
    int check_table[8][8] = {0};
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
            scanf("%d", &table[i][j]);
    for(int a = 0; a < 64; a++){
        int k = 0;
        scanf("%d", &k);
        for(int i = 0; i < 8; i++)
            for(int j = 0; j < 8; j++)
                if(table[i][j] == k)
                    check_table[i][j] = 1;
    }
    for(int i = 0; i < 8; i++){
        if(check_table[i][0] == 1 && check_table[i][1] == 1 &&
            check_table[i][2] == 1 && check_table[i][3] == 1 &&
            check_table[i][4] == 1 && check_table[i][5] == 1 &&
            check_table[i][6] == 1 && check_table[i][7] == 1){
                line++;
        }
        if(check_table[0][i] == 1 && check_table[1][i] == 1 &&
            check_table[2][i] == 1 && check_table[3][i] == 1 &&
            check_table[4][i] == 1 && check_table[5][i] == 1 &&
            check_table[6][i] == 1 && check_table[7][i] == 1){
                line++;
        }
    }
    if(check_table[0][0] == 1 && check_table[1][1] == 1 &&
        check_table[2][2] == 1 && check_table[3][3] == 1 &&
        check_table[4][4] == 1 && check_table[5][5] == 1 &&
        check_table[6][6] == 1 && check_table[7][7] == 1){
            line++;
    }
    if(check_table[0][7] == 1 && check_table[1][6] == 1 &&
        check_table[2][5] == 1 && check_table[3][4] == 1 &&
        check_table[4][3] == 1 && check_table[5][3] == 1 &&
        check_table[6][1] == 1 && check_table[7][1] == 1){
            line++;
    }
    printf("%d\n", line);
    return 0;
}