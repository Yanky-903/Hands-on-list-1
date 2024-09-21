
/*
========================================================================================================
Name : Q26.c
Author : Yashraj Singh Chauhan
Description : Write a program to send messages to the message queue. Check $ipcs -q.
Date: 12 Sept, 2024.
========================================================================================================
*/
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
#include <string.h>

struct msg
{
    long mtype;
    char mtext[80];
};

int main()
{
    key_t key = ftok(".", 'a');
    int msqid = msgget(key, IPC_CREAT | 0666);
  
    struct msg msg;
    msg.mtype = 10;
    char text[80];
    printf("Enter message:\n");
    scanf("%[^\n]s", text);

    strcpy(msg.mtext, text);
    
    if(msgsnd(msqid, (struct msgbuf *)&msg, 80, 0) == -1){
      printf("Message failed");
    }
    else printf("Message sent successfully");

    return (0);
}
/*
Output:
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ gcc Q26.c
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ ./a.out
Enter message:
My name is Yashraj
Message sent successfully
*/
