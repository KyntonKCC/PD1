#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int S[n], sum[n];
    for(int i = 0, j = 0, k = 0; i < n; i++){
        scanf("%d", &k);
        S[i] = k;
        if(i == 0)
            sum[i] = S[i];
        else
            sum[i] = sum[i - 1] + S[i];
        if(sum[i] % S[i] == 0)
            printf("%d %d\n", sum[i], S[i]);
    }
    return 0;
}