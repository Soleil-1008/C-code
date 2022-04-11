#define _CRT_SECURE_NO_WARNINGS 1
//计算一个数的每位之和（递归实现）
//递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
#include<stdio.h>
//DigitSum(1729)
//DigitSum(172)+1729%10
//DigitSum(17)+172%10+1729%10
//DigitSum(1)+17%10+172%10+1729%10
int DigitSum(unsigned int num)
{
	if(num>9)
	{
		return DigitSum(num / 10) + num % 10;
	}
	else
	{
		return num;
	}
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);//1729
	int ret = DigitSum(num);
	printf("ret = %d\n", ret);
	return 0;
}