#include <stdio.h>
#include "main.h"

void even() 
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    if(num % 2 == 0)
    {
       printf("EVEN"); 
    }
    else 
    {
       printf("ODD");
    }
}
