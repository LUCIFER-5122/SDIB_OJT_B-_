#include<stdio.h>
void main()
{
    int a[3][4] = {1,2,3,4,4,3,2,1,7,8,9,0};
    printf("a[0]=%u\n",a[0]);
    printf("a+1 : %u\n,&a+1 : %u",a+1,&a+1);
}