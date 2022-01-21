#define _CRT_SECURE_NO_WARNINGS 1
//写一个代码打印1-100之间所有3的倍数的数字
#include<stdio.h>
int main()
{
	int i = 1;
	int count = 0;
	for (i = 1; i <= 100; i++) 
	{
		if (i % 3 == 0) 
		{
			printf("%d ",i);
			count++;//计数
		}
	}
	printf("个数：%d\n", count);//33
	return 0;
}