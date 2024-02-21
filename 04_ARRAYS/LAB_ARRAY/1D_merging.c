#include<stdio.h>
int main()
{
    int a[2][2],b[2][3],c[3][3],i,j;
    printf("Enter the elments in A :\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
            scanf("%d",a[i][j]);
        }
        printf("Enter the elements in B:\n");
        for(i=0;i<2;i++)
            for(j=0;j<3;j++)
        {
            scanf("%d",b[i][j]);
        }
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
            {
                c[i][j]=a[i][j];
            }
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
            {
              c[i+3][j+3] = b[i][j];
            }
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
            {
              printf(" merged matrix is : %d",c[i][j]);
            }
            printf("\n");
            return 0;
}