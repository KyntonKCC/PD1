#include<stdio.h>
#include<math.h>

int main(void){
    int n, d_sum;
    int d[4];
    scanf("%d", &n);
    // printf("%.8X\n", n);
    for(int i = 0; i < 4; i++){
        scanf("%d", &d[i]);
        d_sum += d[i];
    }
    unsigned int first, second, third, forth, 
        temp, tempMove1 = 0, tempMove2 = 0, tempUpper = 0, tempLower = 0;
    //第一版
    // first = n / pow(2, 24);                         //2^24
    // second = (n % (1024 * 1024 *16)) / pow(2, 16);  //2^16
    // third = (n % (1024 * 64)) / pow(2, 8);          //2^8
    // forth = (n % (256)) / pow(2, 0);                //2^0
    //第二版
    // first = (n - (n >> 8)) >> 24;
    // second = (n - (first << 24) - (n >> 16)) >> 16;
    // third = (n - (first << 24) - (second << 16) - (n >> 24)) >> 8;
    // forth = (n - (first << 24) - (second << 16) - (third << 8)) >> 0;
    //第三版
    // forth =  (n - (n >> 8 << 8)) >> 0;
    // third =  (n - (n >> 16 << 16) - (forth << 0)) >> 8;
    // second = (n - (n >> 24 << 24) - (third << 8) - (forth << 0)) >> 16;
    // first =  (n - (second << 16) - (third << 8) - (forth << 0)) >> 24;
    //第四版
    first  = (n) >> 24;
    second = (n - (n >> 24 << 24)) >> 16;
    third  = (n - (n >> 16 << 16)) >> 8;
    forth  = (n - (n >> 8 << 8)) >> 0;
    // printf("first  = %ld\tor %.2X\n", first, first);
    // printf("second = %ld\tor %.2X\n", second, second);
    // printf("third  = %ld\tor %.2X\n", third, third);
    // printf("forth  = %ld\tor %.2X\n", forth, forth);
    for(int i = 0; i < 4; i++){
        if(d[i] == 1){
            d[i] = first;
        }else if(d[i] == 2){
            d[i] = second;
        }else if(d[i] == 3){
            d[i] = third;
        }else{
            d[i] = forth;
        }
    }
    temp = d[0] ^ d[1];
    temp = (temp << 8) + (d[1] & d[2]);
    temp = (temp << 8) + (d[2] | d[0]);
    temp = (temp << 8) + ~d[3] + 256;
    // printf("%.8X\n", temp);
    tempMove1 = temp >> d_sum;
    tempMove2 = temp - (temp >> d_sum << d_sum);
    temp = (tempMove2 << (32 - d_sum)) + tempMove1;
    // printf("%.8X\n", temp);
    tempUpper = temp >> 16;
    tempLower = temp - (temp >> 16 << 16);
    temp = tempUpper ^ tempLower;
    // printf("%.8X\n", temp);
    printf("%d\n", temp);
    return 0;
}