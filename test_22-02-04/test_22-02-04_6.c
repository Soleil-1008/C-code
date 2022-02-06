#define _CRT_SECURE_NO_WARNINGS 1
//练习：写一个函数可以判断一个数是不是素数
//先写函数如何使用，再实现
#include<stdio.h>
#include<math.h>
//是素数返回1 否则返回0
int is_prime(int n)
{
	//试除法
	int j = 0;
	for (j = 2; j <=sqrt(n); j++)
	{
		if (n % j == 0)
		{
			return 0;//功能比break更强
		}	
	}
	return 1;//j==n	n/2 sqrt(n)
}
int main()
{
	//打印100-200之间的素数
	int i = 0;
	for (i = 100; i <= 200; i++) 
	{
		//判断i是否为素数
		if (is_prime(i) == 1) 
		{
			printf("%d ",i);
		}
	}
	return 0;
}
