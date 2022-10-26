#include<stdio.h>
#include<stdlib.h>
void main(int argc, char **argv[])
{
    int i;
    for(i=1;i<=3;i++)
        printf("%u\n",&argv[i]);
}