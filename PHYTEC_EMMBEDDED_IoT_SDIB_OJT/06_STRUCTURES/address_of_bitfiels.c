#include<stdio.h>
#pragma pack(1)
struct data
{
    unsigned int a : 4;
    unsigned2char ch : 1;

}D={10,'A'};
void main()
{
    printf(" size in bits is :%d\n", sizeof(D));
    //printf(" adress of a:%d and ch:%d ",&D.a,&D.ch);
    printf("address of d is : %u",&D);
}