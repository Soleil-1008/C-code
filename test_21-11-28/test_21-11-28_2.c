#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//forѭ���е�break��continue
int main()
{
	/*
	for (int i = 1; i <= 10; i++)
	{
		if (5 == i)
			break;//��i=5ʱ����������ѭ��
		printf("%d ", i);//1 2 3 4 
	}
	*/
	for (int i = 1; i <= 10; i++)
	{
		if (5 == i)
			continue;//��i=5ʱ����ֹ����ѭ��continue����Ĵ��룬ֱ����ת��ѭ�����жϲ���
		printf("%d ", i);//1 2 3 4 6 7 8 9 10 
	}
	return 0;
}