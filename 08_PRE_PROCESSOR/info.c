#include<stdio.h>
void disp();
int main()
{
    int a=10,b=-10;
    printf("FIle in use :%s\n", __FILE__);
    printf("PRESENT LINE IS :%d\n", __LINE__);
    printf("Function in use is :%s\n", __func__);   //specified in C99
    disp();
    printf("Present date is :%d",__DATA__);
    printf("standard C :%d", __STDC__);
    
}
void disp()
{
    printf("Present function :%S",__FUNCTION__);
}
