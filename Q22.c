/*
============================================================================
Name : Q22.c
Author : Yashraj Singh Chauhan
Description :Write a program, open a file, call fork, and then write to the file by both the child as well as the
             parent processes. Check output of the file.
Date: 28th Aug, 2024.
============================================================================
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
    
    fork();
    int a = open(argv[1], O_WRONLY | O_APPEND | O_CREAT,0777);
    char arr[32];
    sprintf(arr, "written by process %d \n", getpid());
    write(a, &arr, sizeof(arr));
}
/*
Output:
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-1$ cat Q22Output.txt
written by process 4643 
Іgwritten by process 4642 
Іgwritten by process 4685 
��Cwritten by process 4686 
��Cwritten by process 80831 
�Fwritten by process 80832 
*/
