#define _CRT_SECURE_NO_WARNINGS 1
//��ϰ��дһ�����������ж�һ�����ǲ�������
//��д�������ʹ�ã���ʵ��
#include<stdio.h>
#include<math.h>
//����������1 ���򷵻�0
int is_prime(int n)
{
	//�Գ���
	int j = 0;
	for (j = 2; j <=sqrt(n); j++)
	{
		if (n % j == 0)
		{
			return 0;//���ܱ�break��ǿ
		}	
	}
	return 1;//j==n	n/2 sqrt(n)
}
int main()
{
	//��ӡ100-200֮�������
	int i = 0;
	for (i = 100; i <= 200; i++) 
	{
		//�ж�i�Ƿ�Ϊ����
		if (is_prime(i) == 1) 
		{
			printf("%d ",i);
		}
	}
	return 0;
}
