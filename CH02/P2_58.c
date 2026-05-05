#include <stdio.h>

void is_big_endian(void)
{
    /* MSB = 0, LSB = 1*/
    int x = 1;
    /* MSB (0) when big-endian, LSB (1) when little-endian*/
    char byte = *(char *) &x;

    if (byte == 1)
        printf("Little-endian\n");
    else
        printf("Big-endian\n");
}   

int main(void)
{
    is_big_endian();
    return 0;
}