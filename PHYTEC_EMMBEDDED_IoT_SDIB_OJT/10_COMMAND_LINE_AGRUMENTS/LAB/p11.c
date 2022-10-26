#include<stdio.h>
#include<string.h>
void main(int argc, char *argv[])
{int i;
for(i=1;i<argc;i++)
        printf("%c",argv[i][0]);
}