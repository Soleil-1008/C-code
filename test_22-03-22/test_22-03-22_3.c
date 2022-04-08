#define _CRT_SECURE_NO_WARNINGS 1
//打印二进制的奇数位和偶数位
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
#include<stdio.h>
void Print(int m)
{
	int i = 0;
	printf("奇数位：\n");
	for(i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);//奇数位0000000000000000
	}
	printf("\n");
	printf("偶数位：\n");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (m >> i) & 1);//偶数位0000000000000011
	}
	printf("\n");
}
int main()
{
	//10
	//00000000000000000000000000001010
	int m = 0;
	scanf("%d", &m);
	Print(m);
	return 0;
}