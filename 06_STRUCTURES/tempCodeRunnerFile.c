#include<stdio.h>
union stud
{
    int id;
    int age;
    char name[30];
    double d;
    
}s;
void main()
{
    printf("\nsize of the union is : %d \n", sizeof(s));
}