#define _CRT_SECURE_NO_WARNINGS 1
//������-���������� +  -  *  \  %
#include<stdio.h>
int main()
{
	int a = 5 / 2;//ȡ��2  ��
	int b = 5 % 2;//ȡ��1  ģ
	//int b = 5 % 2.0; //error ������������������
	double c = 5 / 2.0;//2.500000 Ĭ��6λС��
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %lf\n", c);
	return 0;
}