#define _CRT_SECURE_NO_WARNINGS 1
//�������ε�ʱ�򣬲�������Ҫѹջ��
//�������һ���ṹ������ʱ��,�ṹ�����,����ѹջ�ĵ�ϵͳ�����Ƚϴ�,���Իᵼ�����ܵ��½�
#include<stdio.h>
int Add(int x,int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int ret = 0;
	ret = Add(a, b);//�������� �ȴ�b�ٴ�a
}