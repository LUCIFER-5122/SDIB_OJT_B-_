# include<stdio.h>
void main()
{
     unsigned char data = 100;
     data = (((data & 0x0F)<<4) | ((data & 0xF0)>>4));
     printf("data:%u\n", data);
}