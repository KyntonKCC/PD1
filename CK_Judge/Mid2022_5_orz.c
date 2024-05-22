#include <stdio.h>
#include <stdbool.h>
#define MAX_LEN 200000

int N;
char str[MAX_LEN];

void find_orz(int orz_position[], int *orz_num);
void calculate_worship(int worship_amount[], int range_index, int left_orz_position, int right_orz_position);
int find_max_worship_range(int value, int *range_L, int *range_R, int left_orz_position, int right_orz_position);

int main(){
    scanf("%d", &N);
    scanf("%s", str);

    int orz_position[MAX_LEN] = {0}, worship_amount[MAX_LEN] = {0}, orz_num = 0;
    find_orz(orz_position, &orz_num);

    // for(int i = 0; i < orz_num; i++){
    //     printf("%d ", orz_position[i]);
    // }
    // printf("\n%d\n", orz_num);

    for (int i = 1; i < orz_num; i++){
        calculate_worship(worship_amount, i - 1, orz_position[i - 1], orz_position[i]);
    }

    // for(int i = 1; i < orz_num; i++){
    //     printf("%d ", worship_amount[i - 1]);
    // }

    int max_worship, range_L, range_R;
    for (int i = 0; i < orz_num - 1; i++){
        max_worship = find_max_worship_range(worship_amount[i], &range_L, &range_R, orz_position[i], orz_position[i + 1]);
    }
    printf("%d %d %d\n", max_worship, range_L, range_R);
}

void find_orz(int orz_position[], int * orz_num){
    for(int i = 0; i < N - 2; i++){
        if(str[i] == 'o' && str[i + 1] == 'r' && str[i + 2] == 'z'){
            * orz_position++ = i + 1;
            * orz_num += 1;
        }
    }
}

void calculate_worship(int worship_amount[], int range_index, int left_orz_position, int right_orz_position){
    int total = 0;
    int alphabet[26] = {0};
    for(int i = left_orz_position + 2; i < right_orz_position - 1; i++){
        if(alphabet[str[i] - 'a'] == 0){
            alphabet[str[i] - 'a'] = 1;
        }
    }
    for(int i = 0; i < 26; i++){
        // printf("%d ", alphabet[i]);
        total += alphabet[i];
    }
    // printf("\n");
    * (worship_amount + range_index) = total * ((right_orz_position - 1) - (left_orz_position + 2));
    N = 0;
}

int find_max_worship_range(int value, int * range_L, int * range_R, int left_orz_position, int right_orz_position){
    if(value > N){
        N = value;
        * range_L = left_orz_position;
        * range_R = right_orz_position;
    }
    return N;
}