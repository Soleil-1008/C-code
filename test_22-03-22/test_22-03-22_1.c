#define _CRT_SECURE_NO_WARNINGS 1
//��������в�ͬλ�ĸ���
//����int(32λ)����m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ
#include<stdio.h>

/*
int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);//1�ĸ���-�ж��ٸ�������λ��ͬ
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
		tmp = tmp & (tmp - 1);//1�ĸ���-�ж��ٸ�������λ��ͬ
		count++;
	}
	return count;
	
}
int main()
{
	//1.ȡ�������������αȽ� ������Ч
	//2.���--��ͬΪ0 ����Ϊ1
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int count = get_deff_bit(m, n);
	printf("count = %d\n", count);
	return 0;
}
