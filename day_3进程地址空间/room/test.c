#include <stdio.h>
#include <malloc.h> 
int g_val = 100; //初始化数据
int g_unval;     //未初始化数据
int main(int argc, char *argv[],char *env[])
{
  printf("code addr : %p\n", main);//代码段  代码正文

  printf("g addr : %p\n", &g_val);   
  printf("g_un addr : %p\n", &g_unval);

  char* num =(char*)malloc(10);  //堆
  printf("head addr : %p\n", num);//打印堆空间的地址
  //对于*num 是一个指针变量 ，也是局部变量 在栈上开空间
  printf("stack addr : %p\n",&num);
  

  //命令行参数的起始地址
  printf("opt addr : %p\n", argv[0]);
  printf("opt addr : %p\n", argv[argc-1]);

  //环境变量的起始地址
  printf("env addr : %p\n",env[0]);


}
