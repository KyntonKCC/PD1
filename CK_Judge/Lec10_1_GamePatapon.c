#include <stdio.h>
#include <string.h>
int distance, blood, n = 0, valid = 0;
char sentence[2000];
char * table[30];

int main(void){
    scanf("%d %d\n", &distance, &blood);
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0;
    char * token = strtok(sentence, ",.");
    while(token != NULL){
        table[n++] = token;
        token = strtok(NULL, ",.");
    }
    for(int i = 0; i < n; i++){
        int defend = 0;
        if(strcmp(table[i], "PATA PATA PATA PON") == 0){
            distance -= 1;
            valid += 1;
        }else if(strcmp(table[i], "PON PON PATA PON") == 0){
            if(distance <= 3)
                blood -= 1;
            valid += 1;
        }else if(strcmp(table[i], "CHAKA CHAKA PATA PON") == 0){
            distance += 1;
            defend = 1;
            valid += 1;
        }
        if(distance == 0){
            printf("NO %d\n", blood);
            break;
        }else if(blood == 0){
            printf("YES %d\n", valid);
            break;
        }else if((i + 1) % 10 == 0 && defend == 0){
            printf("NO %d\n", blood);
            break;
        }
        if((i + 1) == 30){
            printf("NO %d\n", blood);
            break;
        }
    }
    return 0;
}