#define _CRT_SECURE_NO_WARNINGS 1
//递归
//编写函数不允许创建临时变量，求字符串长度
#include<stdio.h>
int my_strlen(char* str)
{
	//计算字符串长度
	int count = 0;//计数
	while (*str != '\0')
	{
		count++;
		str++;//指针指向下一个
	}
	return count;
}

int main()
{
	char arr[] = "bit";
	//2
	//模拟实现了一个strlen函数
	int len = my_strlen(arr);
	//arr数组，传参传过去的不是整个数组而是首元素地址
	printf("%d\n", len);//3
	return 0;
}