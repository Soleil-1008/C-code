#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//一些for循环的变种
//for循环的初始化、判断、调整都可以省略（不要随便省略）
//但判断部分如果被省略，那判断条件就是：恒为真(死循环)
//建议不要随便省略
int main()
{
	//变种1
	/*
	for (;;)
	{
		printf("hehe ");//hehe hehe hehe 死循环
	}
	*/

	/*
	int count = 0;//计数
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("haha\n");
			count++;
		}
	}
	printf("%d\n",count);//10*10=100
	*/
	
	int count = 0;//计数
	int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		for (; j < 10; j++)
		//i=1后执行第二个for循环，当j=10后跳出循环，此后j一直为10不再执行第二个for循环
		{
			printf("haha\n");//10个haha
			count++;
		}
	}
	printf("%d\n", count);//10

	//变种2
	/*
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("haha\n");//hahahaha
	}*/
	return 0;
}