#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//do...while()ѭ��
//ѭ��������ִ��һ��
//�﷨   do ѭ����䣻while(���ʽ)��
int main() {
	//1-10
	int i = 1;
	//��ִ�����ж�
	do
	{
		/*
		if (i == 5)
			break;
		//break1 2 3 4  continue1 2 3 4_��ѭ��
		//continue��������ѭ������Ĵ���
		*/
		printf("%d ", i);
		i++;
	}
	while (i <= 10);
	return 0;
}