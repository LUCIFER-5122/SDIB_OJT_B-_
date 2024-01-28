#include <stdio.h>
#include "main.h"

void larg() 
{
    int a,b;
    printf("Enter any two numbers : \n");
    scanf("%d%d", &a, &b); 
    if(a>b)
    {
        printf("%d is the LARGEST",a);
    }
    else 
    {
    	printf("%d is the LARGEST",b);
    }  
}
