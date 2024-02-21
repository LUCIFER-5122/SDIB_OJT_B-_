#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p;
    p=(int *)malloc(20);
    printf("%d\n",sizeof(p));
    free(p);
}