#include<stdio.h>
void check( int);
void main()
{
    int n,result;
    printf("enter the number :");
    scanf("%d",&n);
    check(n);
}
void check(int n)
{
    if(n%2 == 0)
    {
        printf("EVEN\n");
    }
    else{
        printf("ODD");
    }
}