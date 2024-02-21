#include<stdio.h>
enum led {ON,OFF};
void main()
{
    enum led state;
    int l;
    printf("Enter the state:\n");
    scanf("%d",&state);
    if(state == ON)
        printf("LED ON");
    else if(state == OFF)
        printf("LED OFF");

}