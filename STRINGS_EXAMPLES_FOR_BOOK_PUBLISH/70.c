#include<stdio.h>
#include<string.h>
#include<conio.h>
void main( )
{
    FILE *fp;
    openfile("Myfile.txt",&fp);
    if(fp == NULL)
        printf("Unable to open file");
}
    openfile( char *fn, FILE **f)
{
    *f = fopen( fn,"r");
}
