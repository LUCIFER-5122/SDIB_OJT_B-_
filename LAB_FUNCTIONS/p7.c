#include<stdio.h>
int greaterno(int,int,int);
int main()
{
    int a=10, b=20, c=30, gret ;
    printf("\nThe greater no is : %d\n", gret) ;
    int greaterno(g);
}
int greaterno(int a,int b,int c)
{
    int g;
     g = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
      printf("\nThe greater no is : %d\n", g) ;
      return g;
}