#include <stdio.h>
#include "main.h"

void kircheck() 
{
    int current[6];
    int enter, exit;
    for (int i = 0; i < 6; ++i) 
    {
        printf("Enter current value i is %d : ", i+1);
        scanf("%d", &current[i]);
    }
   enter= current[0]+current[1]+current[3]+current[4];
   exit= current[2]+current[5];
   if(enter == exit)
   {
       printf("Kirchoffs Law SATISFIED");
   }
   else
   {
       printf("Kirchoffs Law NOT SATISFIED");
   }
}
