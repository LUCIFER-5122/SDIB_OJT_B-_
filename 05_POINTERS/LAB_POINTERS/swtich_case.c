#include<stdio.h>
/*int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);*/
int (*p)(int , int );
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
int main()
{
    int b;
    char ch;
    printf("Enter the sign that u want to perform\nadd(+)\nsub(-)\nmul(*)\ndiv(/)\n: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+' :
                    p=add;
                    b=(*p)(20,10);
                    printf("add is:%d",b);
                    break;
        case '-' :
                    p=sub;
                    b=(*p)(20,10);
                    printf("sub is:%d",b);
                    break;
        case '*' :
                    p=mul;
                    b=(*p)(20,10);
                    printf("mul is:%d",b);
                    break;
        case '/' :
                    p=div;
                    b=(*p)(20,10);
                    printf("div is:%d",b);
                    break;
        default :
                printf("OOppps!!! INVALID CHOICE");

    }
}