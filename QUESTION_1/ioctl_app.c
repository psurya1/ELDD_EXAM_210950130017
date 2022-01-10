//ioctl user program:

#include<stdio.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include<stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include "ioctl.h"


int main()
{
    int fd;
    int status;
    fd=open("/dev/question_1",O_RDWR);
    if(fd<0)
    {
        printf("ERROR IN OPENING FILE.\n");
        exit(1);
    }
    ioctl(fd,GET_STATUS,&status);
    printf("STATUS OF IOCTL : %d\n",status);
    close(fd);
}