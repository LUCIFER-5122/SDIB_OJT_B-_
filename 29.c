#include <stdio.h>
#include "main.h"

void mul3() 
{
    int count = 1;
    while (count <= 10) 
    {
	    printf("3*%d=%d", count,3*count); 
	    printf("\n");
	    count++;
    }
}
