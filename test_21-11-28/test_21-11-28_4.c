#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//һЩforѭ���ı���
//forѭ���ĳ�ʼ�����жϡ�����������ʡ�ԣ���Ҫ���ʡ�ԣ�
//���жϲ��������ʡ�ԣ����ж��������ǣ���Ϊ��(��ѭ��)
//���鲻Ҫ���ʡ��
int main()
{
	//����1
	/*
	for (;;)
	{
		printf("hehe ");//hehe hehe hehe ��ѭ��
	}
	*/

	/*
	int count = 0;//����
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("haha\n");
			count++;
		}
	}
	printf("%d\n",count);//10*10=100
	*/
	
	int count = 0;//����
	int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		for (; j < 10; j++)
		//i=1��ִ�еڶ���forѭ������j=10������ѭ�����˺�jһֱΪ10����ִ�еڶ���forѭ��
		{
			printf("haha\n");//10��haha
			count++;
		}
	}
	printf("%d\n", count);//10

	//����2
	/*
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("haha\n");//hahahaha
	}*/
	return 0;
}