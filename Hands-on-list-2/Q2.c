/*
========================================================================================================
Name : Q2.c
Author : Yashraj Singh Chauhan
Description : Write a program to print the system resource limits. Use getrlimit system call.
Date: 12 Sept, 2024.
========================================================================================================
*/

#include<stdio.h>
#include <sys/resource.h> 
#include <unistd.h>

void limit(int resource, const char *name) {
    struct rlimit limit;
    
    
    if (getrlimit(resource, &limit) == 0) {
        printf("%-20s:Min limit = %ld, Max limit = %ld\n", name, (long)limit.rlim_cur, (long)limit.rlim_max);
    } else {
        perror("getrlimit");
    }
}

int main(){
    
    limit(RLIMIT_CPU, "Time of CPU");
    limit(RLIMIT_FSIZE, "File size");
    limit(RLIMIT_DATA, "Data size");
    limit(RLIMIT_STACK, "Stack size");
    limit(RLIMIT_CORE, "Core file size");
    limit(RLIMIT_RSS, "Resident set size");
    limit(RLIMIT_NPROC, "Processes");
    limit(RLIMIT_NOFILE, "Open files");
   
    return 0;
}

/*
Output:
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ gcc Q2.c
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ ./a.out
Time of CPU         :Min limit = -1, Max limit = -1
File size           :Min limit = -1, Max limit = -1
Data size           :Min limit = -1, Max limit = -1
Stack size          :Min limit = 8388608, Max limit = -1
Core file size      :Min limit = 0, Max limit = -1
Resident set size   :Min limit = -1, Max limit = -1
Processes           :Min limit = 26687, Max limit = 26687
Open files          :Min limit = 1024, Max limit = 1048576
*/
