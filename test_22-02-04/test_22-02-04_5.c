#define _CRT_SECURE_NO_WARNINGS 1
//����
//ʵ��-��ʵ���������Ĳ��������������������ʽ��������
//�β�-�������������еı��� 
//�β�-ֻ���ں��������õĹ����в�ʵ���� �������������֮����Զ�����
#include <stdio.h>
//ʵ�ֺ��������ǲ����������
//�β�ʵ����֮����ʵ�൱��ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ�ε�
//x y ��a b����ͬһ��ַ�ռ�
void Swap1(int x, int y){
	int tmp = 0;
	tmp = x; 
	x = y; //x=2
	y = tmp;//y=1
}
//��ȷ�汾
//void-����Ҫ����ֵ
void Swap2(int *px, int *py){ 
	int tmp = 0; 
	tmp = *px;
	*px = *py;
	*py = tmp;
}

int main(){ 
	int a = 10;
	int* pa = &a; //paָ����� ����int*
	*pa = 20;//�����ò���-ͨ����ַ�ҵ�����
	printf("a = %d\n",a);//20
	int num1 = 1; 
	int num2 = 2; 
	printf("num1 = %d num2 = %d\n", num1, num2);//1 2
	//����Swap1����-��ֵ����
	//�βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
	Swap1(num1, num2); 
	printf("Swap1::num1 = %d num2 = %d\n", num1, num2); //1 2
	//����Swap2����-��ַ����
	//�����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ��
	//�����ڲ�����ֱ�Ӳ��������ⲿ�ı���
	Swap2(&num1, &num2);
	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);//2 1
	return 0;
}