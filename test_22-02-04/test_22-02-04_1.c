#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����-�������������ֵ���ṩ�Թ��̵ķ�װ��ϸ�ڵ�����
//�ӷ�����
int Add(int x, int y) 
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);
	int sum = Add(a, b);//�������
	printf("%d\n",sum);
	return 0;
}