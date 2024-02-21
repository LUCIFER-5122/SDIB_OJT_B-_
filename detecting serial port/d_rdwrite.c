#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
//#include<error.h>
#include<windows.h>
void main()
{
    int fd,c,n=0,r=0;
    char *buf = "HelloWorld";
    char data[10];
    fd=open("COM4",O_RDONLY|O_WRONLY);
    printf("fd value is : %d\n",fd);
    if(fd == -1)
    {
        perror("Device not found");
        exit(1);
    }
    
    n=write(fd,"HelloWorld",10);
    printf("No. of bytes written is: %d\n",n);
    
    r=read(fd,buf,10);
    printf("No. of bytes readed is: %d\n",r);

    printf("%s",buf);
    printf("\nFile created successfully");
}