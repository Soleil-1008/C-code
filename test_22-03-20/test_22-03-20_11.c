#define _CRT_SECURE_NO_WARNINGS 1
// ָ�������
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int* p = arr;//p��ŵ���������Ԫ�صĵ�ַ �������
	//������-��Ԫ�ص�ַ
	//���⣺
	//1.&arr-��������ʾ�������飬ȡ��������������ĵ�ַ
	//2.sizeof(arr)-��������ʾ��������,���������������Ĵ�С
	printf("%p\n", arr);//������-��Ԫ�ص�ַ  000000067CCFFB98
	printf("%p\n", arr+1);//000000067CCFFB9C
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr);//����һ�� ���岻ͬ ȡ��������������ĵ�ַ �õ�ַ���׵�ַ��ʼ
	printf("%p\n", &arr+1);//000000067CCFFBC0
	return 0;

}