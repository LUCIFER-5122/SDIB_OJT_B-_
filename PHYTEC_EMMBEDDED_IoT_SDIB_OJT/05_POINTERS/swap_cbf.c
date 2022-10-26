#include<stdio.h>
void swap(int*, int*);
int main()
{
    int a=10, b=20;
    printf("Before swapping : a=%d , b=%d\n",a,b);
    swap(&a,&b);
    printf("After the swapping : a=%d , b=%d\n",a,b );
}
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a = *b;
    *b = temp;
    printf("After swapping in main() : a=%d, b=%d",*a,*b);
}