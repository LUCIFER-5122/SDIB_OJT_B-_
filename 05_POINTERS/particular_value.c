#include<stdio.h>
int main()
{
    
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int *p;
    p=a;
    printf(" address of a[6] is : %d\n",(p+6));
    printf(" address of a[4] is : %d\n",(p+4)); 
    printf(" memory contained in a[2] is : %p\n",((p+6)-(p+4)));
    printf(" address of a[2] is : %d\n",(*(p+6)-*(p+4)));
    return 0;
}