#define _CRT_SECURE_NO_WARNINGS 1
//�ؼ���(���ܺͱ�������ͻ)const(����) continue  default(Ĭ��)  enum(ö��) extern(�����ⲿ����)  register(�Ĵ���) struct(�ṹ��) 
// typedef(���Ͷ���) union(������/������)  void(��/��)  volatile(���ȶ��ģ������޳���)
//����� �洢����-Ӳ�� �ڴ� ���ٻ��� �Ĵ������ٶ�Խ��Խ�죬�ռ�Խ��ԽС��CPU-���봦�������������ݴ��ڴ������ݣ�δ���ӼĴ����������ݣ�
#include <stdio.h>
void test() {
	//int a = 1;//�ֲ���������������Χ���٣����½���ʱ�����´�����
	//static���ξֲ��������ֲ������������ڱ䳤
	static int a = 1;//a��һ����̬�ֲ������������٣������������Դ���
	a++;//aΪ2
	//printf("a = %d\n",a);//a=2 a=2 a=2 a=2 a=2
	printf("a = %d\n", a);//a=2 a=3 a=4 a=5 a=6
}
int main() {
	/*
	auto int a = 10;//�ֲ�����-auto�Զ�����(�Զ��������Զ�����)
	register int b = 10;//�����a����ɼĴ���������a�����ʹ�ã�
	signed int c = -10;//int����ı������з��ŵ�
	unsigned int c = 0;//�����޷�����������ҲΪ������
	*/
	//typedef--���Ͷ���--�����ض���
	typedef unsigned int u_int;
	unsigned int num1 = 20;
	u_int num2 = 20;//num1��num2����һ��
	//static--��̬��(���ξֲ�/ȫ�ֱ����ͺ���)
	int i = 0;
	while (i < 5) {
		test();
		i++;
	}
	return 0;
}