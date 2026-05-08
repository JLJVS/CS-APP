#include <stdio.h>

/*
2.64 Write code to implement the following function:
return 1 when any odd bit of x equals 1; 0 otherwise.
assume w=32.


We should implement a mask that only matches the odd bits

so per hexadecimal value we only want the odd bits
8421
1010 -> A

for even bits:
8421
0101 -> 5

so our mask should look like 0x55555555
if anything matches it should be non zero
*/


int any_even_one(unsigned x)
{
    unsigned mask = 0x55555555;
    return (x & mask) != 0;
}

int any_odd_one(unsigned x)
{
    unsigned mask = 0xAAAAAAAA;
    return (x & mask) != 0;
}

int main(void)
{
    int odd_bits = 5, both_bits = 6, even_bits = 2;

    printf("%d - 110 has even bits: %d  and odd bits: %d \n", both_bits, any_even_one(both_bits), any_odd_one(both_bits));
    
    printf("%d - 101 has even bits: %d  and odd bits: %d \n", odd_bits, any_even_one(odd_bits), any_odd_one(odd_bits));

    printf("%d - 101 has even bits: %d  and odd bits: %d \n", even_bits, any_even_one(even_bits), any_odd_one(even_bits));

    return 0;
}