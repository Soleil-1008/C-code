#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ�:�Ѵ��͸�������ת��Ϊ��ԭ�������ƵĹ�ģ�Ľ�С����
//�ݹ�������Ҫ������
//��������������������ʱ���ݹ鲻�ټ���
//ÿ�εݹ����֮��Խ��Խ�ӽ������������
//����һ������ֵ(�޷���)��˳���ӡÿһλ ���룺1234 �����1 2 3 4
#include<stdio.h>
void print(int n)//n=1234 n=123 n=12 n=1
{
	if (n > 9) 
	{
		print(n/10);//����print()
	}
	printf("%d ",n%10);//1 2 3 4
}
int main()
{
	unsigned int num = 0;
	scanf("%d",&num);//1234
	//�ݹ�
	print(num);
	//print(1234) 
	//print(123) 4
	//print(12) 3 4
	//print(1) 2 3 4
	return 0;
}