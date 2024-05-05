#include<stdio.h>

int main () {
    int i, smallest = -1, biggest = -1;
    while(i != -1){
        scanf("%d", &i);
        if(smallest == -1 && biggest == -1){
            smallest = i;
            biggest = i;
        }else if(i <= smallest && i != -1){
            smallest = i;
        }else if(biggest <= i){
            biggest = i;
        }
        if(i == -1){
            break;
        }
    }
    printf("%d\n", biggest - smallest);
    return 0;
}