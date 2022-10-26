#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("address of a: %d\n", p);
    printf("address of p: %d\n", &p);
    printf("value of a: %d\n", *p);
    printf("value of p: %d\n",p);
    return 0;
}