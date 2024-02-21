# include<stdio.h>
void main()
{
    int n,count = 1,x;
    printf("Enter your number: ");
    scanf("%d",&n);
     x = n & (n-1);
    while(x!=0)
    {
    count++;
    x = x & (x-1);
    }
    printf("Total numnber of 1's is %d", count);
}