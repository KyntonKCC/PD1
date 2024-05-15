#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LEN 4096
void recovery(char * homework);

int main () {
    char homework[MAX_LEN + 1];
    
    // Get the homework content.
    fgets(homework, MAX_LEN , stdin);
    recovery(homework);

    // Print the recovered homework.
    fputs(homework, stdout);

    return 0;
}

void recovery(char * homework) {

}