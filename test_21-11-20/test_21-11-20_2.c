#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Add(int x, int y) {
	int z = 0;
	z = x + y;
	return z;
}
//������
int main() {
	//��ϵ������  >  >=  <  <=   !=���ڲ���'�����'   ==���ڲ���'���'
	//�߼�������  &&�߼���(����Ϊ�����)  ||�߼���(����Ϊ�ٲ�Ϊ��)
	//0��   !0��
	/*
	int a = 3;
	int b = 5;
	int c = 0;
	int i = 0;
	int d = a && b;
	int e = a && c;
	printf("d = %d\n",d);//d=1
	printf("e = %d\n",e);//e=0
	int f = a || b;
	int g = a || c;
	int h = c || i;
	printf("f = %d\n", f);//f=1
	printf("g = %d\n", g);//g=1
	printf("h = %d\n", h);//h=0
	*/
	//���������� ��Ŀ������  �����ʽ��exp1��exp2��exp3 
	//���ʽ1���Ϊ�� ���ʽ2ִ�н��Ϊ�������ʽ���  ���ʽ1���Ϊ�� ���ʽ3ִ�н��Ϊ�������ʽ���
	int a = 10;
	int b = 20;
	int max = 0;
	max = (a>b?a:b);
	/*
	if (a>b) {
		max = a;
	}
	else {
		max = b;
	}
	*/
	printf("max = %d\n",max);//20
	//���ű��ʽ  exp1��exp2��exp3��....expn
	//�±�����[]����������()�ͽṹ��Ա. ->
	int arr[10] = { 0 };
	arr[4];//[]�±����ò�����
	int sum = Add(a, b);//()�������ò�����
	printf("sum = %d\n",sum);//30
	return 0;
}
