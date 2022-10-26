#include<stdio.h>
int facto(int i)
{
    int b;
    if(i==1)
    {
        return 1;
    }
    else
    {
b=i*facto(i-1);
}
}
int main()
{
    int c,num=10;
    c=facto(num);
    printf("c is : %d",c);
    return 0;
}