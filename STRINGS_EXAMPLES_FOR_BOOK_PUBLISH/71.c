#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char *str_array;
    char array[100];
    printf("Enter a string:\n");
    scanf("%s", array);
    str_array = (char*)malloc(strlen(array)*sizeof(char));
    strcpy(str_array,array);
    printf("The string you entered was: %s", str_array);
}
