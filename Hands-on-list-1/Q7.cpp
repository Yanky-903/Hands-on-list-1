/*
============================================================================
Name : Q7.cpp
Author : Yashraj Singh Chauhan
Description : Write a program to copy file1 into file2 ($cp file1 file2).
Date: 28th Aug, 2024.
============================================================================
*/

#include<iostream>
#include<unistd.h>
#include<fcntl.h>

using namespace std;

int main(){
int fd1 = open("file1.txt",O_CREAT | O_RDWR, 0777);
int fd2 = open("file2.txt",O_CREAT | O_RDWR, 0777);
	
char arr1[10] = "File1";
char arr2[10] = "File2";
char arr3[10];

write(fd1,arr1,10);
write(fd2,arr2,10);
lseek(fd1,0,SEEK_SET);
read(fd1,arr3, 10 );
write(fd2, arr3, 10);
}
/*
Output:File2File1;
*/
