#include <stdio.h>
#include "main.h"

void revnum() 
{
    int num, rev = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    while (num > 0) 
    {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    printf("Reversed number is : %d\n", rev);
}
