#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ�
//��д��������������ʱ���������ַ�������
#include<stdio.h>
#include<string.h>//strlen()�⺯��

int main()
{
	char arr[] = "bit";
	//1
	int len = strlen(arr);
	printf("%d\n",len);//3(������ '\0')
	return 0;
}