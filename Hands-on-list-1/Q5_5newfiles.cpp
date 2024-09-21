/*
============================================================================
Name : Q5_5newfiles.cpp
Author : Yashraj Singh Chauhan
Description : Write a program to create five new files with infinite loop. Execute the program in the background
              and check the file descriptor table at /proc/pid/fd.
Date: 28th Aug, 2024.
============================================================================
*/

#include<iostream>
#include <fcntl.h>
#include <string>
using namespace std;

int main(){
	int count=1;
	while(1){
          if(count<=5){
	     string s = "Q5_NewFile_";
	     s = s+to_string(count);
	     int a = creat(s.c_str(), 0744);

	     if(a==-1) cout<<"Failed";
	     
	     count++;
	  }
	  
 	}
	return 0;
}
/*
Output: 5 new files were created.
*/
