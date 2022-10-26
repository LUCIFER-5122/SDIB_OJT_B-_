#include<stdio.h>
//#include<stdlib.h>
#include<windows.h>
void main()
{
    int *p,i;
    p= (int *)calloc(10,sizeof(int));
    printf("\nbefore p is :%d\n",p);
    for(i=0;i<10;i++)
        printf("\np is :%d\n",p[i]); 
    for(i=0;i<10;i++)
        p[i]=i+1;
    for(i=0;i<10;i++)
        printf("after incre p is :%d\n",p[i]);
    

}