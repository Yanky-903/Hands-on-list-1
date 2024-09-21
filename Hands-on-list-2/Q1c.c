
/*
========================================================================================================
Name : Q1.c
Author : Yashraj Singh Chauhan
Description : Write a separate program (for each time domain) to set a interval timer in 10sec and 10micro second
 		c. ITIMER_PROF
Date: 12 Sept, 2024.
========================================================================================================
*/
#include<stdio.h>
#include <sys/time.h>
#include<signal.h>
#include <unistd.h>

void prof_alarm_handler(int sig) {
    printf("ITIMER_PROF alarm\n");
}


int main(){
    struct itimerval timer;
    
    signal(SIGPROF, prof_alarm_handler);
    
    timer.it_value.tv_sec = 10;
    timer.it_value.tv_usec = 10;
    
    timer.it_interval.tv_sec = 10;
    timer.it_interval.tv_usec = 10;
    
    setitimer(ITIMER_PROF, &timer, NULL);
    while(1){
           for(int i = 0;i<1000;i++);
    }
    return 0;
}
/*
Output:
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ ./a.out
ITIMER_PROF alarm
ITIMER_PROF alarm
*/
