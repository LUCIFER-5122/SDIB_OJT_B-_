#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char *ptr;
    char *fun();
    ptr=fun();
    printf("%s\n",ptr);
}
char *fun()
{
    char disk[30];
    strcpy(disk,"memory in c");
    
}