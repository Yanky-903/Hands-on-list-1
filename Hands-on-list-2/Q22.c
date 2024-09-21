
/*
========================================================================================================
Name : Q22.c
Author : Yashraj Singh Chauhan
Description : Write a program to wait for data to be written into FIFO within 10 seconds, use select system call with FIFO.
Date: 12 Sept, 2024.
========================================================================================================
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/time.h>

int main()
{
    fd_set rfds;
    struct timeval tv;
    int retval;

    int fd;

    printf("10 second timer will start when writer is available.\n");

    fd = open("myFifo", O_RDONLY, 0666);
    printf("Starting 10 second timer.\n");

    FD_ZERO(&rfds);
    FD_SET(fd, &rfds);

    tv.tv_sec = 10;
    tv.tv_usec = 0;

    retval = select(fd + 1, &rfds, NULL, NULL, &tv);

    if (retval){
        printf("Data is available now.\n");
        char buf[100];
        read(fd, buf, sizeof(buf));
        printf("Message from writer: %s", buf);
    }
    else{
        printf("No data within ten seconds.\n");
    }

    close(fd);
    exit(EXIT_SUCCESS);

    return (0);
}
