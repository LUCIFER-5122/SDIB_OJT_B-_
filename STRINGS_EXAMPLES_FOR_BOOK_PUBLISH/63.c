// Program copies a string to another string //

#include<string.h>
#include<stdio.h>
void main()
{
    char str1[25]="phyetch india",str2[25];
    int i=0;

    //copying from str1 to str2

    while(str1[i])      //until '\0'
    {
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';//making end of the string
    printf("\nstr1=%s",str1);
    printf("\nstr2=%s",str2);
} 