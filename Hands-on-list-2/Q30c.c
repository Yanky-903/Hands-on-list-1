
/*
========================================================================================================
Name : Q30c.c
Author : Yashraj Singh Chauhan
Description : Write a program to create a shared memory.
		c. Detach the shared memory.
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
    printf("Detachment Successful\n");
    shmdt(data);

    return (0);
}
