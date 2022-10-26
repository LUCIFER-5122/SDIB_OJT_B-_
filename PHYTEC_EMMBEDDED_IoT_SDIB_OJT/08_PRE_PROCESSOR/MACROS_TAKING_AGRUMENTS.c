#include<stdio.h>
#define BIG(x,y) (x > y) ? x : y
int main()
{
    int a,b,c;
    printf("Enter the number:");
    scanf("%d %d %d",&a,&b,&c);
    printf("the biggest nmber is :%d",BIG(BIG(a,b),c));
    return 0;
}