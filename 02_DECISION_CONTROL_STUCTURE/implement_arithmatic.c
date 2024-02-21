#include<stdio.h>
void main()
{
    int a,b,choice;
    main_menu :
    
    printf("1. ADDITION\n");
    printf("2. SUBTRACTION\n");
    printf("3. DIVISION\n");
    printf("4. MULTIPLICATION\n");
    printf("Enter the choice:\n");
    scanf("%d",&choice);
    printf("Enter the two numbers: \n ");
 scanf("%d %d", &a,&b);
    switch (choice)
    {
    case 1:
  printf("ADDITION: %d \n",a+b);
    break;

    case 2:
    if(a>b)
  printf("SUBTRACTION: %d\n",a-b);
    else 
    printf("SUBTRACTION: %d\n",b-a);
   break;
    
    case 3:
    printf("DIVISION: %d\n",a/b);
    break;
    
    case 4:
    printf("MULTIPLICATION: %d \n",a*b);
    break;
    
    default:
    printf("INVALID CHOICE Re-Enter:\n",choice);
    goto main_menu ;
    
  } 
}