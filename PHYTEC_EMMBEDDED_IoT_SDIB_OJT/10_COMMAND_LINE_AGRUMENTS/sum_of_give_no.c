#include<stdio.h>
int main(int argc, char* argv[])
{
    int s=0,n;
    for(int i=1;i<argc;i++)
    {
        sscanf(argv[i],"%d",&n);
        s=s+n;
    }
    printf("Sum of given numbers:%d",s);
}