#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int score[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &score[i]);
    }
    int m;
    scanf("%d", &m);
    int range[m][2];
    for(int i = 0; i < m; i++){
        scanf("%d %d", &range[i][0], &range[i][1]);
    }
    for(int i = 0; i < m; i++){
        int ans1 = 0, ans2 = 0, ans3 = 0;
        for(int j = 0; j < sizeof(score)/sizeof(score[0]); j++){
            if(score[j] < range[i][0])
                ans1++;
            else if(range[i][0] <= score[j] && score[j] < range[i][1])
                ans2++;
            else
                ans3++;
        }
        printf("%d %d %d\n", ans1, ans2, ans3);
    }
    return 0;
}