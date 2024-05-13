#include <stdio.h>
#define NUM 9

void check_sudoku(int (*grid_p)[NUM]);

int main(void){
    int grid[NUM][NUM]; // sudoku puzzle
    for(int i = 0; i < NUM; ++i)
        for(int j = 0; j < NUM; ++j)
            scanf("%d", &grid[i][j]);
    check_sudoku(grid);
    return 0;
}

void check_sudoku(int (* grid_p)[NUM]){
    for(int i = 0; i < NUM * NUM; i++){
        if(i % 9 == 0 && i != 0){
            printf("\n");
        }
        printf("%d ", (* grid_p)[i]);
    }
    printf("\n------------------\n");
    
}