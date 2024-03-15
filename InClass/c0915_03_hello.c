/*include <stdio.h>*/
int __attribute__((__cdecl__)) printf (const char *restrict, ...) 
__attribute__ ((__format__ (__printf__, 1, 2)));

int main(void){
    printf("Hello NCKU!\n");
    return 0;
}
