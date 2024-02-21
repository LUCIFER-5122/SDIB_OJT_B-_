#include<stdio.h>
void main()
{
    int i,sum=0,n;
    printf("Input number:\n");
    scanf("%d",&n);
    printf("the even numbers are :\n");
    for(i=0; i<=n; i++)
    {
        printf("%d\t",2*i);
        sum+=2*i;
    }
    printf("the sum of even numbers : n=%d\tsum=%d\n ",n,sum);
}
