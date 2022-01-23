#define _CRT_SECURE_NO_WARNINGS 1
//编写程序写一下1-100的所有整数中出现多少个数字9
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++) 
	{
		if (i % 10 == 9) 
		{
			printf("%d \n", i);
			count++;
		}
		if (i / 10 == 9) 
		{
			printf("%d \n", i);
			count++;
		}
	}
	//9 19 29 39 49 59 69 79 89 99
	//90 91 92 93 94 95 96 97 98 99
	printf("count=%d\n",count);//20 else if-19
	return 0;

}