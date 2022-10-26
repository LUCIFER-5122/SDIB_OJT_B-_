#include<stdio.h>
enum num {autumn JAN FEB MAR APR MAY JUN JUL AUG SEPT OCCT NOV DEC}
void main()
{
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case jan : printf("JANUARY %d",jan);break;
        case feb : printf("FEBRUARY %d",feb);break;
        case mar : printf("MARCH %d",mar);break;
        case apr : printf("APRIL %d",apr);break;
        case may : printf("MAY %d",may);break;
        case jun : printf("JUNE %d",jun);break;
        case jul : printf("JULY %d",jul);break;
        case aug : printf("AUGUST %d",aug);break;
        case sept : printf("SEPTEMBER %d",sept);break;
        case oct : printf("OCTOBER %d",oct);break;
        case nov : printf("NOVEMBER %d",nov);break;
        case dec : printf("DECEMBER %d",dec);break;
        default : printf("AUTUMN %d",autumn);break;
    }
    
}