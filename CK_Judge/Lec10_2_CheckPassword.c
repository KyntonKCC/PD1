#include <stdio.h>
#include <string.h>
#define SIZE 25

int length(char pwd1[], char pwd2[]);
int compare(char pwd1[], char pwd2[]);
int content(char pwd1[]);

int main(){
    char password1[SIZE];
    char password2[SIZE];
    
    // Enter the password
    scanf("%s", password1);
    // Enter the password again
    scanf("%s", password2);
    
    // Check Password
    // First: Check length
    if(length(password1, password2) == 1) {
        printf("Length does not match the requirements\n");
    }else {
        // Second: Check for consistency
        if(compare(password1, password2) == 1) {
            printf("Not the same password\n");
        }else {
            // Third: Check for compliance
            if(content(password1) == 1) {
                printf("Do not satisfy the conditions\n");
            }else {
                printf("Everything is good\n");
            }
        }
    }
    return 0;
}

int length(char pwd1[], char pwd2[]) {
    if(6 <= strlen(pwd1) && strlen(pwd1) <= 16 && 
       6 <= strlen(pwd2) && strlen(pwd2) <= 16){
        return 0;
    }else{
        return 1;
    }
}

int compare(char pwd1[], char pwd2[]) {
    if(strcmp(pwd1, pwd2) == 0){
        return 0;
    }else{
        return 1;
    }
}

int content(char pwd1[]) {
    int p1 = 0, p2 = 0, p3 = 0;
    for(int i = 0; i < SIZE; i++){
        if(pwd1[i] != '\0'){
            if('0' <= pwd1[i] && pwd1[i] <= '9'){
                p1 = 1;
            }else if('a' <= pwd1[i] && pwd1[i] <= 'z'){
                p2 = 1;
            }else if('A' <= pwd1[i] && pwd1[i] <= 'Z'){
                p3 = 1;
            }
        }else{
            break;
        }
    }
    if(p1 == 1 && p2 == 1 && p3 == 1){
        return 0;
    }else{
        return 1;
    }
}
