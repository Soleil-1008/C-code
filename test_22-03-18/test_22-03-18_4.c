#define _CRT_SECURE_NO_WARNINGS 1
//�����⣺��������ʱ������ʵ���������Ľ���
#include <stdio.h>
int main()
{ 
	//1.�����������
	/*
	int x = 3;
	int y = 5;
	printf("before: x = %d y = %d\n", x, y);
	int tmp = 0;//��ʱ����
	tmp = x;
	x = y;
	y = tmp;
	printf("after : x = %d y = %d\n", x, y);
	*/

	//2.�Ӽ���
	/*
	int m = 3;
	int n = 5;
	printf("before: m = %d n = %d\n", m, n);
	m = m + n;//8  ���ܳ�����Χ��������ݶ�ʧ�������
	n = m - n;//3
	m = m - n;//5
	printf("after : m = %d n = %d\n", m, n);
	*/

	//3.��򷽷�(�������)
	//ִ��Ч�ʲ��� �ɶ��Խϲ�
	int a = 3;//011
	int b = 5;//101
	printf("before: a = %d b = %d\n", a, b);
	a = a^b;//110
	b = a^b;//011
	a = a^b;//101
	printf("after : a = %d b = %d\n", a, b);
	return 0;
}