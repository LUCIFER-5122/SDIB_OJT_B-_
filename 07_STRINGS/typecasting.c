#include<stdio.h>
void main()
{
int a=10;

void *p;
p=&a;
printf("p is : %p\n",p);
printf("*p: %d",*(int *)p);
}