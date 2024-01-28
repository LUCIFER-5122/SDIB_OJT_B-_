#include <stdio.h>
#include "main.h"

void prime()
 {
    int num, isPrime = 1;
    printf("Enter a number above 2 : ");
    scanf("%d", &num);
    for (int i = 2; i <= num / 2; ++i) 
    {
    	 if (num % i == 0) 
    	 {
                isPrime = 0; 
                break;
         }
    }
    if (isPrime) 
    {
        printf("%d is a PRIME NUMBER.\n", num);
    } else {
        printf("%d is NOT a PRIME NUMBER.\n", num);
    }
}
