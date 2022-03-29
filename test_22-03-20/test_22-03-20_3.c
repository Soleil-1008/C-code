#define _CRT_SECURE_NO_WARNINGS 1
//指针和指针类型
//指针+-整数
//指针的类型决定了指针向前或者向后走一步有多大（距离）
//int* p      p+1-->4
//char* p     p+1-->1
//double* p   p+1-->8

#include<stdio.h>
int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;//警告 不兼容
	printf("%p\n", &a);//0000000A351CFAC4
	printf("%p\n", pa);//0000000A351CFAC4
	printf("%p\n", pa + 1);//0000000A351CFAC8  +4
	printf("%p\n", pc);//0000000A351CFAC4  相同
	printf("%p\n", pc + 1);//0000000A351CFAC5  +1
	return 0;
}