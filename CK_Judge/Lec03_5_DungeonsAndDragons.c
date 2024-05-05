#include <stdio.h>
#define MAX_SIZE 100
int table[MAX_SIZE][6];

int main(void){
    int d1, d2, d3, d4, d5, d6, z = 0, player_hp = 100, dragon_hp = 100;
    char c = getchar();
    while(c != EOF){
        table[z][0] = c - '0';
        scanf("%d %d %d %d %d\n", &table[z][1], &table[z][2], &table[z][3], &table[z][4], &table[z][5]); 
        z++;
        c = getchar();
    }
    for(int i = 0; i < MAX_SIZE && player_hp > 0 && dragon_hp > 0; i++){
        d1 = table[i][0]; d2 = table[i][1]; d3 = table[i][2];
        d4 = table[i][3]; d5 = table[i][4]; d6 = table[i][5];
        if((d1 + d2 + d3) % 2 == 1){
            if((d4 < d5) && (d5 < d6)){
                dragon_hp -= 25;
            }else if(((d4 % 2) == (d5 % 2)) || ((d5 % 2) == (d6 % 2))){
                dragon_hp -= 5;
            }
        }else{
            int d7 = d4 - d5;
            d7 = d7 > 0 ? d7 : d7 * -1;
            if(d7 > d6){
                player_hp -= 15;
            }else if((d4 + d5) != d6){
                player_hp -= 5;
            }
        }
    }
    if(player_hp <= 0)
        printf("Dragon wins\n");
    else
        printf("Player wins\n");
    return 0;
}