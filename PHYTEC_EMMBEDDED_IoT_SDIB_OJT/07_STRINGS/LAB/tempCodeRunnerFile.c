#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct test
    {
        int i;
        float f;
        char c;
    };
    struct test *ptr;
    ptr=(struct test *)malloc(sizeof(struct test));
    ptr ->f = 6.5f;
    printf("%.2f\n",ptr->f);
}