#include <stdio.h>
#include <string.h>
int main(){
    char str[80] = "Hi, I am Biden. Nice to meet you. Bye.";
    char * token;
    token = strtok(str, ".");
    while(token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, ".");
    }
    return 0;
}