#include<stdio.h>
void main()
{
    int a[10];
    int i=0;
    for(i=0;i<10;i++)
    {
        scanf(" %d",&a[i]);
    }
     printf("array is : \n");
     for(i=0;i<10;i++)
     {
        printf(" %d",a[i]);
     }

}