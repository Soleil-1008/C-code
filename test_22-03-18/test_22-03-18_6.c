#define _CRT_SECURE_NO_WARNINGS 1
//操作符-赋值操作符 =
//复合赋值符:算术/移位/位操作符+赋值操作符
#include<stdio.h>
int main()
{
	int weight = 120;//体重
	weight = 80;
	int a = 10;
	int x = 0;
	int y = 20;
	//a = x = y + 1;//连续赋值(不建议)
	x = y + 1;
	a = x;

	int m = 10;
	m = m + 10;
	m += 10;//复合赋值
	//其他运算符一样的道理。这样写更加简洁。
	printf("%d\n",m);//30
}