#include <stdio.h>
#include <math.h>
int n;
void cal(int, int, int, char *, char *, int *);
void compare(int, int, int, char *, char *, int *);

int main(){
    scanf("%d", &n);
    char table1[n];
    char table2[(int)log2(n)];
    int table3[n];
    for(int i = 0; i < n; i++)
        table3[i] = i;
    scanf("%s", table1);
    scanf("%s", table2);

    // printf("%d\n", n);
    // for(int i = 0; i < n; i++)
    //     printf("%c ", table1[i]);
    // printf("\n");
    // for(int i = 0; i < (int)log2(n); i++)
    //     printf("%c ", table2[i]);
    // printf("\n");
    // for(int i = 0; i < n; i++)
    //     printf("%d ", table3[i]);
    // printf("\n");
    int count = (int)log2(n) - 1;
    cal(0, n / 2, count, table1, table2, table3);
    printf("%d\n", table3[0] + 1);
    return 0;
}

void cal(int a, int b, int c, char * tbl1, char * tbl2, int * tbl3){
    if(b - a != 1){
        cal(a, a + (b - a) / 2, c - 1, tbl1, tbl2, tbl3);
        cal(b, b + (b - a) / 2, c - 1, tbl1, tbl2, tbl3);
    // }else{
    //     printf(">>>%d %d %d %c %c %c\n", a, b, c, tbl1[a], tbl1[b], tbl2[c]);
    }
    compare(a, b, c, tbl1, tbl2, tbl3);
    // for(int i =0; i < n; i++)
    //     printf("%c ", tbl1[i]);
    // printf("\n");
    // for(int i =0; i < n; i++)
    //     printf("%d ", tbl3[i]);
    // printf("\n");
}

void compare(int a, int b, int c, char * tbl1, char * tbl2, int * tbl3){
    if(tbl1[a] == tbl1[b]){
        if(tbl2[c] == 'b'){
            tbl1[a] = tbl1[b];
            tbl3[a] = tbl3[b];
        }else if(tbl2[c] == 's'){ }
    }else if(tbl1[a] == 'p'){
        if(tbl1[b] == 's'){
            tbl1[a] = tbl1[b];
            tbl3[a] = tbl3[b];
        }else if(tbl1[b] == 'r'){ }
    }else if(tbl1[a] == 's'){
        if(tbl1[b] == 'r'){
            tbl1[a] = tbl1[b];
            tbl3[a] = tbl3[b];
        }else if(tbl1[b] == 'p'){ }
    }else if(tbl1[a] == 'r'){
        if(tbl1[b] == 'p'){
            tbl1[a] = tbl1[b];
            tbl3[a] = tbl3[b];
        }else if(tbl1[b] == 's'){ }
    }
}
