#include<stdio.h>
#define EVEN
void main()
{
    #if defined EVEN
        int a=12, b=16;
    #else
    #if defined ODD
        int a=11,b=31;
    #else
    #endif
    #endif
    printf("sum of two numbers: %d",a+b);
}