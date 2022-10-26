// Print a string in reverse order as per word //

#include<stdio.h>
#include<string.h>
void main()
{
    char s1[50],t1[50],t2[50]="";
    int i=0,j=0;;
    printf("Enter a string:");
    gets(s1);
    strcat(s1," ");
    while(s1[i]!= '\0')
    {
        if(s1[i] == ' ')
        {
            t1[j++] = ' ';
            t1[j] = '\0';
            strcat(t1,t2);
            strcpy(t2,t1);
            j = 0;
        }
        else
            t1[j++] = s1[i];
        i++;
    }
    puts(t1);
}
