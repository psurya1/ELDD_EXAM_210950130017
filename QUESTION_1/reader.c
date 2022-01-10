//Readerfunction

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
    
    char kbuff[50];
    char sbuff[50];
    fd=open("/dev/question_1",O_RDWR);
    if(fd<0)
    {
        printf("ERROR IN OPRNING\n");
        exit(1);
    }
    
    read(fd,kbuff,sizeof(kbuff));
    printf("OUTPUT ..%s..\n",kbuff);
    close(fd);
}