#include <stdio.h>
#include <string.h>

void basic();
void logic();
void position();
typedef void(* fun_name)();
void call_fun(fun_name fun);
 
//命令行参数长度argc,数组argv(空格划分)
void main (int argc, char* argv[])
{    
    if (NULL == argv[1] || argc <= 1)
    {
        printf("argument error \n");
        return ;
    }
    // printf("%s\n", argv[1]);
    
    //定义函数指针
    /*void (* fun_name)();
    fun_name = basic;
    fun_name();*/    
    call_fun(basic);
}

void call_fun(fun_name fun) 
{
  fun();
  return;
}

//基本运算符
void basic ()
{
    int i1,i2,i3;
    i1 = 1;
    i2 = 2;

    printf("i1 = %d, i2 = %d \n",i1,i2);

    i3 = i1 + i2;
    printf("i1 + i2 = %d \n",i3);

    i3 = i1 - i2;
    printf("i1 - i2 = %d \n",i3);

    i3 = i1 * i2;
    printf("i1 * i2 = %d \n",i3);

    //%小数点前面几位(最多).小数点后面几位(最多)
    float f[] = {(float)i1,(float)i2},f2;
    f2 = f[0]/f[1];
    printf("i1 / i2 = %2.1f \n",f2);

    i3 = i1 % i2;
    printf("i1 * i2 = %d \n",i3);

    i1++;
    printf("i1++ : %d \n",i1);
    i1--;
    printf("i1-- : %d \n",i1);
}

//枚举类型声明示例
enum BOOL {true = 1,false = 0};
enum BOOL2 {true1='1',false1='0'};

//逻辑运算符
void logic ()
{
    int i1,i2;
    enum BOOL b = true;
	enum BOOL2 b2 = true1;
    if (b || b == 1)
    {
        printf("b(int): %d \n",b);
    }

	if (b && b2 == '1') 
	{
		printf("b2(char): %c \n", b2);
	}
}

//位运算符(二进制形式运算) | & ^(异或,相同=1) ~(非,相反)
void position()
{
	int i1, i2, i3;
	i1 = 1;		   // 0000 0001
	i2 = 2;		   // 0000 0010
	printf("i1: %d, i2: %d \n", i1, i2);

	i3 = i1 | i2;  // 0000 0011 = 3
	printf("i1 | i2 = %d \n",i3);

	i3 = i1 & i2; // 0000 0000 = 0
	printf("i1 & i2 = %d \n", i3);

	i3 = i1 ^ i2;// 0000 0011 = 3
	printf("i1 ^ i2 = %d \n", i3);

	i3 = ~i1;	// 0000 0010 = 2
	printf("~i1 = %d \n", i3);
}

