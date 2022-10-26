#include<stdio.h>
int rcs(int i)
{ 

    if(i<=10)
{
    printf("%d",i);
    return rcs(i+1);
}
    
}
int main()
{
    int n=1;
    rcs(n);
}
