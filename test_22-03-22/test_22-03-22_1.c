#define _CRT_SECURE_NO_WARNINGS 1
//求二进制中不同位的个数
//两个int(32位)整数m和n的二进制表达中，有多少个位(bit)不同
#include<stdio.h>

/*
int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);//1的个数-有多少个二进制位不同
		count++;
	}
	return count;
}
*/

int get_deff_bit(int m, int  n)
{
	int tmp = m ^ n;
	//return count_bit_one(tmp);
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);//1的个数-有多少个二进制位不同
		count++;
	}
	return count;
	
}
int main()
{
	//1.取出二进制数依次比较 并不高效
	//2.异或--相同为0 相异为1
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int count = get_deff_bit(m, n);
	printf("count = %d\n", count);
	return 0;
}
