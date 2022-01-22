#define _CRT_SECURE_NO_WARNINGS 1
//写一个代码：打印100-200之间的素数
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++) 
	{
		//判断i是否为素数
		//素数判断规则
		//1.试除法
		//产生2->i-1的数字
		int j = 0;//2->i-1
		for (j = 2; j < i; j++) 
		{
			if (i % j == 0) 
			{
				break;
			}
		}
		if (j == i) 
		{
			count++;
			printf("%d ",i);
		}
	}
	printf("\ncount = %d\n",count);//21
	return 0;
}