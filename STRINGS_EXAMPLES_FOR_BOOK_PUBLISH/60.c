// Compare two strings whether they are equal or not without using any library functions //
 
 #include<stdio.h>
void main()
{
    char str1[25],str2[25];
    int i=0;
    int equal=1;
    printf("Enter first String(<25):");
    scanf("%s",str1);
    printf("Enter second String(<25):");
    scanf("%s",str2);

//comparision starts here...

    while(str1[i])//untill '\0'
    {
        if(str1[i++]!=str2[i])
        { 
            equal=0;
            break;
        }
    }
    if(equal)
        printf("\nTwo strings are equal");
    else
        printf("\nTwo strings are not equal");
} 