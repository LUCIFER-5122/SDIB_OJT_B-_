#include<stdio.h>
void operation(char,int,int,int(*p)(int,int));
int add( int x, int y)
{
    
    return x+y;
}

int sub( int x, int y)
{
  
    return x-y;
}

int mul( int x, int y)
{
  
    return x*y;
}

int div( int x, int y)
{
    
    return y/x;
}
void operation(char ch, int x, int y, int(*p)(int,int))
{
    int z;
    z=p(x,y);
    printf(" result is :%d\n",z);
}

int main()
{
    int a=10,b=20;
    char ch;
    printf("Enter the sign that u want to perform\nadd(+)\nsub(-)\nmul(*)\ndiv(/)\n: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+' :
                    operation(ch,a,b,add);
                    break;
        case '-' :
                    operation(ch,a,b,sub);
                    break;
        case '*' :
                    operation(ch,a,b,mul);
                    break;
        case '/' :
                   operation(ch,a,b,div);
                    break;
        default :
                printf("OOppps!!! INVALID CHOICE");

    }
}
