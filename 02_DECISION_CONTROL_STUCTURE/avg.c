#include<stdio.h>
void main()
{
    int m1,m2,m3,tot;
    float avg;
   printf("enter the marks\n");
    scanf("%d %d %d",&m1,&m2,&m3);
    tot=m1+m2+m3;
    avg= tot/3;
    printf("the total is : %d\n the avg is : %.2f\n",tot,avg);
    if(m1>=35 && m2>=35 && m3>=35)
    {
        if(avg>=80)
        printf("Distingtion\n");
        else if(avg>=60)
        printf("first class\n");
        else if(avg>=40)
        printf("second class\n");
        
    }
    else
        printf("\nsorry u r FAIL\n");


}