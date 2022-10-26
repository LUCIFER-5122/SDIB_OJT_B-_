#include<stdio.h>
#include<strings.h>
void main()
{
    char str1[20] = "Hello", str2[20]= " World";
    printf("%s\n",strcpy(str2,strcat(str1,str2)));
}