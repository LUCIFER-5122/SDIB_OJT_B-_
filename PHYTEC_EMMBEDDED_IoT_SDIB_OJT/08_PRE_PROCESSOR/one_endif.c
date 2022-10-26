#include<stdio.h>
#define EVEN
void main()
{
    #if defined EVEN
        int a=12, b=16;
    #elif defined ODD
        int a=11,b=31;
    #else
        int a=0,b=0;
    #endif
    printf("sum of two numbers: %d",a+b);
}