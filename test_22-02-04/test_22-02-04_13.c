#define _CRT_SECURE_NO_WARNINGS 1
//�����������Ͷ���
#include<stdio.h>

//��������
//���δ�������о��棺����δ����
int Add(int x, int y);//x��y����ʡ��

int main() 
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//��������
	sum = Add(a, b);
	printf("%d\n",sum);//30
	return 0;
}
//�����Ķ���(ͨ����ǰ�棬�Ͳ��ú�������)
int Add(int x, int y)
{
	int z = x + y;
	return z;
}