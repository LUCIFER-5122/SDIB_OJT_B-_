#include <stdio.h>
#include "main.h"

void cirperi() 
{
    float pi=3.14,p,r;
    printf("Enter the radius of circle : ");
    scanf("%f",&r);
    p = 2*pi*r;
    printf("Primeter of circle is : %f",p);
}
