#include<stdio.h>
int btod(int);
void main()
{
    int num;
    printf("enter the binary number :\n");
    scanf(" %d",&num);
    btod(num);
    }
int btod(int num)
{
    int x,i;
    for(i=7;i>=0;i--)
    {
        x=(num>>i)& 0x01;
        printf("%d",x);
    }
    
}