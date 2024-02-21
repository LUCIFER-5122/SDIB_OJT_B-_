#include<stdio.h>
 int main()
 {
    int a[10],i;
    printf(" Enter the details: ");
    scanf(" %d",&i);
    for(i=0;i<9;i++)
    {
        scanf(" %d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("\narray is : %d\narray address is: %d\n",a[i],&a[i]);
    }
    return 0;
 }