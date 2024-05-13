#include <stdio.h>
#define ARR_MAX 1000
void sort_section(int * ptr, int * qtr);

int main() {
    int N, a, b;
    scanf("%d%d%d", &N, &a, &b);
    int arr[ARR_MAX] = {0};
    for (int i = 0; i < N; i++) {
        scanf("%d", arr + i);
    }
    sort_section(&arr[a], &arr[b]);
    for (int i = 0; i < N; i++) 
        printf("%d ", *(arr + i));
    printf("\n");
}

void sort_section(int * ptr, int * qtr) {
    int * keep = ptr, * small = ptr, * big = qtr;
    if(ptr > qtr){
        keep = qtr;
        small = qtr;
        big = ptr;
    }
    for(int i = 0; i < (big - small); i++){
        for(int j = 0; j < (big - small) - i; j++){
            if(small[j] > small[j + 1]){
                int temp = small[j];
                small[j] = small[j + 1];
                small[j + 1] = temp;
            }
            // if(* (small + j) > * (small + j + 1)){
            //     int temp = * (small + j);
            //     * (small + j) = * (small + j + 1);
            //     * (small + j + 1) = temp;
            // }
        }
        for(int j = 0; j < (big - small) + 1 ; j++)
            printf("%d ", * (keep++));
        keep = small;
        printf("\n");
    }
}
