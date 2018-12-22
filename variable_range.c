#include <stdio.h>
void test();
void test1();

//gcc xxx.c xxx_extern.c
int main ()
{
 test();
}

/*
 存储类
    RAM:随机存取存储器 = 静态 + 动态
        存储单元可按需随意取出或存入,断电时丢失,

   寄存器:内存阶层中的最顶端,系统获取操作资料的快速途径

   作用:定义变量|函数 可见性,生命周期
   关键词:auto,register,static,extern
   auto:局部变量,(RAM中的,默认修饰符)

   static:范围在当前文件中,只初始化一次(意味着在函数内|外 声明,只是作用的范围不同,其他一样)
   extern:范围在多个文件中(互相引用include的)

   register:修饰(寄存器中的),定义 'register'意味着变量可能存储在寄存器中,这取决于硬件和实现的限制.
            寄存器只用于需要快速访问的变量.
*/

/**
 文件全局修饰
*/
static int Count = 10;
static int I = 10;

//extern : 多个文件全局变量定义
extern void write();
int ex;

void test()
{
/**
    局部修饰
*/
  //默认
  int I;
  auto int i;

  //寄存器修饰
  register int miles = 10;


  while (Count --) {
   test1(miles);
  }
  return;
}

void test1(miles)
{
  I--;
  printf("Count: %d I: %d miles: %d \n",Count,I,miles);
  ex = 1;
  write();
}