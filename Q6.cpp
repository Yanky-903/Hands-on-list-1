/*
============================================================================
Name : Q6.cpp
Author : Yashraj Singh Chauhan
Description : Write a program to take input from STDIN and display on STDOUT. Use only read/write system calls
Date: 28th Aug, 2024.
============================================================================
*/

#include<iostream>
#include<unistd.h>

using namespace std;

int main(){
           int n;
           cin>>n;
	   char buffer[n];
	   read(0,buffer,n); //reading n bytes from buffer
           write(1,buffer,n); //write n bytes from buffer
           return 0;
}

/*
Output:
5
Yash
Yash
*/

