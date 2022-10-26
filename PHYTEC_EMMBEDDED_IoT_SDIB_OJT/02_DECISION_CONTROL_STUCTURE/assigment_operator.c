#include<stdio.h>

void main()
{
    int a=10,b=3,temp;
    printf("a = %d\tb= %d\n",a,b);
    if(a>b)
    {
        a+=1;
        b+=1;
    }
    else{
        a+=10;
        b+=10;
    }
printf("a = %d\tb= %d\n",a,b);
}