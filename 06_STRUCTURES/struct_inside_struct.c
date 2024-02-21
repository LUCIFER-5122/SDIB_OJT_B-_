#include<stdio.h>
#include<string.h>
struct arith 
{
    int a,b,c;
};
struct arith add(struct arith A) 
{
   A.c=A.a + A.b;
   printf("A.c is : %d",A.c);
}
int main()
{
    struct arith A;
    int c;
    /*printf("Enter the two number : ");
    scanf("%d %d", &A.a,&A.b);*/
    A.a=10;A.b=20;
     A = add(A);
    return 0;
}