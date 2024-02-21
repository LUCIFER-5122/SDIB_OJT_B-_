#include<stdio.h>
void main()
{
    struct value
    {
        int bits_1:2;
        int bits_3:4;
        int bits_4:3;
    }
    bit;
    printf("%ld\n",sizeof(bit));
}