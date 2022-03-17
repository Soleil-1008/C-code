#define _CRT_SECURE_NO_WARNINGS 1
//递归
//编写函数不允许创建临时变量，求字符串长度
#include<stdio.h>
#include<string.h>//strlen()库函数

int main()
{
	char arr[] = "bit";
	//1
	int len = strlen(arr);
	printf("%d\n",len);//3(不包含 '\0')
	return 0;
}