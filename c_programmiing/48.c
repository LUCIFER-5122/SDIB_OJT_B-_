#include <stdio.h>
#include "main.h"

int isPrime(int num) 
{
    if (num <= 1) 
    {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) {
            return 0;  
        }
    }
    return 1;  
}

void printPrimes(int n) 
{
    printf("Prime numbers up to %d are : ", n);
    for (int i = 2; i <= n; i++) 
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int nprime()
 {
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printPrimes(n);
}
