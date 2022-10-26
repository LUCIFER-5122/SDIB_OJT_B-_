#include<stdio.h>
void main()
{
    int p[5][5];
    int i,j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&p[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%d\t",*(*(p+i)+j));
        }
        printf("\n");
    }
}
