#define _CRT_SECURE_NO_WARNINGS 1
//��������������
#include<stdio.h>
int main() 
{ 
	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4  ��������ͻᷢ����������
	printf("%u\n", sizeof(-c));//4
	printf("%u\n", sizeof(!c));//1
	return 0; 
}