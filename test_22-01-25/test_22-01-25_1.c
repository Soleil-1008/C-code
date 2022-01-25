#define _CRT_SECURE_NO_WARNINGS 1
//在屏幕上输出9*9乘法口诀表
#include<stdio.h>
int main()
{
	int i = 0;
	//确定打印9行
	for (i = 1; i <= 9; i++) 
	{
		//打印一行
		int j = 1;
		for (j = 1; j <= i; j++) 
		{
			printf("%d*%d=%-2d ",i,j,i*j);
			//%2d-表示打印2位数字右对齐,%-2d表示左对齐
		}
		printf("\n");
	}
	return 0;
}