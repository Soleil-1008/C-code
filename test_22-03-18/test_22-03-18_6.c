#define _CRT_SECURE_NO_WARNINGS 1
//������-��ֵ������ =
//���ϸ�ֵ��:����/��λ/λ������+��ֵ������
#include<stdio.h>
int main()
{
	int weight = 120;//����
	weight = 80;
	int a = 10;
	int x = 0;
	int y = 20;
	//a = x = y + 1;//������ֵ(������)
	x = y + 1;
	a = x;

	int m = 10;
	m = m + 10;
	m += 10;//���ϸ�ֵ
	//���������һ���ĵ�������д���Ӽ�ࡣ
	printf("%d\n",m);//30
}