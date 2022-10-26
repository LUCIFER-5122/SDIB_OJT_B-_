#include<stdio.h>
void main()
{
    struct value
    {
        int bits_1:1;
        int bits_3:4;
        int bits_4:4;
    }
    bit={1,2,13};
    printf("%d %d %d\n", bit.bits_1,bit.bits_3,bit.bits_4);

}