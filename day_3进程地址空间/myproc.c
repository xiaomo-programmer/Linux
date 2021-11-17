#include<iostream>
#include <stdlib.h>
#include<string>
using namespace std;

int main(int argc, char *argv[], char *env[])
{
 // string s=argv[1];
 // for(int i =0;i < argc; i++)
 // {
 //   cout << "argv[" << i << "] :" << argv[i] << endl;
 // }
 // if(s=="-a")
 // {
 //  cout << "hello world" << endl;
 // }
 //  for(int i=0;env[i];i++)
 //  {
 //    cout << i << ":"<< env[i] << endl;
 //  }
   cout << getenv("PATH") << endl;
   cout << getenv("PWD") << endl;
}
