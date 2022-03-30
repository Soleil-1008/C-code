﻿#define _CRT_SECURE_NO_WARNINGS 1
//野指针-指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
//野指针成因
//1. 指针未初始化
//2. 指针越界访问
#include <stdio.h>
int main()
{  
	//1. 指针未初始化
	int a;//局部变量未初始化，默认为随机值    
	int *p;//局部变量指针未初始化，默认为随机值   非法访问内存
	*p = 20;//随意一个位置放20

	//2. 指针越界访问
	int arr[10] = { 0 };
	int* p = arr;//arr首元素地址
	int i = 0;
	for (i = 0; i <= 11; i++)
	{
		//当指针指向的范围超出数组arr的范围时，p就是野指针        
		*(p++) = i;
	}
	return 0;
}