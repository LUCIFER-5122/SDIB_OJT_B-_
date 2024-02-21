#include<stdio.h>
int add(int ,int );
void sub ();
int mul();
void div(int ,int );
void main()
{
   int a=10,b=20,c,d;
   c=add(a,b);
   printf("ADDITION:%d\n",c);
   sub();
   d=mul(a,b);
   printf("DIVISION:%d\n",d);
}
int add(int a, int b)
{
    int c=a+b;
    return c;
}
void sub()
{
    int a=10,b=10,diff;
    printf(" enter 2 nos. :-");
    scanf("%d %d",&a,&b);
    diff=a-b
}