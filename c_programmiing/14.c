#include <stdio.h>
#include "main.h"

void grade() 
{
    float marks[5];
    float total = 0, avg,per_val;
    printf("Enter marks out of 100 : \n");
    for (int i = 0; i < 5; ++i) 
    {
        printf("Enter mark %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    avg = total / 5;
    printf("Average mark is : %.2f\n", avg);
    per_val=(total/500)*100;
    if(per_val>80)
    {
        printf("A GRADE");
    }
    else if(per_val>60)
    {
        printf("B GRADE");
    }
    else if(per_val>40)
    {
        printf("C GRADE");
    }
    else
    {
        printf("D GRADE");
    }
}
