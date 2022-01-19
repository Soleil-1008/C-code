#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//for循环-使用频率最高
//for(表达式1;表达式2;表达式3){循环语句;}
//表达式1--初始化部分，用于初始化循环变量的
//表达式2--条件判断部分，用于判断循环什么时候终止
//表达式3--调整部分，用于循环条件的调整
int main()
{
	//在屏幕上打印1-10
	/*
	int i = 1;//初始化
	while (i <= 10)//判断
	{
		printf("%d ",i);
		i++;//调整
	}
	*/

	for (int i=1;i<=10;i++)//初始化、判断、调整
	{
		printf("%d ",i);
	}
	return 0;
}