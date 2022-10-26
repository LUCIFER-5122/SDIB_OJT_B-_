#include<stdio.h>
int global();
void main()
{
    int default_v;
    static int static_v;
    register int register_v;
    printf("%d\n",default_v);
    printf("%d\n",static_v);
    printf("%d\n",register_v); 
}