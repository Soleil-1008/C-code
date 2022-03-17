#define _CRT_SECURE_NO_WARNINGS 1
//递归:把大型复杂问题转化为与原问题相似的规模的较小问题
//递归两个必要条件：
//存在限制条件，当满足时，递归不再继续
//每次递归调用之后越来越接近这个限制条件
//接受一个整型值(无符号)，顺序打印每一位 输入：1234 输出：1 2 3 4
#include<stdio.h>
void print(int n)//n=1234 n=123 n=12 n=1
{
	if (n > 9) 
	{
		print(n/10);//调用print()
	}
	printf("%d ",n%10);//1 2 3 4
}
int main()
{
	unsigned int num = 0;
	scanf("%d",&num);//1234
	//递归
	print(num);
	//print(1234) 
	//print(123) 4
	//print(12) 3 4
	//print(1) 2 3 4
	return 0;
}