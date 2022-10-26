#include<stdio.h>
#include<string.h>
struct arith 
{
    int a,b,c;
}res;
void add(int a, int b;*d)
{
    d = (a+b);
    printf("d value is :%d",d);
}
int main()
{
    res.a=10;
    res.b=20;
    add(res.a , res.b,&res.c);
    printf("result is : %d ",*res.c);
    return 0;
}