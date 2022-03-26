#define _CRT_SECURE_NO_WARNINGS 1
//条件操作符（三目）-exp1 ? exp2 : exp3
//1为真 计算2；1为假 计算3（整个表达式的值）
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;

	//1
	if (a > 5)
		b = 3; 
	else 
		b = -3;
	
	//2
	int b = a > 5 ? 3 : -3;

	//1
	int m = 10;
	int n = 20;
	int max = 0;
	if (a > b)
		max = a;
	else
		max = b;

	//2
	max = (a > b) ? a : b;


}