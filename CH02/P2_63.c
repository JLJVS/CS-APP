#include <stdio.h>

unsigned srl(unsigned x, int k){
    unsigned xsra = (int) x >> k;
    unsigned mask = k ? ((1u << (8*sizeof(int)-k)) -1 ) : ~0u;

    return xsra & mask;
}

int sra(int x, int k){

    int xsrl = (unsigned) x >> k;

    unsigned mask = k ? ~((1u << (8*sizeof(int) -k ))-1 ): 0u;

    return (x < 0) ? mask | xsrl : xsrl;
}


int main(void)
{
    


    return 0;
}