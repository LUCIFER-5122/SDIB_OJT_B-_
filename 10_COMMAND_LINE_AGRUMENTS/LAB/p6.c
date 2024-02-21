#include<stdio.h>
void main(int argc, int *argv[])
{
    int i;
    for(i=1;i<argc;i++)
        printf("%s\n",argv[i]);
}