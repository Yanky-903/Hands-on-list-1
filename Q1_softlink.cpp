/*
============================================================================
Name : Q1_softlink.cpp
Author : Yashraj Singh Chauhan
Description : 1. Create the following types of a files using (i) shell command (ii) system call
              a. soft link (symlink system call)
Date: 28th Aug, 2024.
============================================================================
*/


#include <iostream>
#include <unistd.h>

using namespace std;
int main(){
	int a = symlink("Q1_softlink", "/home/yashraj-singh-chauhan/softlink");
	cout<<a<<endl;
        
	return 0;
}

//Output=0; In lists I can see the softlink.
