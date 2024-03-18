#include <ctype.h>
#include <stdio.h>
#define KEY '&'

int main(void){
    int orig_char, new_char;
    while ((orig_char = getchar()) != EOF) {    //End Of File
        new_char = orig_char ^ KEY;
        if (isprint(orig_char) && isprint(new_char)){
            putchar(new_char);
        }else{
            putchar(orig_char);
        }
    }
    return 0;
}