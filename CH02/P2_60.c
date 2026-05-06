#include <stdio.h>

unsigned replace_byte (unsigned x, int i, unsigned char b){

    // increase the bit number to bytes so times 8
    int i_shift = i << 3;
    unsigned mask = 0xFF << i_shift;

    unsigned masked_x = x & ~mask;
    unsigned masked_b = b << i_shift;
    return masked_x | masked_b;
}

int main(void)
{   
    printf("0x12345678, 0xAB, 3, %X\n", replace_byte(0x12345678, 3, 0xAB));
    printf("0x12345678, 0xAB, 2, %X\n", replace_byte(0x12345678, 2, 0xAB));
    printf("0x12345678, 0xAB, 1, %X\n", replace_byte(0x12345678, 1, 0xAB));
    printf("0x12345678, 0xAB, 0, %X\n", replace_byte(0x12345678, 0, 0xAB));
    
    return 0;
}