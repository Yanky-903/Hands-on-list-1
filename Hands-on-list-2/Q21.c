
/*
========================================================================================================
Name : Q21.c
Author : Yashraj Singh Chauhan
Description : Write two programs so that both can communicate by FIFO - Use two way communications.
Date: 12 Sept, 2024.
========================================================================================================
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <fcntl.h>

int main()
{
    int a = 0;
    printf("1.\t read/write (program 1)\n2.\t read/write (program 2)\n\t Enter choice: ");
    scanf("%d", &a);
    int fd1 = -1;
    int fd2 = -1;
    char buf[100];

    switch (a)
    {
    case 1:
        fd1 = open("Fifo1", O_WRONLY, 0666);
        write(fd1, "Hello from 1 to 2\n", sizeof("Hello from 1 to 2\n"));
        close(fd1);

        fd2 = open("Fifo2", O_RDONLY, 0666);
        read(fd2, buf, sizeof(buf));
        printf("Message from 2 to 1: %s", buf);

        close(fd2);
        break;
    case 2:
        fd2 = open("Fifo1", O_RDONLY, 0666);
        read(fd2, buf, sizeof(buf));
        printf("Message from writer: %s", buf);
        close(fd2);

        fd1 = open("Fifo2", O_WRONLY, 0666);
        write(fd1, "Hello from 2 to 1\n", sizeof("Hello from 2 to 1\n"));
        close(fd1);

        break;
    default:
        printf("Invalid choice\n");
        break;
    }

    return (0);
}
