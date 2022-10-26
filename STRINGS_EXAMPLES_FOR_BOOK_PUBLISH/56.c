// Finds length of a string without using any library function //

#include<stdio.h>
void main()
{
    char str[80];
     int len=0,i;
    printf("\nenter a string: ");
    scanf(" %s",str);
    printf("\n%s",str);
    i=0;
    while(str[i])
    {
        ++len;
        i++;
    }
    printf("\nstring len=%d",len);
}
