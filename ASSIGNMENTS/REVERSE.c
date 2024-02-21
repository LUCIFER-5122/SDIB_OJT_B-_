#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5},i,len;
    len = sizeof(a)/sizeof(a[0]);
    printf(" ORIGINAL ARRAY: \n");
    
    for( i=0; i<len ; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    printf(" Array in REVERSE ORDER: \n");
    for(i=len-1; i>=0; --i)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}