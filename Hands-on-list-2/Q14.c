/*
========================================================================================================
Name : Q14.c
Author : Yashraj Singh Chauhan
Description : Write a simple program to create a pipe, write to the pipe, read from pipe and display on the monitor.
Date: 12 Sept, 2024.
========================================================================================================
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
	int fd[2];
	
	pipe(fd);
	printf("pipe created with fd1: %d, fd2: %d\n", fd[0], fd[1]);

	char arr[10];
	

	write(fd[1], "YASHRAJ\n", sizeof("YASHRAJ\n"));
	read(fd[0], arr, sizeof(arr));

	printf("Array: %s", arr);

	getchar();

	return(0);
}
/*
Output:
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ ./a.out
pipe created with fd1: 3, fd2: 4
Array: YASHRAJ
*/
