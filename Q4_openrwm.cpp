/*
============================================================================
Name : Q4_openrwm.cpp
Author : Yashraj Singh Chauhan
Description : Write a program to open an existing file with read write mode. Try O_EXCL flag also.
Date: 28th Aug, 2024.
============================================================================
*/

#include<iostream>
#include <fcntl.h>

using namespace std;

int main(){
        int a =  open("Newfile.txt",O_CREAT|O_EXCL , 0666);
	cout<<a<<endl;
        return 0;
}
/*
Output: 3
*/
