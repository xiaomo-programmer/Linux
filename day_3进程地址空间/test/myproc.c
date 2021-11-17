#include <stdio.h>
#include <unistd.h>



int g_val = 100;
int main()
{
  
  pid_t id = fork();

  if(id==0)
  {
    //child
    g_val = 1000;
    while(1)
    {
      printf("g_val: %d, g_val addr: %p,  child\n",g_val,&g_val);
      sleep(1);
    }
    
  }
  else if(id>0)
  {
    //parent
    sleep(3);
   // printf("pid: %d\n",getpid());
    
    while(1)
    {
      printf("g_val: %d, g_val addr: %p,  father\n",g_val,&g_val);
       sleep(1);
    }  
     
  }
   else 
  {
     //error

  }


}
