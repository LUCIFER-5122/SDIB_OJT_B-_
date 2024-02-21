#include<stdio.h>
int main()
{
    int p;
    float i,j;
    char ch;
    banking:
    printf("\n_*_*_*_*_WELCOME_*_*_*_*_ \n");
    printf("\nPLEASE Enter your PIN : ");
    scanf("%d", &p);
    if( p == 12345)
    {
        printf("\n _*_*_*_*_WELCOME_*_*_*_*_ \n\n");
        printf("Enter the INTIAL AMOUNT: ");
        scanf("%f",&i);
        printf("The INTIAL AMOUNT is: %.5f\n",i);
        printf("\n_*_*_*_Enter_*_*_*_\n\nC for CREDIT\n\nD for DEBIT\n\nB for BALANCE\n\nOPTION PLEASE : ");
        scanf("\n%c",&ch);
        switch(ch)
        {
            case 'C'  :
                printf("\nEnter the CREDIT AMOUNT: ");
                scanf("%f",&j);
                i = i+j;
                printf("\nYOUR NEW AMOUNT IS : %.5f\n\n",i);
                break;
            case 'D'  :
                printf("\nEnter the DEBIT AMOUNT: ");
                scanf("%f",&j);
                if(i >= j)
                {
                    i = i-j;
                    printf("\nYOUR REMAINING AMOUNT IS : %.5f\n\n",i);
                }
                else
                {
                    printf("\nOoopsss!!! INSUFFICIENT AMOUNT AVAILABLE :(\n\n");
                }
                break;
            case 'B'  :
                printf("\nAMOUNT in your ACCOUNT is : %.5f\n\n",i);
                break;
            default :
                printf("\nPLEASE CHOOSE THE CORRECT OPTION :)\n");
        }
        printf("\nTHANKS FOR USING OUR SERVICE , PLEASE VISIT AGAIN :)\n");
        }
    else 
    {
        printf("\nOOpps !!! PLEASE ENTER CORRECT PIN\n");
    }
    goto banking;
    return 0;
}