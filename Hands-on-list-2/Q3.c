/*
========================================================================================================
Name : Q3.c
Author : Yashraj Singh Chauhan
Description : Write a program to set (any one) system resource limit. Use setrlimit system call.
Date: 12 Sept, 2024.
========================================================================================================
*/
#include <stdio.h>
#include <sys/resource.h>
#include <unistd.h>

int main(){

     struct rlimit limit;

     limit.rlim_cur = 5;
     limit.rlim_max = 10;

     int a = setrlimit(RLIMIT_CPU, &limit);

     if(a==0){
                printf("New CPU time is :\n Soft limit = %ld seconds, Hard limit = %ld seconds\n", limit.rlim_cur, limit.rlim_max);
      }
      for(;;)

return 0;
}

/*Output:
New CPU time is :
 Soft limit = 5 seconds, Hard limit = 10 seconds
*/
