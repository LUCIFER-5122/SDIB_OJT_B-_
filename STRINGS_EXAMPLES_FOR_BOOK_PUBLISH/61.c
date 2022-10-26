// Programs removes extra spaces between words //

#include<string.h>
#include<stdio.h>
#define LINE 80
void main()
{
    char str[LINE];
    int i=0,j;
    printf("\nEnter a sentence: ");
    fgets(str,80,stdin);
    printf("\n before spaced string : %s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ' && str[i+1]==' ')
        {
            for(j=i;str[j]!='\0';j++)
                str[j]=str[j+1];
                i--;
        }
    }
    printf("\n after spaced string : %s\n",str);
} 