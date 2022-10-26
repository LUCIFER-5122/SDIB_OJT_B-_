#include<stdio.h>
int main(int argc, int* argv[])
{
    int s=0,i;
    for(i=0;i<argc;i++)
        s=s+argv[i];
    printf("Sum of given numbers:%d",s)
}