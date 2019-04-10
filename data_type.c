#include <stdio.h>


void basic();//基本类型 = 整数类型 + 枚举类型
void def();//变量定义
void point();//指针

void main()
{
  // basic();
  // def();
  point();  
  return ;
}

/*
数据类型换算以及范围
1 byte(字节) = 8 bit(比特)
1 Kb      = 1024 byte
1 Mb      = 1024 Kb
1 Gb      = 1024 Mb

C中,char型数据在内存中是以二进制形式存放的,char型可以进行加减运算的
(系统先将char->int(按ASCII码表转换),然后计算)

字符
 char : 1byte(存储大小), -128~127 | 0~255
 unsigned char : 1byte, 0~255
 signed char : 1byte, -128~127

整型
 int : 2|4 byte, -32768~32767 | -2147483648~2147483647
 unsigned int: 2|4 byte, 0 ~ 65535 | 0 ~ 4294967295
 short  2 byte,  -32768 ~ 32767
 unsigned short 2 byte,  0 ~ 65535
 long 4 byte -2147483648 ~ 2147483647
 unsigned long  4 byte  0 ~ 4294967295

常量(字面量)
 整数: 1~9 十 ,1~7 八 ,1~9 a~g 十六, U|u:unsigned, L|l:long
  十进制(默认): 85,71u
  八进制(0开头): 0213
  十六进制(0x|0X开头): 0x4b
 浮点: 3.14159,314159E-5L, e|E:带符号
 字符:'a'
 字符串:"abc"

 printf()格式字符
 %d   : 十进制输出 (负数带符号)
 %o   : 八进制输出 (无前缀0)
 %x|X : 十六进制输出无符号整数(无前缀Ox)
 %u   : 十进制输出无符号整数(unsigned)
 %f   : 小数形式输出单,双精度实数
 %e|E : 指数形式输出单,双精度实数
 %g|G : 以%f或%e中较短的输出宽度输出单、双精度实数
 %c   : 单个字符输出
 %s   : 字符串输出
定义常量的关键词:#define(main()函数前),const(函数内)
*/

void basic()
{
  //字符
  char c1 = 'c';

  // int i1 = -1;
  // unsigned int i2 = 0;
}

//变量定义
#define c 'b'
void def()
{
  printf("c:%c\n", c);

  const char c1 = 'a';
  printf("c1:%c\n", c1);

  enum BOOL {true=1,false=0};
  enum BOOL b1 = true;
  printf("b1:%d\n", b1);
}

//指针
void point ()
{
   int *i1;
   double *d1;
   float *f1;
   char *c1;

   int i2 = 1;
   i1     = &i2;
   printf("i2 : %d\n", i2);   
   printf("&i2: %p\n", &i2);

   printf("i1 = &i2 \n");
   printf("i1 : %p\n", i1);
   printf("*i1: %d\n", *i1);
   return ;
}
