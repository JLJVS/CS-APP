#include <stdio.h>

int main(void)
{
    int x = 0x89ABCDEF;
    int y = 0x76543210;

    int mask_x = 0x000000FF;
    int mask_y = 0xFFFFFF00;

    int result_x = x & mask_x;
    int result_y = y & mask_y;
    int result = result_x | result_y;

    printf("x: \t\t%X\n", x);
    printf("y: \t\t%X\n", y);
    printf("desired result: 765432EF\n");
    printf("result:\t\t%X", result);


    return 0;
}