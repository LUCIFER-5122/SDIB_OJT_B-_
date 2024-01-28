#include <stdio.h>
#include "main.h"

void decitohex() 
{
    int n, i, count = 0, hexadecimal[5], a;
    printf("Enter a decimal number : ");
    scanf("%d", &n);
    while (n != 0) 
    {
        a = n % 16;
        if (a < 10) 
        {
            hexadecimal[count++] = a + '0';
        } 
        else
        {
            hexadecimal[count++] = a - 10 + 'A';
        }
        n = n / 16;
    }
    printf("Hexadecimal equivalent : 0x");
    for (i = count - 1; i >= 0; i--) 
    {
        printf("%c", hexadecimal[i]);
    }
    printf("\n");
}
