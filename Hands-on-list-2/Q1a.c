/*
========================================================================================================
Name : Q1.a
Author : Yashraj Singh Chauhan
Description : Write a separate program (for each time domain) to set a interval timer in 10sec and 10micro second
 		a. ITIMER_REAL
Date: 12 Sept, 2024.
========================================================================================================
*/
#include<stdio.h>
#include <sys/time.h>
#include<signal.h>
#include <unistd.h>

void alarm_handler(int sig) {
    printf("ITIMER_REAL\n");
}

int main(){
    struct itimerval timer;
    
    signal(SIGALRM, alarm_handler);
    
    timer.it_value.tv_sec = 10;
    timer.it_value.tv_usec = 10;
    
    timer.it_interval.tv_sec = 10;
    timer.it_interval.tv_usec = 10;
    
    setitimer(ITIMER_REAL, &timer, NULL);
    while(1){
           pause();
    }
    return 0;
}

/*
Output:
ITIMER_REAL was displayed after every 10 seconds
*/
