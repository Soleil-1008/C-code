#define _CRT_SECURE_NO_WARNINGS 1
//����-sizeof()  strlen()
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = { "abc" };//4���ַ�a b c \0
	char arr2[] = { 'a','b','c'};//3���ַ�a b c
	printf("%d\n", sizeof(arr1));//4
	//sizeof-������-�����ַ�����ռ�ռ�Ĵ�С 4��Ԫ��-char 4*1=4
	printf("%d\n", sizeof(arr2));//3
	printf("%d\n", strlen(arr1));//3
	//strlen-�⺯��-�����ַ�������-\0ֹͣ ������\0
	printf("%d\n", strlen(arr2));//���ֵ-����\0��ֹͣ
	return 0;
}

