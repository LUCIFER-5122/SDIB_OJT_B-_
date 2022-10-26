#include<stdio.h>
void main()
{
    struct value
    {
        int bits_1: 2;
        int bits_2: 9;
        int bits_3: 6;
        int bits_4: 1;
    }
    bit;
    printf("%ld\n",sizeof(bit));
}