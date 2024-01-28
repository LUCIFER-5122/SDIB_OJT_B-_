#include <stdio.h>
#include "main.h"

void nnumrev() 
{
    int num,n;
    printf("Enter the range : ");
    scanf("%d", &n);
    num=n;
    while (num>0)
    {
    	printf("%d ", num);  
        num--;
    }
}
