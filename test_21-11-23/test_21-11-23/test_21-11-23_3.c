#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ָ��
int main() {
	//ÿ���ڴ浥Ԫ�Ĵ�С�Ǹ��ֽ�
	//�������е�ַ��ȡ��������ַ����

	int a = 10;//������4���ֽڵĿռ�
	printf("%p\n",&a); //&aȡ��ַ

	//��һ�ֱ�����������ŵ�ַ��-ָ�����
	int *p = &a;//p������int*��pΪһ������ָ�����  int *p; p=&a;
	printf("%p\n", &a);//��ӡ��ַ��%p�Ե�ַ��ʽ��ӡ
	printf("%p\n", p);//��ӡ��ַ

	*p = 20;//*-�����ò�����/��ӷ��ʲ�����,�ҵ���Ӧ�Ķ���a��ֵ��Ϊ20,*p����a
	printf("a = %d\n",a);//20

	char ch = 'w';
	&ch;
	char *pc = &ch;//char *pc;pc=7ch
	*pc = 'a';
	printf("%c\n",ch);//%c���ַ���ʽ��ӡ a
	printf("%d\n", sizeof(pc));//4��8
	double d = 3.14;
	double* pd = &d;
	*pd = 5.5;
	printf("d = %lf\n",d);//5.500000��λС��
	printf("d = %lf\n", *pd);
	return 0;
}