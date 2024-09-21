/*
============================================================================
Name : Q9.cpp
Author : Yashraj Singh Chauhan
Description : Write a program to print the following information about a given file.
              a. inode
              b. number of hard links
              c. uid
              d. gid
              e. size
              f. block size
              g. number of blocks
              h. time of last access
              i. time of last modification
              j. time of last change
Date: 28th Aug, 2024.
============================================================================
*/

#include <iostream>
#include <sys/stat.h>
#include <unistd.h>
#include <pwd.h>
#include <grp.h>
#include <ctime>

using namespace std;

int main(){
     string fname = "Q1_hardlink.cpp";
     struct stat status;

 if (stat(fname.c_str(), &status) < 0) {
      perror("stat");
      return 1;
    }

cout<<"Inode is:"<<status.st_ino<<endl;
cout<<"Number of hard links:"<<status.st_nlink<<endl;
cout<<"UID is:"<<status.st_uid<<endl;
cout<<"GID is:"<<status.st_gid<<endl;
cout<<"File size is:"<<status.st_size<<"Bytes"<<endl;
cout<<"Size of block is:"<<status.st_blksize<<"bytes"<<endl;
cout<<"Number of blocks are:"<<status.st_blocks<<endl;
cout<<"Time of last access is:"<<ctime(&status.st_atime)<<endl;
cout<<"Time of last modification is:"<<ctime(&status.st_mtime)<<endl;
cout<<"Time of last change is:"<<ctime(&status.st_ctime)<<endl;

    return 0;
}
/*
Output: 
Inode is:4326348
Number of hard links:1
UID is:1000
GID is:1000
File size is:629Bytes
Size of block is:4096bytes
Number of blocks are:8
Time of last access is:Fri Aug 30 10:53:48 2024

Time of last modification is:Fri Aug 30 10:41:36 2024

Time of last change is:Fri Aug 30 10:41:36 2024
*/
