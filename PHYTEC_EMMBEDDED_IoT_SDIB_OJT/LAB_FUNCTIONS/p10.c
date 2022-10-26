#include<stdio.h>
int reverse(int);
int main()
{
    int n=5;
    reverse(n);
    return 0;
}
int reverse( int n)
{
    if(n==0)
    return 0;
    else
    printf("%d,",n);
    reverse(n--);
}
