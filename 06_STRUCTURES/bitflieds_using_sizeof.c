#include<stdio.h>
struct data
{
    unsigned int a : 4;
    char ch : 1;

}D={10,'A'};
void main()
{
    printf(" size in bits is :%d", sizeof(D));
}