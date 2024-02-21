#include<stdio.h>
int main()
{
    int i=3,num,X,k,j;
    printf("Enter the number:");
    scanf("%d",&num);
   for(i=7 ; i>=0 ; i--)
   {
    X = (num>>i) & 0x01;
    printf("result of X: %d\t\n",X);
   }
  // printf("vlue of k : %d \t",k);
  k=num&0xf0;
   for(i=7; i>=0; i--)
   {
    j=(k>>i)&0x01;
    printf(" %d\t",j);}
    return 0;
   }

