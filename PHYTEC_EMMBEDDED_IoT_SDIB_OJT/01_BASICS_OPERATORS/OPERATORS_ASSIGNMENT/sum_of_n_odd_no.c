#include<stdio.h>
void main()
{
    int i,sum=0,n;
    printf("Input number:\n");
    scanf("%d",&n);
    printf("the odd numbers are :\n");
    for(i=1; i<=n; i++)
    {
        if((i%2) != 0)
        {
        printf("%d\t\n",i);
        sum+=i;
    }
    }
    printf("the sum of odd numbers : n=%d\tsum=%d\n ",n,sum);
}
