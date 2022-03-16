#define _CRT_SECURE_NO_WARNINGS 1

//函数的声明和定义
//分文件的书写形式
#include<stdio.h>//库里面的头文件
#include "add.h"//引自己写的头文件用双引号(因为不在文件内部)
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//函数调用
	sum = Add(a, b);
	printf("%d\n", sum);//30
	return 0;
}
