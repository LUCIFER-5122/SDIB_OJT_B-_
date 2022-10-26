// C program to illustrate strings to find the length of the string //

#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "SUBHAM";
    printf("%s\n", str);
    int len = 0;
    len = strlen(str);
    printf("Length of string str is %d", len);
   return 0;
}