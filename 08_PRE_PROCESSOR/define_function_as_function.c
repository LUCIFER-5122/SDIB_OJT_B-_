#include<stdio.h>
void add(void);
#define ADDITION() add()       // MACRO takes NO ARGUMENT
void main()
{
    ADDITION();
}
void add(void)
{
    printf("10+20=%d",10+20);
}