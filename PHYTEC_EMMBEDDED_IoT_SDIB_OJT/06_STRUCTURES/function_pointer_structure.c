#include<stdio.h>
#include<string.h>
struct oper 
{
    int a,b;
int (*p)(int , int );
};

int addi( int x, int y)
{
    
    return x+y;
}

int subt( int x, int y)
{
    return x-y;
}

int multy( int x, int y)
{
    return x*y;
}

int divi( int x, int y)
{
    return x/y;
}

int main()
{
   struct oper add, sub,mul,div;
   printf(" Enter the 2 number : ");
    scanf("%d %d", &add.a,&add.b);
    sub=add;
    mul=add;
    div=add;
    add.p=addi;
    sub.p=subt;
    mul.p=multy;
    div.p=divi;
    printf("addition are : %d\n", add.p(add.a,add.b));
    printf("subtraction are :%d\n", sub.p(sub.a,sub.b));
    printf("multiplication are :%d\n", mul.p(mul.a,mul.b));
    printf("division are :%d\n", div.p(div.a,div.b));
}
