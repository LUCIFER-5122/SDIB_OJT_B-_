#include<stdio.h>
#include<string.h>
void main()
{
    char str[]="Hello";
    str[strlen(str)+1]='#';
    printf("str=%s\n",str);   
