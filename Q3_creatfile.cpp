/*
============================================================================
Name : Q3_createfile.cpp
Author : Yashraj Singh Chauhan
Description : Write a program to create a file and print the file descriptor value. Use creat ( ) system call
Date: 28th Aug, 2024.
============================================================================
*/

#include<iostream>
#include <fcntl.h>

using namespace std;

int main(){
	int a =  creat("creatfile.txt", 0744);
	if(a==-1) cout<<"error";
	else cout<<"file is created"<<endl;
	int fd = open("creatfile.txt",O_RDONLY);
	cout<<"File Discriptor is:"<<fd<<endl;
        return 0;
}

/*
Output: file is created
        File Discriptor is:4
*/

