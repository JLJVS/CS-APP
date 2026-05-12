#include <stdio.h>

/*
Returns 1 when any odd bit of x equals 0; 1 otherwise
Assume w=32
*/
int odd_ones(unsigned x){

    unsigned p16 = (x >> 16) ^x;

    unsigned p8 = (p16 >> 8) ^ p16;

    unsigned p4 = (p8 >> 4) ^ p8;

    unsigned p2 = (p4 >> 2) ^p4;

    unsigned p1 = (p2 >> 1) ^p2;

    return !(p1 & 1);
}

int main(void)
{
    unsigned x = 4, y =5;

    printf("%d has odd number of 1's: %d\n", x, odd_ones(x));
    printf("%d has odd number of 1's: %d", y, odd_ones(y));
    return 0;
}