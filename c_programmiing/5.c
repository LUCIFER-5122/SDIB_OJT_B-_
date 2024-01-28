#include <stdio.h>
#include "main.h"

void average() 
{
    float a,b,c;
    float avg;   
    printf("Enter any 3 numbers : ");
    scanf("%f%f%f",&a,&b,&c);
    avg = (a+b+c)/3;
    printf("Average  of any 3 numbers is : %f",avg);   
}
