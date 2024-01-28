#include <stdio.h>
#include "main.h"

void greetings() 
{
    int age;
    printf("Enter the age : ");
    scanf("%d", &age);
    if(age<5)
    {
       printf("NICE KID"); 
    }
    else if(age<=10)
    {
       printf("NICE CHILD"); 
    }
    else if(age<=15)
    {
       printf("TEENAGER"); 
    }
    else if(age<=25)
    {
       printf("YOUNG AGE"); 
    }
    else if(age<=50)
    {
       printf("MIDDLE AGE"); 
    }
    else 
    {
       printf("OLD AGE");
    }
}
