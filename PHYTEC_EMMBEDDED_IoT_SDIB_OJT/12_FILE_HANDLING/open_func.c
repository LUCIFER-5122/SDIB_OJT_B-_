#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
void main()
{
    int fd;
    fd=open("hello.txt",O_WRONLY|O_CREAT);
    if(fd == -1)
    {
        printf("\nFILE NOT CREATED SUCCESFULLY\n");
        return;
    }
    printf("FILE CREATED SUCCESFULLY\n");
    printf("value of fd is: %d\n",fd);
    
}