#define _CRT_SECURE_NO_WARNINGS 1
//�����������ͱ���a,b��ֵ
#include <stdio.h>
#include <limits.h>
int main() {
	int a = 3;
	int b = 5;
	int c = 0;
	INT_MAX;
	printf("����ǰ��a=%d b=%d\n",a,b);

	//1.�����������-����ɶ��Ըߣ�ִ��Ч�ʸߣ���ҵ�����ã�
	/*
	c = a;
	a = b;
	b = c;
	printf("������a=%d b=%d\n",a,b);*/

	//2.�������������
	/*
	a = a + b;//a-a+b,b-b
	b = a - b;//b�õ�ԭ����a
	a = a - b;//a�õ�ԭ����b
	printf("������a=%d b=%d\n", a, b);*/
	//���⣺������� int-4���ֽ�-32����λ�������ֵ2147483647��

	//3.^-��� �ɶ��Բִ��Ч�ʵ�����������
	//���2������(�������)^��(2����)λ���--��ͬΪ0,����Ϊ1  a:011 b:101
	a = a ^ b;//aΪ110
	b = a ^ b;//bΪ011
	a = a ^ b;//aΪ101
	printf("������a=%d b=%d\n", a, b);
	return 0;
}