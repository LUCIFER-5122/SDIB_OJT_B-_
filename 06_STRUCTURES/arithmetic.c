#include<stdio.h>
#include<string.h>
struct arith 
{
    int a,b,c;
}res;
int add(int a, int b)
{
    return(a+b);
}
int main()
{
    res.a=10;
    res.b=20;
    res.c=add(res.a , res.b);
    printf("result is : %d ",res.c);
    return 0;
}