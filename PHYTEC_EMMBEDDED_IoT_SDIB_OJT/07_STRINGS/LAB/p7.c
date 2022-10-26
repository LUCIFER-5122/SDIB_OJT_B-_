#include<stdio.h>
#include<string.h>
void main()
{
    static char s[25] = "The coicxcane man";
    int i=0;
    char ch;
    ch = s[++i];
    printf("%c",ch);
    ch = s[i++];
    printf("%c",ch);
    ch = ++i[s];
    printf("%c",ch);
    ch = ++i[s];
    printf("%c",ch);
}