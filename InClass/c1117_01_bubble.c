#include <stdio.h>
#define SIZE 10

void bubble(int * p){
    for(int i = 0; i < SIZE - 1; i++){
        for(int j = 0; j < SIZE - 1 - i; j++){
            if(p[j] < p[j + 1]){
                int temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}
int main(void){
    int a[SIZE] = {1,3,5,7,9,2,4,6,8,10};
    bubble(a);
    for(int i = 0; i < SIZE; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}