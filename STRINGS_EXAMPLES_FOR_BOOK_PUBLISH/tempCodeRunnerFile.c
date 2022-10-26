#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    char *str_array[6];
    char array_i[100];
    int i, j;
    printf("Enter 6 strings:\n");
    for(i=0;i<6;i++)    
    {
        scanf("%s", array_i);
        str_array[i]= (char*)malloc(strlen(array_i)*sizeof(char));
        strcpy(str_array[i],array_i);

    }
    printf("Your strings were:");
    for(j=0;j<6;j++)
    {

        printf("%s\n", str_array[j]);
 
    }
}
