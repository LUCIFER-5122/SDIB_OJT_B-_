#include<stdio.h>
int incre();
int main()
{
    incre();
    incre();
    incre();
    return 0;
}
int incre()
{
    static int count=0;
    count++;
    printf("count is:%d\n",count);
    return 0;
}
