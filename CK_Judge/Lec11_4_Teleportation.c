#include <stdio.h>
unsigned long construct(unsigned char parts[16]);

int main(){
    unsigned char parts[16];
    for (int i = 0; i < 16; i++){
        scanf("%hhx", parts + i);
    }

    // for(int i = 0; i < 16; i++){
    //     printf("%.2x ", parts[i]);
    // }
    // printf("\n");
    printf("%lu\n", construct(parts));
    return 0;
}

unsigned long construct(unsigned char parts[16]){
    unsigned long long a = 0, b = 0;
    unsigned long c;
    for(int i = 0; i < 8; i++){
        // printf("%.2x %llu\t%llu\n", parts[i], (unsigned long long)parts[i], (unsigned long long)parts[i] << (i * 8));
        a += ((unsigned long long)parts[i] << (i * 8));
    }
    // printf("----------------------------------\n");
    for(int i = 8; i < 16; i++){
        // printf("%.2x %llu\t%llu\n", parts[i], (unsigned long long)parts[i], (unsigned long long)parts[i] << ((i - 8) * 8));
        b += ((unsigned long long)parts[i] << ((i - 8) * 8));
    }
    // printf("----------------------------------\n");
    // printf("%llu\n", a);
    // printf("%llu\n", b);
    c = a ^ b;
    // printf("%llu\n", a ^ b);
    // printf("%lu\n", c);
    return c;
}