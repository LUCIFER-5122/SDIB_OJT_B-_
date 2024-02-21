#include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5};
    int *p;
    p=&a;
    printf("value of p :%d\n",*p);
    printf("address of p :%d\n",p);
p++;
     printf("value of p++ :%d\n",*(p));
    printf("address of p++ :%d\n",(p));
    printf("%d",*p);

    /*printf("value of ++p :%d\n",*(++p));
    printf("address of ++p :%d\n",(++p));*/

   
    
}