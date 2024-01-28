#include <stdio.h>
#include "main.h"

void series1() 
{
    int r,count;
    printf("Enter the range : ");
    scanf("%d", &r);
    count=1;
    while (count <= r) 
    {
    	printf("%d ", count*5);     
        count++;
    }
}
