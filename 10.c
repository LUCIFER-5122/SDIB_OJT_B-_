#include <stdio.h>
#include "main.h"

void xval() {
    int v, i, r1, r2, r3;
    float x; 
    printf("Enter the values of v, i, r1, r2, r3 :\n");
    scanf("%d%d%d%d%d", &v, &i, &r1, &r2, &r3);
    x = (float)(r2 * r3) / r1 ;
    printf("Value of x is: %.2f\n", x);
}
