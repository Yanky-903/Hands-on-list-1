/*
============================================================================
Name : Q1_hardlink.cpp
Author : Yashraj Singh Chauhan
Description : 1. Create the following types of a files using (i) shell command (ii) system call
                 b)Hardlink(Using link system call)
Date: 28th Aug, 2024.
============================================================================
*/


#include <iostream>
#include <unistd.h>

using namespace std;

int main(){
        int a = link("Q1_hardlink", "link");
        cout<<a<<endl;

        return 0;
}


//Output: 0. I can see the link being created in my local using ls command.

