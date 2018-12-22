#include <stdio.h>

void basic();
void logic();

void main ()
{

//  basic();

    logic();
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


enum BOOL {true = 1,false = 0};

//逻辑运算符
void logic ()
{
    int i1,i2;
    enum BOOL b = true;
    if (b == 1)
    {
        printf("asd");
    }
}