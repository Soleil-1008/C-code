#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ�
//��д��������������ʱ���������ַ�������
#include<stdio.h>
int my_strlen(char* str)
{
	//�����ַ�������
	int count = 0;//����
	while (*str != '\0')
	{
		count++;
		str++;//ָ��ָ����һ��
	}
	return count;
}

int main()
{
	char arr[] = "bit";
	//2
	//ģ��ʵ����һ��strlen����
	int len = my_strlen(arr);
	//arr���飬���δ���ȥ�Ĳ����������������Ԫ�ص�ַ
	printf("%d\n", len);//3
	return 0;
}