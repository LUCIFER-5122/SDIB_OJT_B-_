#include<stdio.h>
void main()
{
    int age;
    printf("Enter the age:\n");
    scanf("%d",&age);
    if(age<18)
    {
        printf("NOT ELIGIBLE TO VOTE\n");
    }
    else if(age==18)
    {
        printf("APPLY FOR VOTER APPLICATION\n");
    }
    else
    {
        printf("ELIGIBLE TO VOTE");

    }
}