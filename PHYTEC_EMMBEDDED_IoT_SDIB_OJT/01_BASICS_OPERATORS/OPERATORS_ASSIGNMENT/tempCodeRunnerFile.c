#include<stdio.h>
void main()
{
    int arr[50],i=0,num;
    printf("  Enter the num: ");
    scanf("%d",&num);
    while(num!=0)
    {
        arr[i] = num%2;
        i+=1;
        num = num/2;
    }
    printf("NO. OF BITS: %d\n",i);
    for( i = i-1; i>=0; i--)
    {
        printf(" Array of i : %d\n",arr[i]);
    }

}