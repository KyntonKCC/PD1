#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFFER_LEN 1024
#define LINE_LEN 128
void convert(char *arr[], int count);

int main() {
    char line[BUFFER_LEN];
    char buffer[LINE_LEN][BUFFER_LEN];
    char *arr[LINE_LEN];

    int count = 0;
    while (fgets(line, BUFFER_LEN - 1, stdin) != NULL) {
        arr[count] = buffer[count];
        strncpy(buffer[count++], line, BUFFER_LEN - 1);
    }
    convert(arr, count);
    for (int i = 0; i < count; i++) {
        printf("%s", arr[i]);
    }
}

void convert(char *arr[], int count){
    
}