#define _CRT_SECURE_NO_WARNINGS 1
//��������������Ŀ��-exp1 ? exp2 : exp3
//1Ϊ�� ����2��1Ϊ�� ����3���������ʽ��ֵ��
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;

	//1
	if (a > 5)
		b = 3; 
	else 
		b = -3;
	
	//2
	int b = a > 5 ? 3 : -3;

	//1
	int m = 10;
	int n = 20;
	int max = 0;
	if (a > b)
		max = a;
	else
		max = b;

	//2
	max = (a > b) ? a : b;


}