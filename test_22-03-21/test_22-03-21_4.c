#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0x11223344;//ʮ������ ��ʵ����44332211-4���ֽ�
	char* pc = (char*)&a;//a�ĵ�ַǿ��ת��Ϊchar*
	*pc = 0;//ֻ�ܷ���һ���ֽ� 00332211
	printf("%x\n", a);//11223300
	return 0;
}