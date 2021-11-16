#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
  printf("helloworld\n"); 
  pid_t ret= fork();
  if(ret > 0)
  {
  //  int count=0;
    while(1)
    {
    //perent进程
    printf("I am parent, pid:%d\n",getpid());
    sleep(1);
    
    }
    exit(0);

  }
  else if(ret==0)
  {
    int count=0;
    while(count<5)
    {
    //child进程
    printf("I am child, pid:%d, ppid:%d\n",getpid(),getppid());
    sleep(2);
    count++;
    }
  exit(1);
  }
  else
  {
    printf("fork error\n");
  }

  sleep(1);
  return 0;
}



