#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ������
//���n��쳲��������������������
#include<stdio.h>

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2) 
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
//TDD-������������(��ʹ���ٿ����ʵ��)
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret = %d\n", ret);
	return 0;
}