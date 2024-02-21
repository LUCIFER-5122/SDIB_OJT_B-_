#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int (*p[4])(int , int );
int add( int a, int b)
{
    return a+b;
}

int sub( int a, int b)
{
    return a-b;
}

int mul( int a, int b)
{
    return a*b;
}

int div( int a, int b)
{
    return a/b;
}
int main()
{
    p[0]=add;
    p[1]=add;
    p[2]=add;
    p[3]=add;
    int b;
    char ch;
    printf("Enter the sign that u want to perform\nadd(+)\nsub(-)\nmul(*)\ndiv(/)\n: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+' :
                    b=(*p[0])(20,10);
                    printf("add is:%d",b);
                    break;
        case '-' :
                    b=(*p[1])(20,10);
                    printf("sub is:%d",b);
                    break;
        case '*' :
                    b=(*p[2])(20,10);
                    printf("mul is:%d",b);
                    break;
        case '/' :
                    b=(*p[3])(20,10);
                    printf("div is:%d",b);
                    break;
        default :
                printf("OOppps!!! INVALID CHOICE");

    }
}