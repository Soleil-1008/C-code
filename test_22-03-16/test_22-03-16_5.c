#define _CRT_SECURE_NO_WARNINGS 1
//递归
//编写函数不允许创建临时变量，求字符串长度
#include<stdio.h>

//大事化小
//my_strlen("bit")
//1+my_strlen("it")
//1+1+my_strlen("t")
//1+1+1+my_strlen("\0")
//1+1+1+0
int my_strlen(char* str)//str指向b
{
	//计算字符串长度
	if (*str != '\0') 
	{
		return 1 + my_strlen(str + 1);//str指向i
	}
	else
	{
		return 0;
	}
}
int main()
{
	char arr[] = "bit";
	//3
	//模拟实现了一个strlen函数
	int len = my_strlen(arr);
	//arr数组，传参传过去的不是整个数组而是首元素地址
	printf("%d\n", len);//3
	return 0;
}