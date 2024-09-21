
/*
========================================================================================================
Name : Q25.c
Author : Yashraj Singh Chauhan
Description : Write a program to print a message queue's (use msqid_ds and ipc_perm structures):
		a. access permission
		b. uid, gid
		c. time of last message sent and received
		d. time of last change in the message queue
		e. size of the queue
		f. number of messages in the queue
		g. maximum number of bytes allowed
		h. pid of the msgsnd and msgrcv
Date: 12 Sept, 2024.
========================================================================================================
*/
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>

int main()
{
    key_t key = ftok(".", 'a');
    int msqid = msgget(key, IPC_CREAT | 0666);

    struct msqid_ds st;
    msgctl(msqid, IPC_STAT, &st);

    printf("Access Permission - %o\n", st.msg_perm.mode);
    printf("Uid and gid of owner are - %d %d\n", st.msg_perm.uid, st.msg_perm.gid);
    printf("Uid and gid of creator are - %d %d\n", st.msg_perm.cuid, st.msg_perm.cgid);
    printf("Time of last message sent and received - %ld %ld\n", st.msg_stime, st.msg_rtime);
    printf("Time of last change - %ld\n", st.msg_ctime);
    printf("Size of the queue - %ld\n", st.__msg_cbytes);
    printf("No of messages in queue - %ld\n", st.msg_qnum);
    printf("Max no. of bytes allowed in queue - %ld\n", st.msg_qbytes);
    printf("Pid of the last msgsnd and msgrcv - %d %d\n", st.msg_lspid, st.msg_lrpid);

    return (0);
}
/*
Output:
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ gcc Q25.c
yashraj-singh-chauhan@yashraj-singh-chauhan-20YE000UIG:~/Hands-on-list-2$ ./a.out
Access Permissions - 666
Uid and gid of owner are - 1000 1000
Uid and gid of creator are - 1000 1000
Time of last message sent and received  - 0 0
Time of last change - 1726813702
Size of the queue - 0
No of messages in queue - 0
Max no. of bytes allowed in queue - 16384
Pid of the last msgsnd and msgrcv - 0 0
*/
