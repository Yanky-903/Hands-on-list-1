
/*
========================================================================================================
Name : Q32a.c
Author : Yashraj Singh Chauhan
Description : Write a program to implement semaphore to protect any critical section.
		a. Rewrite the ticket number creation program using semaphore.
Date: 12 Sept, 2024.
========================================================================================================
*/
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

int NUM_THREADS=3;

int ticket_number = 0;

sem_t semaphore;

void* generate_ticket(int tid) {

    printf("Thread %d is waiting to generate a ticket.\n", tid);
    
    sem_wait(&semaphore);

    ticket_number++;
    printf("Thread %d generated ticket number: %d\n", tid, ticket_number);

    sleep(1);

    sem_post(&semaphore);

    return NULL;
}

int main() {
    
    sem_init(&semaphore, 0, 1);

    pthread_t threads[NUM_THREADS];

    for (long i = 0; i < NUM_THREADS; i++) {
        pthread_create(&threads[i], NULL, generate_ticket, (void*)i);
    }

    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }
    
    sem_destroy(&semaphore);

    return 0;
}
/*
Output:
Thread 0 is waiting to generate a ticket.
Thread 0 generated ticket number: 1
Thread 2 is waiting to generate a ticket.
Thread 1 is waiting to generate a ticket.
Thread 2 generated ticket number: 2
Thread 1 generated ticket number: 3
*/
