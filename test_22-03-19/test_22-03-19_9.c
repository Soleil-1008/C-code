#define _CRT_SECURE_NO_WARNINGS 1
//��������������
#include<stdio.h>
int main() 
{ 
	char a = 0xb6;
	//10110110  ���� ��λ��1
	//1111111111111111111111110110110
	short b = 0xb600;
	int c = 0xb6000000;
	//a��b�������������˸���
	if (a == 0xb6)
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c == 0xb6000000)
		printf("c");//c  c������������
	return 0;
}