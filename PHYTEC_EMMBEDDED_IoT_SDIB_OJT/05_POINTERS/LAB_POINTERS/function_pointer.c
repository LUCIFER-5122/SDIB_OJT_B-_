#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main()
{
    int (*p)(int , int ),c,s,m,d;
    p=add;
    c=p(20,10);
    printf("sum of 2 num is : %d\n",c);
    p=sub;
    s=p(20,10);
    printf("sub of 2 num is : %d\n",s);
    p=mul;
    m=p(20,10);
    printf("mul of 2 num is : %d\n",m);
    p=div;
    d=p(20,10);
    printf("div of 2 num is : %d\n",d);
}
int add( int a, int b)
{
    /*printf(" Enter the 2 number : ");
    scanf("%d %d", &a,&b);*/
    return a+b;
}

int sub( int a, int b)
{
    /*printf(" Enter the 2 number : ");
    scanf("%d %d", &a,&b);*/
    return a-b;
}

int mul( int a, int b)
{
    /*printf(" Enter the 2 number : ");
    scanf("%d %d", &a,&b);*/
    return a*b;
}

int div( int a, int b)
{
    /*printf(" Enter the 2 number : ");
    scanf("%d %d", &a,&b);*/
    return a/b;
}