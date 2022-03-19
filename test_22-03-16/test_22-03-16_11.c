#define _CRT_SECURE_NO_WARNINGS 1
//青蛙跳台阶问题(不考虑溢出问题)--斐波那契数列
//一只青蛙一次可以跳上 1 级台阶，也可以跳上2 级。
//求该青蛙跳上一个n 级的台阶总共有多少种跳法
//f(n)=f(n-1)+f(n-2)
#include <stdio.h>
#include <stdlib.h>

int D_jump_floor(int n)//递归
{
	if (n <= 2)
	{
		return n;
	}
	else
	{
		return D_jump_floor(n - 2) + D_jump_floor(n - 1);
	}
}

int FD_jump_floor(int n)//非递归-循环
{
	int a = 1;//第一个数
	int b = 2;//第二个数
	int c = a;//把c赋值为a
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	printf("请输入跳的台阶数：");
	scanf("%d", &n);
	int ret1 = D_jump_floor(n);
	int ret2 = FD_jump_floor(n);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	system("pause");
	return 0;
}