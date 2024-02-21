#include<stdio.h>
void main()
{
    int a=10;
    int *p=NULL;
    p=&a;
    printf(" value of a is: %d\n",*p);
    printf(" address of p is: %p\n",p);

    int b=++(*p);
    printf("\nvalue of b is: %d\n",b);

    p++;
    printf(" value of a is: %d\n",*p);
    printf(" address of p is: %p\n",p);
    
    *p++;
    printf("\naddress of *p is: %p\n",*p);

}