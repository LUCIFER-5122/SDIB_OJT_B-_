#include<stdio.h>
enum Xenum{
    C, CPP, java
};
int main()
{
    enum Xenum var;
    printf("%d",sizeof(var));
}