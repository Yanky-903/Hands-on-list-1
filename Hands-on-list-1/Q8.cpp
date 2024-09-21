/*
============================================================================
Name : Q8.cpp
Author : Yashraj Singh Chauhan
Description : Write a program to open a file in read only mode, read line by line and display each line as it is read.
              Close the file when end of file is reached.
Date: 28th Aug, 2024.
============================================================================
*/

#include<iostream>
#include<unistd.h>
#include<fcntl.h>


using namespace std;

int main(){
int file1 = open("file1.txt", O_RDONLY);

char buffer[1024];
ssize_t ReadBytes;
string line;
while ((ReadBytes = read(file1, buffer, 1)) > 0) {
        buffer[ReadBytes] = '\0'; 

        
        for (ssize_t i = 0; i < ReadBytes; i++) {
            if (buffer[i] == '\n') {
                
                cout << line << endl;
		getchar();
                line.clear();
            } else {
                
                line = line +  buffer[i];
          }
     }
}
if (!line.empty()) {
     cout << line << endl;
}
   close(file1);

    return 0;

}
/*
Output:
File1

Yashraj

This is my file

*/
