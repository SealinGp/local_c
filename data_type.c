#include <stdio.h>
#define b 'b'
 char c();
int main()
{
    char a = c();
    printf("const char:%c %c",a,b);
    return 0;
}
/*
1 b(字节) = 8 bit(比特)
1 Kb      = 1024 b
1 Mb      = 1024 Kb
1 Gb      = 1024 Mb

字符
 char : 1b, -128~127 | 0~255
 unsigned char : 1b, 0~255
 signed char : 1b, -128~127

整型
 int : 2|4 b, -32768~32767 | -2147483648~2147483647
 unsigned int: 2|4 b,	0 ~ 65535 | 0 ~ 4294967295
 short	2 b,	-32768 ~ 32767
 unsigned short	2 b,	0 ~ 65535
 long	4 b	-2147483648 ~ 2147483647
 unsigned long	4 b	 0 ~ 4294967295

常量(字面量)
 整数: 1~9 十 ,1~7 八 ,1~9 a~g 十六, U|u:unsigned, L|l:long
  十进制(默认): 85,71u
  八进制(0开头): 0213
  十六进制(0x|0X开头): 0x4b
 浮点: 3.14159,314159E-5L, e|E:带符号
 字符:'a'
 字符串:"abc"

定义常量的关键词:#define(main()函数前),const(函数内)
*/
char c ()
{
  const char a = 'a';
  enum BOOL a;
  a = true;
  return a;
}

enum BOOL {true=1,false=0};