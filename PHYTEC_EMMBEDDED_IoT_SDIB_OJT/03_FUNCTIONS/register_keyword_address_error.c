#include<stdio.h>
void main()
{
    register int i,n;
    printf("entr the number:");
    scanf("%d",&n);
    for(i=10;i>=n;i--)
    {
        printf("i=%d\n",i);
    }
}