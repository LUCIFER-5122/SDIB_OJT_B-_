#include<stdio.h>
void main()
{
    int a=10;
    int *const p;
    p=&a;
    printf("value of a : %d\n",*p);
    printf("address of p : %p\n", p);
    printf("address of increm,ented p is : %p",p);
    printf("\nvalue of a after the increment : %d\n",++*p);
    
} 
