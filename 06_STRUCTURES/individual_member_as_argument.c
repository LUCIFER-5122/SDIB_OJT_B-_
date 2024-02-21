#include<stdio.h>
#include<string.h>
int add(int,int);
struct arith 
{
    int a,b,c;
}res;
int main()
{
    res.a=10;
    res.b=20;
    int c;
    c=add(res.a,res.b);
    printf("%d",c);
    return 0;
}
int add(int x, int y)
{
    return x+y;
}