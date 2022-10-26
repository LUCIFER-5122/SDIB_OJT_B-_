#include<stdio.h>
int main()
{
    int i=7,num,X,t,y;
    printf("Enter the number:");
    scanf("%d",&num);
   for(i=7 ; i>=0 ; i--)
   {
    X = (num>>i) & 0x1;
    printf("result: %d\n",X);
    t=num<<2;
    
  }
  printf("afteer shifting : %d\n", t);
   
   for(i=7 ; i>=0 ; i--)
   {
    y = (t>>i) & 0x1;
    printf("result: %d\n",y);}
  
    
    
return 0;
}