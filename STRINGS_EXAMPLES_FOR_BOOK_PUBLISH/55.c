52. // C program to illustrate how to pass string to functions //

#include <stdio.h>
void main()
{
    char str[20] = "RADHE,RADHE";
    char* ptr = str;
    while (*ptr != '\0') 
    {
        printf("%c", *ptr);
        ptr++;
    }
}