#include<stdio.h>
#include<stdlib.h>
void main(int sizeofargv, char *argv[])
{
    while(sizeofargv)
        printf("%s ",argv[--sizeofargv]);
}