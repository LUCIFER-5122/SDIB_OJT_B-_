#include<stdio.h>
#define BIG(x,y) (x > y) ? x : y // MACROS take NO ARGUMENTS
void main()
{
    int a=10,b=20;
    char c='F',z= 'S';
    float f=6.7 , g=9.1;
    //printf("Enter the numnbver :");
    //scanf("%d %d ",&a,&b);
    printf("BIGGEST of two  number is : %d\n",BIG(a,b));
    printf("BIGGEST of two  number in char is : %c\n",BIG(c,z));
    printf("BIGGEST of two  number in float is : %f\n",BIG(f,g));
}