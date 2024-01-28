#include <stdio.h>
#include "main.h"

void license() 
{
    int age;
    printf("Enter the age : ");
    scanf("%d", &age);
    if(age>18)
    {
       printf("HURRY !!! U R ELIGIBLE FOR DL , HAVE A SAFE RIDE "); 
    }else {
        printf("OOPPS SORRY !!! TRY  NEXT YEAR..."); 
    }
}
