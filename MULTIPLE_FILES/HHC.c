#include<stdio.h>
#include"HHC.h"
void main()
{
    printf("estren ELECTRICITY bill\n");
    lcd_init();
    gsm_init();
    gps_init();
    keypad_init();
    DS1307_init();
    At24_init();
    printer_init();
    printf("\n");

}