#define _CRT_SECURE_NO_WARNINGS 1
//指针
//1.指针是内存中一个最小单元的编号，也就是地址
//2.平时口语中说的指针，通常指的是指针变量，是用来存放内存地址的变量
//存放在指针中的值都被当成地址处理
//一个小的单元--1个字节
//指针是用来存放地址的，地址是唯一标示一块地址空间的
//指针的大小在32位平台是4个字节，在64位平台是8个字节
int main()
{
	int a = 10; //在内存中开辟一块空间
	int* p = &a;//指针变量 用来存放内存地址的变量
	return 0;
}