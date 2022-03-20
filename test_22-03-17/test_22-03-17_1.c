#define _CRT_SECURE_NO_WARNINGS 1
//数组-创建、初始化
//type_t   arr_name   [const_n];
//type_t 是指数组的元素类型
//const_n 是一个常量表达式，用来指定数组的大小
#include<stdio.h>
#include<string.h>
int main()
{
	//创建一个数组-存放整型-10个
	int arr[10];
	char arr2[10];
	float arr3[5];
	//int n = 5;
	//char ch[n];//error 数组大小必需是常量表达式，不能使用变量
	
	//初始化
	int arr4[10] = { 1,2,3 };//不完全初始化，剩下元素默认为0
	char arr5[5] = { 'a','b' };//a b 0 0 0
	char arr6[5] = {"ab"};//a b \0 0 0 
	char arr7[5] = { 'a',98 };//a b 0 0 0
	char arr8[] = {"abcdef" };//7个字符a b c d e f 0
	printf("%d\n", sizeof(arr8));//7
	//sizeof-操作符-计算字符串所占空间的大小 7个元素-char 7*1=7
	printf("%d\n", strlen(arr8));//6
	//strlen-库函数-计算字符串长度-\0停止 不包括\0
	return 0;
}