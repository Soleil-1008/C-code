#define _CRT_SECURE_NO_WARNINGS 1
//������-λ��������������λ��  
//& ��λ�� | ��λ��  ^ ��λ���  ����������������
#include <stdio.h>
int main()
{ 
	int num1 = 3;//011(32λ)
	int num2 = 5;//101
	int a = num1 & num2;//001(��Ϊ1��Ϊ1)
	int b = num1 | num2;//111(��Ϊ0��Ϊ0)
	int c = num1 ^ num2;//110(����Ϊ1����ͬΪ0)
	printf("%d\n", a);//1
	printf("%d\n", b);//7
	printf("%d\n", c);//6
	return 0;
}