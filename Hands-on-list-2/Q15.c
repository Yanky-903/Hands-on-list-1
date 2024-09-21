/*
========================================================================================================
Name : Q15.c
Author : Yashraj Singh Chauhan
Description : Write a simple program to send some data from parent to the child process.
Date: 12 Sept, 2024.
========================================================================================================
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
	int fd[2];
	pipe(fd);

	if(!fork()){
        printf("In child process\n");
		int c_value = 100;
		close(fd[0]);
        printf("Writing to pipe in child process\n");
		write(fd[1], &c_value, sizeof(int));
	}
	
	else{
        printf("In parent process\n");
		int p_value;
		close(fd[1]);
		read(fd[0], &p_value, sizeof(int));
		printf("Data from child in parent process: %d\n", p_value);
	}

	return(0);
}

/*
Output:
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ gcc Q15.c
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ ./a.out
In parent process
In child process
Writing to pipe in child process
Data from child in parent process: 100
*/
