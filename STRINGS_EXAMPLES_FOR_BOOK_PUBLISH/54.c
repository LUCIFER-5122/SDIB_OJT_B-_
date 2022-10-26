// C program to illustrate how to pass string to functions //

#include <stdio.h>
  void printStr(char str[]) 
  { 
    printf("String is : %s", str); 
}
int main()
{
    char str[] = "PHYTECH_INDIA";
    printStr(str);
    return 0;
} 