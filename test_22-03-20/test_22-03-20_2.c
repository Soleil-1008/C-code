#define _CRT_SECURE_NO_WARNINGS 1
//ָ���ָ������
//ָ�����;�����ָ����н����ò���ʱ���ܹ����ʿռ�Ĵ�С
//int* p      *p�ܷ���4���ֽ�
//char* p     *p�ܷ���1���ֽ�
//double* p   *p�ܷ���8���ֽ�
#include<stdio.h>
int main()
{
	/*
	printf("%d\n", sizeof(char*));//32λ��4    64λ��8
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));
	*/

	int a = 0x11223344;//1��16����λ-4��2����λ  ����16����λռ1���ֽ�  ռ4���ֽ�
	/*
	int* pa = &a;
	char* pc = &a;//�о���  ������
	printf("%p\n", pa);
	printf("%p\n", pc);//��ͬ
	*/

	//ָ��Ľ�����
	//�ص��ڵ��ԵĹ����й۲��ڴ�ı仯
	/*
	int* pa = &a;
	*pa = 0;//0x00000000
	*/
	
	char* pc = &a;//�ڴ�0x44332211
	*pc = 0;//0x00332211  ���ʿռ���ֻ����һ���ֽ�

	return 0;
}