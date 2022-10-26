#include<stdio.h>
#include<string.h>
void main()
{
    char c[] = "PASS2016";
    char *p =c;
    printf("%c,%c\n", *p,*(p+p[3]-p[1])); // o/p= P ,
}