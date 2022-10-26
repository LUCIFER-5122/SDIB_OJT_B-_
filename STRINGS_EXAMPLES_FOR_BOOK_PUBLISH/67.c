// Sort the names in a given list in ascending order //

#include<stdio.h>
#include<string.h>
void main()
{
    char names[10][20], t[20];
    int i=0,j=0,n;
    printf("Enter how many names:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter name %d: ",i+1);
        gets(names[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(names[i],names[j]) > 0)
                {
                    strcpy(t,names[i]);
                    strcpy(names[i],names[j]);
                    strcpy(names[j],t);
                }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",names[i]);
    }
}
