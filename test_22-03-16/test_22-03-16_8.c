#define _CRT_SECURE_NO_WARNINGS 1
//递归与迭代
//求第n个斐波那契数（不考虑溢出）
//斐波那契数列
//1 1 2 3 5 8 13 21 34 55...
//n变大时效率越低
//50
//49 48
//48 49 47 48
//47 48 48 49 46 47 47 48

#include<stdio.h>

//描述第n个斐波那契数的时候
int count = 0;
int Fib(int n)
{
	if (n == 3)//测试第3个斐波那契数的计算次数
	{
		count++;
	}
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
//TDD-测试驱动开发(先使用再看如何实现)
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	ret = Fib(n);
	printf("ret = %d\n",ret);
	printf("count=%d\n",count);
	return 0;
}