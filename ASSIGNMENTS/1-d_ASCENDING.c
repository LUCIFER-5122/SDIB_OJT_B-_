#include<stdio.h>
int main()
{
    int i,j,b,a[10],num;
    printf(" Enter the value of N : \n");
    scanf("%d",&num);
    printf(" Enter the NUMBERS : \n");
    for(i=0; i<num; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<num; i++)
    {
        for(j=i+1; j<num; j++)
        {
            if(a[i] > a[j])
            {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
    printf("ASCENDING ORDER ARRAY IS: \n");
    for(i=0; i<num; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}