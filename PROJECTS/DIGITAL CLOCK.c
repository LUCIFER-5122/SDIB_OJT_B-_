#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
    int h,m,s;
    int d=1000; //delay of 1000 milliseconds
    printf("SET TIME :\n");
    scanf("%d %d %d",&h,&m,&s);
    if(h>12 || m>60 || s>60)
    {
        printf("ERROR\n");
        exit(0);
    }
    while(1) //infinty loop for repeating itself
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
           h=1;
        }
        printf("\n CLOCK :");
        printf("\n %02d:%02d:%02d",h,m,s); // for printing in the form of 00:00:00 format
        Sleep(d);
        system("cls");
        
    }
        getch();
}