#define _CRT_SECURE_NO_WARNINGS 1
//递归与迭代
//求第n个斐波那契数（不考虑溢出）
#include<stdio.h>

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2) 
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
//TDD-测试驱动开发(先使用再看如何实现)
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret = %d\n", ret);
	return 0;
}