#include<stdio.h>
void main(){
    int a = 50,b=5;
    int r = 0;
    r = a&b;
    printf("& : %d\n",r);
    r=a^b;
    printf("^ : %d\n",r);
    r=~a;
    printf("~ : %d\n",r);
    r=a<<2;
    printf("<< : %d\n",r);
    r=a>>2;
    printf(">> : %d\n",r);
}