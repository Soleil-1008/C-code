#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//for����ѭ�����Ʊ���
//������forѭ�����޸�ѭ����������ֹforѭ��ʧȥ���ƣ���ѭ����
//����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д��
int main()
{
	/*
	int i = 0;
	for (i=0;i<10;i++)
	{
		if (i = 5)//��ֵi=5��iһֱΪ5
			printf("haha ");//haha hehe haha hehe��ѭ��
		printf("hehe ");
	}
	*/

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	//10��ѭ����10�δ�ӡ��10��Ԫ��
	for (i=0;i<10;i++)//ǰ�պ�д��
	//for (i=0;i<=9;i++)���߶��Ǳ�����
	{
		printf("%d ",arr[i]);//1 2 3 4 5 6 7 8 9 10
	}
	return 0;
}