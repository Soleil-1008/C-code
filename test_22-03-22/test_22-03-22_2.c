#define _CRT_SECURE_NO_WARNINGS 1
//统计二进制中1的个数-补码
//写一个函数返回参数二进制中1的个数
#include<stdio.h>
/*
//1.模2除2
int count_bit_one(int n)
{
	//模2除2(负数时存在问题) -1 输出为0
	//-1
	//10000000000000000000000000000001
	//11111111111111111111111111111110
	//11111111111111111111111111111111
	int count = 0;
	while(n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}
	return count;
}
*/

/*
//优化
int count_bit_one(unsigned int n)//n为无符号数  最高位为有效位
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}
	return count;
}
*/

/*
//2.按位与 右移
int count_bit_one(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
*/

//3.n = n&(n-1)更高效 有几个1循环几次
//n = n&(n-1) 最右边的1消失
//13
//1101  n
//1100  n-1
//1100  n
//1011  n-1
//1000  n
//0111  n-1
//0000  n
int count_bit_one(int n)
{
	int count = 0;
	while(n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	//写一个函数求a的二进制的补码表示中有几个1
	int count = count_bit_one(a);
	//13
	//00000000000000000000000000001101
	//
	printf("count = %d\n", count);
	//system("pause");//system库函数-执行系统命令-pause（暂停）
	return 0;
}