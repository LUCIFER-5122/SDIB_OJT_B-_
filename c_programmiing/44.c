#include <stdio.h>
#include "main.h"

void palindrome() 
{
    int n,num, rev = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    n=num;
    while (n != 0) 
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (num == rev) 
    {
        printf("%d is a PALINDROME.\n", num);
    } 
    else 
    {
        printf("%d is NOT a PLAINDROME.\n", num);
    }
}
