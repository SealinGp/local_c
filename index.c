<?php
/**
 * C语言
 *
 * 宏: 简单的替换,
 * 格式: #define N 99
 * 作用: N = 99
 *
 */

/*
"#"是一种预处理运算符，它的功能是将其后面的宏参数进行 字符串化操作
"##"连接符
``````````````````````````````````
#include <stdio.h> //printf() 函数必须要的头文件

int main () {
    #define String(x) # x
    printf(String(""""));     //""""
    
    #define Link(a,b) a ## b
    printf(Link(a,i));        //ai

    

	return 0;   //语句用于表示退出程序,终止main函数
}
``````````````````````````````````
结果: """"
*/




