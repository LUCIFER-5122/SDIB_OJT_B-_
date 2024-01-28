#include <stdio.h>
#include "main.h"

void area() 
{
    float l,b;
    float a;
    printf("Enter the length and breadth of the rectrangle : ");
    scanf("%f %f",&l,&b);
    a = l*b;
    printf("Area of rectangle is : %f",a);
}
