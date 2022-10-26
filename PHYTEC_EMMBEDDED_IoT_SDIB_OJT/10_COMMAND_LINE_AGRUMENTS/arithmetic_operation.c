#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[])
{
    int i=0,r=0,r1=1,n;
    if(strcmp(argv[1],"a")==0)
    {
        for(i=2;i<argc;i++)
        {
            sscanf(argv[i],"%d",&n);
            r=r+n;
        }
        printf("ADDITION :%d",r);
    }
    else if(strcmp(argv[1], "s")==0)
    {
        for(i=2;i<argc;i++)
        {
            sscanf(argv[i],"%d",&n);
            r=r-n;
        }
        printf("SUBTRACTION :%d",r);
    }
    else if(strcmp(argv[1],"m")==0)
    {
        for(i=2;i<argc;i++)
        {
            sscanf(argv[i],"%d",&n);
            r1=r1*n;
        }
        printf("MULTIPLICATION :%d",r1);
    }
    else if(strcmp(argv[1], "d")==0)
    {
        for(i=2;i<argc;i++)
        {
            sscanf(argv[i],"%d",&n);
            r1=r1/n;
        }
        printf("DIVISION :%d",r1);
    }

    
}