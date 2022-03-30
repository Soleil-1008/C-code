#define _CRT_SECURE_NO_WARNINGS 1
//野指针-指针指向的空间释放-动态内存开辟讲解
#include<stdio.h>
int* test() 
{
	int a = 10;//局部变量 进入创建 出去释放
	return &a; 
}
int main()
{
	int* p = test();
	*p = 20;//访问的空间已经释放 还给系统
	printf("%d\n", *p);//此时访问的空间非法
	return 0;
}