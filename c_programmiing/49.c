#include <stdio.h>
#include <string.h>
#include "main.h"

int hextodeci() 
{
    char hex[20];
    printf("Enter a hexadecimal number : ");
    scanf("%s", hex);
    int decimal = 0, base = 1, length, i;
    length = strlen(hex);
    for (i = length - 1; i >= 0; i--) 
    {
        int digit;
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            digit = hex[i] - '0';
        } 
        else if (hex[i] >= 'A' && hex[i] <= 'F') 
        {
            digit = hex[i] - 'A' + 10;
        } 
        else if (hex[i] >= 'a' && hex[i] <= 'f') 
        {
            digit = hex[i] - 'a' + 10;
        } 
        else
        {
            printf("Invalid hex character: %c\n", hex[i]);
            return -1;        
        }
        decimal += digit * base;
        base *= 16;
    }
    printf("Decimal equivalent: %d\n", decimal);
    return decimal;
}
