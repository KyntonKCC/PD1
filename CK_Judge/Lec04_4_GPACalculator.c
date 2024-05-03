#include<stdio.h>
// A+  A   A-  B+  B   B-  C+  C   C-  F
// 4.3 4.0 3.7 3.3 3.0 2.7 2.3 2.0 1.7 0

int main(void){
    int l, total_credit = 0;
    float GPA, sum;
    char ch = getchar();
    while(ch != '\n'){
        if('1' <= ch && ch <= '9'){
            l = 0;
            int k = (ch - '0');
            total_credit += k;
            ch = getchar();
            if(ch == 'A'){
                ch = getchar();
                if(ch == '+'){
                    sum += (4.3 * k);
                }else if(ch == '-'){
                    sum += (3.7 * k);
                }else{
                    sum += (4.0 * k);
                    l = 1;
                }
            }else if(ch == 'B'){
                ch = getchar();
                if(ch == '+'){
                    sum += (3.3 * k);
                }else if(ch == '-'){
                    sum += (2.7 * k);
                }else{
                    sum += (3.0 * k);
                    l = 1;
                }
            }else if(ch == 'C'){
                ch = getchar();
                if(ch == '+'){
                    sum += (2.3 * k);
                }else if(ch == '-'){
                    sum += (1.7 * k);
                }else{
                    sum += (2.0 * k);
                    l = 1;
                }
            }else{
                sum += 0;
            }
        }
        if(l == 0){
            ch = getchar();
        }
    }
    GPA = sum / total_credit;
    printf("%.2f\n", GPA);
    return 0;
}