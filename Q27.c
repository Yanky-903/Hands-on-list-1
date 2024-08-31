/*
============================================================================
Name : Q27.c
Author : Yashraj Singh Chauhan
Description :Write a program to execute ls -Rl by the following system calls
             a. execl
             b. execlp
             c. execled
             d. execv
             e. execvp
Date: 28th Aug, 2024.
============================================================================
*/
#include <stdio.h>
#include <unistd.h>
int main(int argc,char *env[])
{
    char *path = "/bin/ls";
    execl(path, path, "-Rl", NULL);//a
    char *path2 = "ls";
    execlp(path2, path2, "-Rl", NULL);//b
    execle(path, path, "-Rl" ,"27c_example/",NULL, env);//c
    char *argv[] = {path,"-Rl",NULL};
    execv(path, argv);//d
    char *buf[] = {path2, "-Rl", NULL};
    execvp(path2, buf);//e     
    return 0;
}
/*
Output:
total 188
-rwxrwxr-x 1 yashraj-singh-chauhan yashraj-singh-chauhan 16184 Aug 31 11:36 a.out
-rwxr--r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan     0 Aug 30 11:43 creatfile.txt
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan     0 Aug 30 20:03 file1dup.txt
-rwxrwxr-x 1 yashraj-singh-chauhan yashraj-singh-chauhan    30 Aug 30 18:32 file1.txt
-rwxrwxr-x 1 yashraj-singh-chauhan yashraj-singh-chauhan    20 Aug 30 18:21 file2.txt
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan     0 Aug 30 11:53 Newfile.txt
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan  1294 Aug 30 20:00 Q10.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   952 Aug 30 20:29 Q11.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan    24 Aug 30 20:27 Q11sample.txt
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   974 Aug 30 20:38 Q12.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   950 Aug 30 22:58 Q13.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan  1635 Aug 30 23:04 Q14.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan  3842 Aug 30 23:20 Q15.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   942 Aug 30 23:26 Q16a.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan  1029 Aug 30 23:32 Q16b.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan  1143 Aug 30 23:37 Q17a.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan  1528 Aug 31 00:12 Q17b.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan  1385 Aug 30 23:56 Q18a.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan  1371 Aug 31 00:12 Q18b.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   980 Aug 31 00:24 Q18.c
-rwxrwxr-x 1 yashraj-singh-chauhan yashraj-singh-chauhan    90 Aug 30 00:18 Q18main.txt
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   779 Aug 31 00:24 Q19.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   529 Aug 30 11:01 Q1_fifofile.cpp
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   629 Aug 30 10:41 Q1_hardlink.cpp
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   614 Aug 30 10:34 Q1_softlink.cpp
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   878 Aug 31 00:25 Q20.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   599 Aug 31 00:26 Q21.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan  1007 Aug 31 00:31 Q22.c
-rwx------ 1 yashraj-singh-chauhan yashraj-singh-chauhan   192 Aug 31 00:29 Q22Output.txt
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   786 Aug 31 11:04 Q23.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   734 Aug 31 01:03 Q24.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   605 Aug 31 11:04 Q25.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   626 Aug 31 11:35 Q26.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   834 Aug 31 11:36 Q27.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   549 Aug 29 14:56 Q28.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan  1785 Aug 29 19:56 Q29.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   549 Aug 30 11:33 Q2_infiniteloop.cpp
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   399 Aug 29 20:49 Q30.c
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   688 Aug 30 11:45 Q3_creatfile.cpp
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   520 Aug 30 11:55 Q4_openrwm.cpp
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   778 Aug 30 12:01 Q5_5newfiles.cpp
-rwxr--r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan     0 Aug 30 11:59 Q5_NewFile_1
-rwxr--r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan     0 Aug 30 11:59 Q5_NewFile_2
-rwxr--r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan     0 Aug 30 11:59 Q5_NewFile_3
-rwxr--r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan     0 Aug 30 11:59 Q5_NewFile_4
-rwxr--r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan     0 Aug 30 11:59 Q5_NewFile_5
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   630 Aug 30 12:06 Q6.cpp
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan   698 Aug 30 18:22 Q7.cpp
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan  1104 Aug 30 18:32 Q8.cpp
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan  1774 Aug 30 18:41 Q9.cpp
lrwxrwxrwx 1 yashraj-singh-chauhan yashraj-singh-chauhan    11 Aug 10 19:16 softlink -> Q1_softlink
-rw-rw-r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan    30 Aug 30 19:59 temp.txt
-rw-r--r-- 1 yashraj-singh-chauhan yashraj-singh-chauhan     4 Aug 30 23:37 ticket.txt
*/
