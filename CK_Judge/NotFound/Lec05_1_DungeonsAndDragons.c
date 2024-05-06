#include <stdio.h>

int main(void){
    int numbers[75][2] = {0};
    int lock[6] = {0};
    for(int i = 0; i < 75; i++){
        scanf("%d %d", &numbers[i][0], &numbers[i][1]);
        if(numbers[i][1] % 2 == 1){
            lock[numbers[i][0] - 1]++;
        }else{
            lock[numbers[i][0] - 1]--;
        }
    }
    for(int i = 0; i < 6; i++){
        lock[i] = lock[i] % 8;
        if(lock[i] < 0){
            printf("%d", lock[i] + 10);
        }else{
            printf("%d", lock[i]);
        }
        if(i != 5){
            printf(" ");
        }
    }
    return 0;
}