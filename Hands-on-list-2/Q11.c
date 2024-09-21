/*
========================================================================================================
Name : Q11.c
Author : Yashraj Singh Chauhan
Description : Write a program to ignore a SIGINT signal then reset the default action of the SIGINT signal - use sigaction system call.
Date: 12 Sept, 2024.
========================================================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <bits/sigaction.h>

int main(){
    struct sigaction sa;

    sa.sa_handler = SIG_IGN;
    printf("Ignoring SIGINT for 10 seconds\n");
    sigaction(SIGINT,&sa,NULL);
    sleep(10);
    
    sa.sa_handler = SIG_DFL;
    printf("\nDefault of SIGINT\n");
    sigaction(SIGINT,&sa,NULL);
    
    for(;;){};
    
    return(0);
}

/*
Output:
Ignoring SIGINT for 10 seconds
^C
Default of SIGINT
^C
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ 
*/
