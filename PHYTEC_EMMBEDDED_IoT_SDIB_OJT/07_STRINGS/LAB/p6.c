#include<stdio.h>
#include<string.h>
void main()
{
    static char s[]= "Hello!";
    printf("%d\n",*(s+strlen(s)));
}