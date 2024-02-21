#include<stdio.h>
void main()
{
    int a=10,b=2;
    printf("a= %d\tb=%d\n",a,b);
    if(a>b)
    {
        int temp = a;
        a=b;
        b=temp;
    }
    printf("a= %d\tb=%d\n",a,b);
} 