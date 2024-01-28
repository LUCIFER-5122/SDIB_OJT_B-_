#include <stdio.h>
#include "main.h"

void subsum() 
{
    int sum,s1,s2,s3,s4,s5;
    printf("Enter any 5 subject's marks :  ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    sum=s1+s2+s3+s4+s5;
    printf("Sum of 5 subject's marks is : %d",sum);   
}
