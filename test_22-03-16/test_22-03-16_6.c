#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ������
//��n�Ľ׳ˣ������������
#include<stdio.h>
int Factorial1(int n) 
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++) 
	{
		ret *= i;
	}
	return ret;
}
int main()
{
	//��n�Ľ׳�
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	//1.ѭ����ʽ
	ret = Factorial1(n);
	printf("%d\n",ret);
	return 0;
}