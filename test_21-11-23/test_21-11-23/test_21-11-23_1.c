#define _CRT_SECURE_NO_WARNINGS 1
//define���ǹؼ��֣�һ��ָ��
#include <stdio.h>
//static--��̬��(���ξֲ�/ȫ�ֱ����ͺ���)
void test() {
	//static���ξֲ��������ֲ������������ڱ䳤
	//int a = 1;//�ֲ���������������Χ���٣����½���ʱ�����´�����
	static int a = 1;//a��һ����̬�ֲ������������٣������������Դ���
	a++;//aΪ2
	//printf("a = %d\n",a);//a=2 a=2 a=2 a=2 a=2
	printf("a = %d\n", a);//a=2 a=3 a=4 a=5 a=6
}
//static���κ������ı��˺������������ԣ��ı��˺�����������-��׼ȷ��
//��ͨ���������ⲿ�������� static����ʱ-->�ڲ���������
//�����ⲿ����
extern int Add(int,int);
int main() {
	//static--��̬��(���ξֲ�/ȫ�ֱ����ͺ���)
	int i = 0;
	while (i < 5) {
		test();
		i++;
	}
	//static����ȫ�ֱ���,�ı��˱������������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ�ʹ�ã�����Դ�ļ����޷�ʹ��
	//extern-�����ⲿ����
	extern int g_val;
	printf("g_val = %d\n", g_val);//2021
	int a = 10;
	int b = 20;
	int sum = Add(a,b);
	printf("sum = %d\n",sum);//30
	return 0;
}