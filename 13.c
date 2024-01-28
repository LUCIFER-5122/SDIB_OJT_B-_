#include <stdio.h>
#include "main.h"

void larg0f3() 
{
    int a, b, c;
    printf("Enter any three numbers : \n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
     {
        if (a > c) 
        {
            printf("%d is the LARGEST\n", a);
        } 
        else
        {
            printf("%d is the LARGEST\n", c);
        }
    } 
    else 
    {
        if (b > c) 
        {
            printf("%d is the LARGEST\n", b);
        } 
        else
        {
            printf("%d is the LARGEST\n", c);
        }
    }
}
