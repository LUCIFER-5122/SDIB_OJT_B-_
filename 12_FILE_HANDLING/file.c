#include<stdio.h>
void main()
{
    FILE *p;
    p=fopen("hello.txt","r");
    if(p != NULL)
    {
        printf("FILE created SUCCESSFULLY\n");
    }
    fclose(p);
        
}
