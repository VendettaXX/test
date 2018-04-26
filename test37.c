#include<stdio.h>
#include<unistd.h>
int main()
{
    pid_t pid;
    int count = 0;
    pid = fork();   //fork一个进程
    if(pid >= 0)
    {               //pid为0,
        printf("this is  process, pid is %d\n",getpid());//getpid返回的是当前进程的PID
        count+=2;
        printf("count = %d\n",count);
    }
    else
    {
        fprintf(stderr,"ERROR:fork() failed!\n");
    }
    return 0;
}
