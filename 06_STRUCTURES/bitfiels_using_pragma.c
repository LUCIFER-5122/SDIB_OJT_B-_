#include<stdio.h>
#pragma pack(1)
struct data
{
    unsigned int a : 4;
    unsigned char ch : 8;

}D={10,'A'};
void main()
{
    printf(" size in bits is :%d", sizeof(D));
}