#define _CRT_SECURE_NO_WARNINGS 1
//函数的声明和定义
#include<stdio.h>

//函数声明
//如果未声明会有警告：函数未定义
int Add(int x, int y);//x、y可以省略

int main() 
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//函数调用
	sum = Add(a, b);
	printf("%d\n",sum);//30
	return 0;
}
//函数的定义(通常放前面，就不用函数声明)
int Add(int x, int y)
{
	int z = x + y;
	return z;
}