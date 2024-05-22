#include <stdio.h>
#define N 500
int n, level = 0, number = 0;
char table[N][N];
char target[N];

void re(char);
void rt(char, int *, int);

int main(void){
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s", table[i]);
    }
    scanf("%s", target);

    int step[n];
    for(int i = 0; i < n; i++){
        step[i] = 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 4; j < table[i][2] - '0' + 4; j++){
            if('a' <= table[i][j] && table[i][j] <= 'e'){
                if(* (step + i) == 0){
                    * (step + i) = 1;
                }
            }else{
                rt(table[i][j], step, i);
            }
        }
    }

    for(int i = 0; i < n; i++){
        step[i] += 1;
        if(step[i] > level){
            level = step[i];
        }
    }

    for(int i = 3; i < target[1] - '0' + 3; i++){
        if('a' <= target[i] && target[i] <= 'e'){
            number++;
        }else{
            re(target[i]);
        }
    }
    if(n != 0){
        level += 1;
    }else{
        level = 2;
    }
    printf("%d %d\n", level, number);
    return 0;
}

void re(char ch){
    for(int i = 0; i < n; i++){
        if(table[i][0] == ch){
            for(int j = 4; j < table[i][2] - '0' + 4; j++){
                if('a' <= table[i][j] && table[i][j] <= 'e'){
                    number++;
                }else{
                    re(table[i][j]);
                }
            }
        }
    }
}

void rt(char ch, int * step, int a){
    for(int i = 0; i < n; i++){
        if(table[i][0] == ch){
            if(* (step + i) == 0){
                for(int j = 4; j < table[i][2] - '0' + 4; j++){
                    if('a' <= table[i][j] && table[i][j] <= 'e'){
                        * (step + i) = 1;
                    }else{
                        rt(table[i][j], step, i);
                    }
                }
                * (step + a) = * (step + i) + 1;
            }else{
                if(* (step + i) >= * (step + a)){
                    * (step + a) = * (step + i) + 1;
                }
            }
        }
    }
}