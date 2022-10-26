#include<stdio.h>
int main()
{
    int a[10]={0};
    int x,i,pos,n=7;
    for(i=0;i<n;i++)
        a[i]=i+1;
    printf(" original array:");
    for(i=0;i<n;i++)
        printf(" %d",a[i]);
        printf("\n");
    printf("Enter the element to be inserted :");
    scanf("%d",&x);
    printf("Enter the position to be inserted :");
    scanf("%d",&pos);
    n++;
    for(i=n-1;i>=pos;i--)
        a[i]=a[i-1];
   a[pos-1]=x;
    for(i=0;i<n;i++)
        printf(" %d",a[i]);
        printf("\n");
    return 0;
}