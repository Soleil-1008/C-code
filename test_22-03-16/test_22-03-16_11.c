#define _CRT_SECURE_NO_WARNINGS 1
//������̨������(�������������)--쳲���������
//һֻ����һ�ο������� 1 ��̨�ף�Ҳ��������2 ����
//�����������һ��n ����̨���ܹ��ж���������
//f(n)=f(n-1)+f(n-2)
#include <stdio.h>
#include <stdlib.h>

int D_jump_floor(int n)//�ݹ�
{
	if (n <= 2)
	{
		return n;
	}
	else
	{
		return D_jump_floor(n - 2) + D_jump_floor(n - 1);
	}
}

int FD_jump_floor(int n)//�ǵݹ�-ѭ��
{
	int a = 1;//��һ����
	int b = 2;//�ڶ�����
	int c = a;//��c��ֵΪa
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	printf("����������̨������");
	scanf("%d", &n);
	int ret1 = D_jump_floor(n);
	int ret2 = FD_jump_floor(n);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	system("pause");
	return 0;
}