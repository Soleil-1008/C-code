#define _CRT_SECURE_NO_WARNINGS 1
//面试题：不创建临时变量，实现两个数的交换
#include <stdio.h>
int main()
{ 
	//1.引入第三变量
	/*
	int x = 3;
	int y = 5;
	printf("before: x = %d y = %d\n", x, y);
	int tmp = 0;//临时变量
	tmp = x;
	x = y;
	y = tmp;
	printf("after : x = %d y = %d\n", x, y);
	*/

	//2.加减法
	/*
	int m = 3;
	int n = 5;
	printf("before: m = %d n = %d\n", m, n);
	m = m + n;//8  可能超出范围，造成数据丢失（溢出）
	n = m - n;//3
	m = m - n;//5
	printf("after : m = %d n = %d\n", m, n);
	*/

	//3.异或方法(不会溢出)
	//执行效率不高 可读性较差
	int a = 3;//011
	int b = 5;//101
	printf("before: a = %d b = %d\n", a, b);
	a = a^b;//110
	b = a^b;//011
	a = a^b;//101
	printf("after : a = %d b = %d\n", a, b);
	return 0;
}