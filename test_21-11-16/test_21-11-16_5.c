#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����--�򻯴���,���븴�� �Զ��庯�����⺯��
int Add(int x, int y) {//������������ ������ �������� ������
	int z = x + y;
	return z;
}
int main() {
	int sum = 0;
	int num1 = 10;
	int num2 = 20;
	int a = 100;
	int b = 200;
	printf("����������������");
	(void)scanf("%d %d",&num1,&num2);//��scanf_s
	//sum = num1+num2;
	sum = Add(num1,num2);
	//sum = a+b;
	//sum = Add(a,b);
	printf("sum = %d\n",sum);	
	return 0;
}