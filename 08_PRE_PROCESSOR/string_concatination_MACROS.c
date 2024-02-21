#include<stdio.h>
#include<windows.h>
#define String_concat(r,s1,s2) strcat(r,#s1); strcat(r,#s2); // convertying MACRO agruments
void main()
{
    char name[30];
    String_concat(name,Rugged,Solutions);
    printf("NAme of Organisation is %s\n",name);
}