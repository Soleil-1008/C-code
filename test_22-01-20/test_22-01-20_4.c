#define _CRT_SECURE_NO_WARNINGS 1
//练习：写代码将三个数从大到小输出
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d %d %d", &a, &b, &c);
	//算法实现
	//a最大值
	//b中间值
	//c最小值
	if (a < b)
	{
		int tmp = a;//存放临时变量
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}