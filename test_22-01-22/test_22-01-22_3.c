#define _CRT_SECURE_NO_WARNINGS 1
//дһ�����룺��ӡ100-200֮�������
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++) 
	{
		//�ж�i�Ƿ�Ϊ����
		//�����жϹ���
		//1.�Գ���
		//����2->i-1������
		int j = 0;//2->i-1
		for (j = 2; j < i; j++) 
		{
			if (i % j == 0) 
			{
				break;
			}
		}
		if (j == i) 
		{
			count++;
			printf("%d ",i);
		}
	}
	printf("\ncount = %d\n",count);//21
	return 0;
}