#include<stdio.h>
void incre(int *);
void main()
{
    int a=10;
    printf("INCREMENTED value is: a=%d\n",a);
    incre(&a);
}
void incre(int *a)
{
    int b;
    b=a++;
    printf("after the increment: a=%d",*a);
}