#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len)
{
    int i;
    for (i = 0; i < len; i++)
	    printf(" %.2x", start[i]);
    printf("\n");
}

void show_short_int(short int si)
{
    show_bytes((byte_pointer) &si, sizeof(short int));
}

void show_long_int(long int li)
{
    show_bytes((byte_pointer) &li, sizeof(long int));
}

void show_double(double d)
{
    show_bytes((byte_pointer) &d, sizeof (double));
}