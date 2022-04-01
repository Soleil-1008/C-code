#define _CRT_SECURE_NO_WARNINGS 1
//指针数组-数组-存放指针的数组
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//整型数组-存放整型
	//字符数组-存放字符
	//指针数组-存放指针
	//int arr[10];
	int* arr2[3] = { &a,&b,&c };//指针数组
	//arr2[0];//第一个元素&a a的地址
	int i = 0;
	for (i = 0; i <= 3; i++)
	{
		printf("%d ", *(arr2[i]));//10 20 30
	}
}