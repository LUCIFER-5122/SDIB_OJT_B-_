#include<stdio.h>
#include<errno.h>
void main()
{
    int p;
    p=open("hello.txt","O_RDONLY");
   // p=fopen("hello.txt","r");
        perror("\nTHIS IS ERROR by perror\n");
}