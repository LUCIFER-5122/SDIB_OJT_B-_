#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
//#include<error.h>
#include<windows.h>
void main()
{
    int fd,c;
    fd=open("COM4",O_RDONLY);
    printf("fd value is : %d\n",fd);
    if(fd == -1)
    {
        perror("Device not found");
        exit(1);
    }
    printf("\nFile created successfully");
    while((c=getchar())!=EOF)
    putchar(c);
}