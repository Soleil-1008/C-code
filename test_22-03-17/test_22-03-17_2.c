#define _CRT_SECURE_NO_WARNINGS 1
//数组-sizeof()  strlen()
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = { "abc" };//4个字符a b c \0
	char arr2[] = { 'a','b','c'};//3个字符a b c
	printf("%d\n", sizeof(arr1));//4
	//sizeof-操作符-计算字符串所占空间的大小 4个元素-char 4*1=4
	printf("%d\n", sizeof(arr2));//3
	printf("%d\n", strlen(arr1));//3
	//strlen-库函数-计算字符串长度-\0停止 不包括\0
	printf("%d\n", strlen(arr2));//随机值-遇到\0才停止
	return 0;
}

