#include<stdio.h>
#define POSITIVE
#ifndef NEGETIVE
#endif
void main()
{
    #ifdef POSITIVE
    int a=10,b=20;
    #endif
    #ifdef NEGETIVE
    int a=-10,b=-20;
    #endif
    printf("\n %d + %d = %d",a,b,a+b);
}