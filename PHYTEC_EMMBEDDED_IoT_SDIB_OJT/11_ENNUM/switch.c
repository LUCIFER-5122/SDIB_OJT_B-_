#include<stdio.h>
#include<stdlib.h>
enum state {OFF,ON};
void main()
{
    enum state n;
    printf("\nEnter the value 1 for ON and 0 for OFF\n");
    scanf("%d",&n);
    switch(n)
    {
        case ON : printf("pin is -> HIGH"); break;
        case OFF : printf("pin is -> LOW"); break;
        default : exit(0);
    }
}
