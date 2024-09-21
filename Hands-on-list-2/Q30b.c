
/*
========================================================================================================
Name : Q30b.c
Author : Yashraj Singh Chauhan
Description : Write a program to create a shared memory.
		b. Attach with O_RDONLY and check whether you are able to overwrite.
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
    int shmid = shmget(key, 1024, 0);

    char *data = shmat(shmid, (void *)0, SHM_RDONLY);
    printf("Enter text to put in shared memory: ");
    scanf("%[^\n]s", data);

    printf("Write successful\n");
    shmdt(data);
    return (0);
}
/*
Output:
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ gcc Q30b.c
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ ./a.out
Enter text to put in shared memory: Yash
Segmentation fault (core dumped)
*/
