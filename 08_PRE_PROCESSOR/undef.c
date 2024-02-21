#include<stdio.h>
#define MAX 10
void main()
{
    printf("prev MAX is :%d\n",MAX);
    #undef MAX
    #define MAX 100
    printf("after unde MAX :%d",MAX);
}