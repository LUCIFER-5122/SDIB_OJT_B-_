#include <stdio.h>
#include "main.h"

void positive()
{
    int a;
    printf("Enter any number to check whether that number is positive or negetive : \n");
    scanf("%d", &a);
    if(a>0)
    {
        printf("%d is  POSITIVE number",a);
    }
    else
    {
	 printf("%d is NEGETIVE number",a);
    }
}
