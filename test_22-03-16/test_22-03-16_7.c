#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ������
//��n�Ľ׳ˣ������������
#include<stdio.h>
int Factorial2(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Factorial2(n-1);
}
int main()
{
	//��n�Ľ׳�
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//2.�ݹ鷽ʽ
	ret = Factorial2(n);
	printf("%d\n", ret);
	return 0;
}