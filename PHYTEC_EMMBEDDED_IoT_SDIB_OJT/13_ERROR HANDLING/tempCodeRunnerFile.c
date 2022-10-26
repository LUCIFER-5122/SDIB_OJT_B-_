#include<stdio.h>
#include<errno.h>
void main()
{
    FILE *p;
   p=fopen("hello.txt","r");
        perror("\nTHIS IS ERROR by perror\n");
}