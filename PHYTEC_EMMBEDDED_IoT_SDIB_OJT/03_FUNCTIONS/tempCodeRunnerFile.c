#include<stdio.h>
extern int result;
extern inline void disp();
void main()
{
    int x=10,y=20;
    printf("result of add is : %d", result);
    add(x,y);
    printf("result  of sub is : %d", result);
    sub(x,y);
    printf("result   is : %d", result);
    disp();
}