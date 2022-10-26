#include<stdio.h>
int result;
void disp();
int add(int x, int y)
{
    result = x+ y;
}
 void disp()
{
    printf("result of add is: %d",result);
}