#define _CRT_SECURE_NO_WARNINGS 1

//�����������Ͷ���
//���ļ�����д��ʽ
#include<stdio.h>//�������ͷ�ļ�
#include "add.h"//���Լ�д��ͷ�ļ���˫����(��Ϊ�����ļ��ڲ�)
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//��������
	sum = Add(a, b);
	printf("%d\n", sum);//30
	return 0;
}
