#define _CRT_SECURE_NO_WARNINGS 1
//ͳ�ƶ�������1�ĸ���-����
//дһ���������ز�����������1�ĸ���
#include<stdio.h>
/*
//1.ģ2��2
int count_bit_one(int n)
{
	//ģ2��2(����ʱ��������) -1 ���Ϊ0
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
//�Ż�
int count_bit_one(unsigned int n)//nΪ�޷�����  ���λΪ��Чλ
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
//2.��λ�� ����
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

//3.n = n&(n-1)����Ч �м���1ѭ������
//n = n&(n-1) ���ұߵ�1��ʧ
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
	//дһ��������a�Ķ����ƵĲ����ʾ���м���1
	int count = count_bit_one(a);
	//13
	//00000000000000000000000000001101
	//
	printf("count = %d\n", count);
	//system("pause");//system�⺯��-ִ��ϵͳ����-pause����ͣ��
	return 0;
}