#define _CRT_SECURE_NO_WARNINGS 1
//��ϰ��д���뽫�������Ӵ�С���
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d %d %d", &a, &b, &c);
	//�㷨ʵ��
	//a���ֵ
	//b�м�ֵ
	//c��Сֵ
	if (a < b)
	{
		int tmp = a;//�����ʱ����
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}