#include <stdio.h>
#include <stdint.h>

// a !!x
// b !!~x
// c !!(x & 0xFF << sizeof(int)-1) << 3)
// d !!(~x & 0xFF)



int main(void)
{
    int x = 1;
    uint8_t y = 255;
    int mask_x = 0xFFFFFFFF;
    // a
    printf("%d %d %d\n", x, !x, !!x);
    printf("%d %d %d\n", y, !y, !!y);
    // b
    printf("%d %d %d\n", x, !~x, !!~x);
    printf("%d %d %d\n", y, !~y, !!~y);
    // c
    printf("%d %d\n", x, !!(x & 0xFF << sizeof(int)-1) << 3);
    printf("%d %d\n", y, !!(y & 0xFF << sizeof(int)-1) << 3);
    // d 
    printf("%d %d\n", x, !!(~x & 0xFF));
    printf("%d %d\n", y, !!(~y & 0xFF));

    return 0;
}