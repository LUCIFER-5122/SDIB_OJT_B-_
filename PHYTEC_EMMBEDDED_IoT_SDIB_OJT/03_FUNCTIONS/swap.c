#include<stdio.h>
int swap(int,int);
int a=10,b=20;
void main()
{
    
    printf(" before SWAPPING: a=%d, b=%d\n",a,b);
    swap(a,b);
}
    int swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
   printf(" After SWAPPING : a=%d, b=%d",a,b);
   return 0;
  
}