#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ�
//��д��������������ʱ���������ַ�������
#include<stdio.h>

//���»�С
//my_strlen("bit")
//1+my_strlen("it")
//1+1+my_strlen("t")
//1+1+1+my_strlen("\0")
//1+1+1+0
int my_strlen(char* str)//strָ��b
{
	//�����ַ�������
	if (*str != '\0') 
	{
		return 1 + my_strlen(str + 1);//strָ��i
	}
	else
	{
		return 0;
	}
}
int main()
{
	char arr[] = "bit";
	//3
	//ģ��ʵ����һ��strlen����
	int len = my_strlen(arr);
	//arr���飬���δ���ȥ�Ĳ����������������Ԫ�ص�ַ
	printf("%d\n", len);//3
	return 0;
}