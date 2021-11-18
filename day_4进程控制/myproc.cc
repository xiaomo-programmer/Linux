#include <iostream>
#include <sys/types.h>
#include <unistd.h> 
#include <stdlib.h>
#include <sys/wait.h> 
using namespace std;


int main()
{
 // cout << "hello world " <<endl;
 // return 1;
//  cout << "I am process :" << getpid() << endl;
//
//  pid_t id = fork();
//  if(id == 0)
//  {
//   //child
//   cout << "I am son :" << getpid() << endl;
//   sleep(5);
//  }
//  else if(id > 0)
//  {
//   //father
//   cout << "I am father :" << getpid() << " " << "My son pid :" << id << endl;
//
//   sleep(5);
//  }
//  else 
//  {
//    cerr << "fork error" << endl;
//    return 1;
//  }
//
//  return 0;

    pid_t id = fork();
    if(id==0)
    {
     // child
    int count=0;
    while(1)
    {
      cout << "child....："<<count<< endl;
      sleep(1);
      if(count>=5)
      {
        break;
      }
      count++;
    }
    exit(0);
    }
    else{
        cout << "father before..."<< endl;
        //阻塞父进程，等待子进程退出   
        wait(NULL) ;
        cout << "father after..."<< endl;
    
//      int count=0;
//      while(1)
//      {
//        sleep(1);
//        cout << "father....:"<<count <<endl;
//        if(count>20)
//        {
//          break;
//        }
//        count++;
//      }
//      wait(NULL);
//      
    }



   cout<< "endl"<<endl;


}
