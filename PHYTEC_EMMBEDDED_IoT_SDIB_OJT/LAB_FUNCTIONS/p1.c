#include<stdio.h>
int square(int);
int main()
{
    float x,result;
    printf("Enter the value of number\n");
    scanf("%.2f",&x);
    result=square(x);
    printf("\nvalue = %.2f",result);
}
int square(int num)
{
    double sqr=num*num;
    return sqr;
}