
/*
========================================================================================================
Name : Q7.c
Author : Yashraj Singh Chauhan
Description : Write a simple program to print the created thread ids.
Date: 12 Sept, 2024.
========================================================================================================
*/
#include <stdio.h>
#include <string.h>
#include <pthread.h>

void* foo(void* p){

    int threadID = *((int*)p);
    printf("Thread %ld is executing\n", pthread_self());
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
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ gcc Q7.c
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ ./a.out
Thread 140227400169152 is executing
Thread 140227383383744 is executing
Thread 140227391776448 is executing
*/
