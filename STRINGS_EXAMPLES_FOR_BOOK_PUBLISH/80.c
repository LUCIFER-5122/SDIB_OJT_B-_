#include<stdio.h>
#include<windows.h>
void main()
{
    int *p,i,*temp;
    p= (int *)malloc(10*sizeof(int));
    printf("\nbefore p is :%p\n",p);
    for(i=0;i<10;i++)
        printf("\np is :%d\n",p[i]); 
    for(i=0;i<10;i++)
        p[i]=i+1;
    for(i=0;i<10;i++)
        printf("after incre p is :%d\n",p[i]);
        temp=realloc(p,(10*sizeof(int))+10);
        printf("\naddress of temp :%p\n",temp);
}