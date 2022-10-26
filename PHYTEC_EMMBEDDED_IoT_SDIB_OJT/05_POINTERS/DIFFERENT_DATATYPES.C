#include<stdio.h>
int main()
{
    int a=10;
    int *f;
    f= &a;
    printf("%d\n",*f);
    
    float d=10.0;
    float *p;
    p= &d;
    printf("%f", *p);
    return 0;
}