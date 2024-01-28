#include <stdio.h>
#include "main.h"

void billing() 
{
    int i = 0, n, total = 0;
    printf("Enter the number of items : ");
    scanf("%d", &n);
    if (n > 0 && n <= 100) 
    {
        int prices[100], quantities[100];
        for (i = 0; i < n; i++) 
        {
            printf("Enter price for Item %d : ", i + 1);
            scanf("%d", &prices[i]);
            printf("Enter quantity for Item %d : ", i + 1);
            scanf("%d", &quantities[i]);
            int itemPrice = prices[i] * quantities[i];
            total += itemPrice;
            printf("\nShopping List : ");
            printf("\nItem %d - Price: %d, Quantity: %d, Total: %d\n", i + 1, prices[i], quantities[i], itemPrice);
        }
        printf("\nTotal Cost: %d\n", total);
    } 
    else 
    { 
        printf("Invalid number of items. Please enter a value between 1 and 100.\n");
    }
}
