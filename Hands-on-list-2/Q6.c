/*
========================================================================================================
Name : Q6.c
Author : Yashraj Singh Chauhan
Description : Write a simple program to create three threads.
Date: 12 Sept, 2024.
========================================================================================================
*/
#include <stdio.h>
#include <string.h>
#include <pthread.h>

void* foo(void* p){

    int threadID = *((int*)p);
    printf("Thread %d is executing\n", threadID);
    return NULL;
}

int main(void){
  // Declare variable for thread's ID:
  pthread_t id[3];

  int id1 = 1;
  int id2 = 2;
  int id3 = 3;
  
  pthread_create(&id[0], NULL, foo, &id1);
  pthread_create(&id[1], NULL, foo, &id2); 
  pthread_create(&id[2], NULL, foo, &id3);
  
  pthread_join(id[0], NULL);
  pthread_join(id[1], NULL);
  pthread_join(id[3], NULL);
  
  return 0;
}

/*
Output:
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ gcc Q6.c
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ ./a.out
Thread 1 is executing
Thread 2 is executing
Thread 3 is executing
*/


