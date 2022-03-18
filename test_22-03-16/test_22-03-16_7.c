#define _CRT_SECURE_NO_WARNINGS 1
//递归与迭代
//求n的阶乘（不考虑溢出）
#include<stdio.h>
int Factorial2(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Factorial2(n-1);
}
int main()
{
	//求n的阶乘
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//2.递归方式
	ret = Factorial2(n);
	printf("%d\n", ret);
	return 0;
}