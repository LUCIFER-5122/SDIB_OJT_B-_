#include<stdio.h>
void main()
{
    struct value
    {
        int bits_1;
        int bits_3;
        int bits_4;
        int bits_5;
    }
    bit;
    printf("%ld\n",sizeof(bit));
}