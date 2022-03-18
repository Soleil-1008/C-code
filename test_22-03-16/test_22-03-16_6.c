#define _CRT_SECURE_NO_WARNINGS 1
//递归与迭代
//求n的阶乘（不考虑溢出）
#include<stdio.h>
int Factorial1(int n) 
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++) 
	{
		ret *= i;
	}
	return ret;
}
int main()
{
	//求n的阶乘
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	//1.循环方式
	ret = Factorial1(n);
	printf("%d\n",ret);
	return 0;
}