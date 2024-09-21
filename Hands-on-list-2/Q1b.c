/*
========================================================================================================
Name : Q1.b
Author : Yashraj Singh CHauhan
Description : Write a separate program (for each time domain) to set a interval timer in 10sec and 10micro second
 		b. ITIMER_VIRTUAL
Date: 12 Sept, 2024.
========================================================================================================
*/
#include<stdio.h>
#include <sys/time.h>
#include<signal.h>
#include <unistd.h>

void virtual_alarm_handler(int sig) {
    printf("ITIMER_VIRTUAL alarm\n");
}


int main(){
    struct itimerval timer;
    
    signal(SIGVTALRM, virtual_alarm_handler);
    
    timer.it_value.tv_sec = 10;
    timer.it_value.tv_usec = 10;
    
    timer.it_interval.tv_sec = 10;
    timer.it_interval.tv_usec = 10;
    
    setitimer(ITIMER_VIRTUAL, &timer, NULL);
    while(1){
           for(int i = 0;i<1000;i++);
    }
    return 0;
}

/*
Output:
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ ./a.out
ITIMER_VIRTUAL alarm
ITIMER_VIRTUAL alarm
ITIMER_VIRTUAL alarm
*/
