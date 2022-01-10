//writer function

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include "ioctl.h"

int main()
{
    int fd;
    int status;
    char ubuff[50]="HEY ITS ME WRITER WORKING FINE..\n";
    
    fd=open("/dev/question_1",O_RDWR);
    if(fd<0)
    {
        printf("ERROR IN OPRNING\n");
        exit(1);
    }
    write(fd,ubuff,sizeof(ubuff));
    ioctl(fd,WRITE_I,&ubuff);
   // ioctl(fd,WRITE_I,&status);
    printf("STATUS :%d\n",(int *)ubuff);
    close(fd);
    
}