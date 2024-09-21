/*
========================================================================================================
Name : Q23.c
Author : Yashraj Singh Chauhan
Description : Write a program to print the maximum number of files that can be opened within a process and size of a pipe (circular buffer).
Date: 12 Sept, 2024.
========================================================================================================
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <fcntl.h>

int main(){
    int PIPE_BUF, OPEN_MAX;
    
    PIPE_BUF = pathconf(".", _PC_PIPE_BUF);
    OPEN_MAX = sysconf(_SC_OPEN_MAX);

    printf("SIze of pipe is = %d\nMax number of files that can be opened are = %d\n", PIPE_BUF, OPEN_MAX);
    
    return(0);
}

/*
Output:
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ gcc Q23.c
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ ./a.out
SIze of pipe is = 4096
Max number of files that can be opened are = 1024
*/
