#define _CRT_SECURE_NO_WARNINGS 1
//优化
//写一个代码：打印100-200之间的素数
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int count = 0;
	//sqrt-开平方的数学库函数
	for (i = 101; i <= 200; i+=2)//优化 偶数不是素数
	{
		//判断i是否为素数
		//试除法
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)//sqrt(i)可替换成i/2
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);//21
	return 0;
}
//文章<素数求解的n种境界>