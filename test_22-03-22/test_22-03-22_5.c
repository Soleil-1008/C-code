#define _CRT_SECURE_NO_WARNINGS 1
//乘法口诀表
//实现一个函数，打印乘法口诀表，行数和列数自己决定，输入9 9*9  输入12 12*12
#include<stdio.h>
void print_table(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++) 
	{
		int j = 0;
		for (j = 1; j <= i; j++) 
		{
			printf("%d*%d=%-3d", i, j, i * j);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);
	return 0;
}