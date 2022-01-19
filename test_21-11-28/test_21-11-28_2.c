#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//for循环中的break、continue
int main()
{
	/*
	for (int i = 1; i <= 10; i++)
	{
		if (5 == i)
			break;//当i=5时，跳出本次循环
		printf("%d ", i);//1 2 3 4 
	}
	*/
	for (int i = 1; i <= 10; i++)
	{
		if (5 == i)
			continue;//当i=5时，终止本次循环continue后面的代码，直接跳转到循环的判断部分
		printf("%d ", i);//1 2 3 4 6 7 8 9 10 
	}
	return 0;
}