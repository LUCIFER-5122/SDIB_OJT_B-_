#include<stdio.h>
int a,b;
void swap();
int initialize();
int main()
{
    initialize();
    printf("a1=%d b1=%d\n",a,b);
    swap();
    printf("a2=%d b2=%d",a,b);
}
int initialize()
{
    int a=10,b=20;
}
void swap()
{
    a=a^b;
    b=a^b;
    a=a^b;
 }