#include <stdio.h>
#include <stdint.h>

int int_shifts_are_arithmetic(){
    int x = -1; /// all ones
    return  (x >> 1) > 0;
}
int main(void)
{   
    uint16_t x = 0xFF;
    printf("%d, %d", x,  int_shifts_are_arithmetic());
    
    return 0;
}