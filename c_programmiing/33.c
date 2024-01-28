#include <stdio.h>
#include "main.h"

void patt3() 
{
    int rowcount=5, acount;
    while(rowcount > 0)
    {
        for(acount=1; acount<=rowcount; acount++)
        {
            printf("A");
        }
        rowcount--;
        printf("\n");  
    }
}
