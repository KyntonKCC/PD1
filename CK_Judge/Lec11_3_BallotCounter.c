#include <stdio.h>                                  
#include <string.h>
#define MAX_CAND_CNT 20
#define MAX_NAME_LEN 32
struct ballot_counter_s {
    int count;
    char name[MAX_NAME_LEN];
} counter[MAX_CAND_CNT];

int cand_cnt;
void count(const char *name);
const char *winner();

int main(){
    scanf("%d", &cand_cnt);
    for (int i = 0; i < cand_cnt; i++) {
        scanf("%s", counter[i].name);
        counter[i].count = 0;
    }
    char name[MAX_NAME_LEN];
    while (scanf("%s", name) != EOF)
        count(name);

    for (int i = 0; i < cand_cnt; i++)
        printf("%s %d\n", counter[i].name, counter[i].count);
    printf("%s\n", winner());
    return 0;
}

void count(const char * name){
    for(int i = 0; i < cand_cnt; i++){
        if(strcmp(counter[i].name, name) == 0){
            counter[i].count++;
        }
    }
}

const char * winner(){
    int winner = 0, large = 0;
    for(int i = 0; i < cand_cnt; i++){
        if(counter[i].count > large){
            large = counter[i].count;
            winner = i;
        }
    }
    return counter[winner].name;
}