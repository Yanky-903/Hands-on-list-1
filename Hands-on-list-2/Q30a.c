
/*
========================================================================================================
Name : Q30a.c
Author : Prajyot Shende
Description : Write a program to create a shared memory.
		a. Write some data to the shared memory
Date: 12 Sept, 2024.
========================================================================================================
*/
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>

int main()
{
    key_t key = ftok(".", 'a');
    int shmid = shmget(key, 1024, IPC_CREAT | 0666);

    char *data = shmat(shmid, (void *)0, 0);
    printf("Enter text to put in shared memory: ");
    scanf("%[^\n]s", data);
    
    printf("Write successful\n");
    
    return(0);
}
/*
Output:
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ gcc Q30a.c
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ ./a.out
Enter text to put in shared memory: Yash 
Write successful
*/
