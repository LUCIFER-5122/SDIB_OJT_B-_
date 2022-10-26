#include<stdio.h>
void main()
{
    int a=10;
     int p;
      p=&a;
     *p=100;
   
   
    printf("%d", *p);
}