#include<stdio.h>
void main()
{
    struct value
    {
        int bits_1: 20;
        int bits_2: 12;
        int bits_3: 20;
        int bits_4: 13;
    }
    bit;
    printf("%ld\n",sizeof(bit));
}