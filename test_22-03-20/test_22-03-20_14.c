#define _CRT_SECURE_NO_WARNINGS 1
//ָ������-����-���ָ�������
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//��������-�������
	//�ַ�����-����ַ�
	//ָ������-���ָ��
	//int arr[10];
	int* arr2[3] = { &a,&b,&c };//ָ������
	//arr2[0];//��һ��Ԫ��&a a�ĵ�ַ
	int i = 0;
	for (i = 0; i <= 3; i++)
	{
		printf("%d ", *(arr2[i]));//10 20 30
	}
}