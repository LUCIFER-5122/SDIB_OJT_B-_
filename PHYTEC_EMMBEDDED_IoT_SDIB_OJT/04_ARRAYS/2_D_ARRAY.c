#include<stdio.h>
void main()
{
    int a[2][2],i,j;
    printf("Elemnets : ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("ARray Elements in matrix form is : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
}