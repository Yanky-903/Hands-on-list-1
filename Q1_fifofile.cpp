/*
============================================================================
Name : Q1_fifofile.cpp
Author : Yashraj Singh Chauhan
Description : 1. Create the following types of a files using (i) shell command (ii) system call
              c. FIFO (mkfifo Library Function or mknod system call)
Date: 28th Aug, 2024.
============================================================================
*/

#include<iostream>
#include <sys/stat.h>
using namespace std;

int main(){
	int a = mknod("Q1_fifofile", 0744, 0);
	cout<<a;
}
