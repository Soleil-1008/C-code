#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ������
//���n��쳲��������������������
//쳲���������
//1 1 2 3 5 8 13 21 34 55...
//n���ʱЧ��Խ��
//50
//49 48
//48 49 47 48
//47 48 48 49 46 47 47 48

#include<stdio.h>

//������n��쳲���������ʱ��
int count = 0;
int Fib(int n)
{
	if (n == 3)//���Ե�3��쳲��������ļ������
	{
		count++;
	}
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
//TDD-������������(��ʹ���ٿ����ʵ��)
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	ret = Fib(n);
	printf("ret = %d\n",ret);
	printf("count=%d\n",count);
	return 0;
}