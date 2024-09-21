/*
========================================================================================================
Name : Q12.c
Author : Yashraj Singh Chauhan
Description : Write a program to create an orphan process. Use kill system call to send SIGKILL signal to the parent process from the child process.
Date: 12 Sept, 2024.
========================================================================================================
*/
#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int main()
{
    
    if (!fork())
    {
        sleep(5);
        printf("Child process pid: %d\n", getpid());
        kill(getppid(), SIGKILL);
        printf("Parent process killed\n");
        sleep(10);
    }
    else
    {
        printf("Process id of Parent: %d\n", getpid());
        sleep(15);
    }

    return 0;
}

/*
Output:
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ gcc Q12.c
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ ./a.out
Process id of Parent: 8560
Child process pid: 8561
Parent process killed
Killed
*/
