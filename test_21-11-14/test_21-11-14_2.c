#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main() {
	//�����������ĺ�
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("����������������");
	//��������-ʹ�����뺯��scanf()
	scanf("%d%d",&num1,&num2);//&ȡ��ַ����
	//int sum = 0;
	//c�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
	sum = num1 + num2;
	printf("sum = %d\n",sum);
	return 0;

}