/*
========================================================================================================
Name : Q9.c
Author : Yashraj Singh Chauhan
Description : Write a program to ignore a SIGINT signal then reset the default action of the SIGINT signal - Use signal system call.
Date: 12 Sept, 2024.
========================================================================================================
*/
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void sigintHandler(int signal) {
    printf("SIGINT is ignored for now...\n");
}

int main() {
    signal(SIGINT, SIG_IGN);
    printf("SIGINT is ignored. Please wait for 10 seconds \n");

    sleep(10);

    printf("Now resetting SIGINT. Press Ctrl+C to terminate.\n");
    signal(SIGINT, SIG_DFL);

    sleep(10);

    
    return 0;
}
/*
Output:
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ gcc Q9.c
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ ./a.out
SIGINT is ignored. Please wait for 10 seconds 
Now resetting SIGINT. Press Ctrl+C to terminate.
^C
*/

