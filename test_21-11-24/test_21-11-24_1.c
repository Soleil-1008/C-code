#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//�ṹ��-�Լ��������һ�����ͣ����Ӷ���
struct Book//����һ���ṹ������
{
	char name[20];//C���Գ������ name ����������������һ����ַ
	short price;//55  price ����������ֱ�Ӹ���
};//;����ȱ�٣��������Ͷ���
int main() {
	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
	struct Book b1 = { "C���Գ������",55 };
	printf("������%s\n",b1.name);//������C���Գ���
	printf("�۸�%dԪ\n",b1.price);//�۸�55Ԫ
	//b1.name = "C++";//error name ʵ���Ǹ���ַ������ֱ�Ӹ���
	//strcpy(Ҫ�����ݿ�������ȥ������������������)��������
	strcpy(b1.name,"C++");//�ַ������ķ�ʽstrcpy-string copy-�ַ�������-�⺯��-string.h
	printf("�޸ĺ��������%s\n", b1.name);//C++
	b1.price = 50;
	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);//�޸ĺ�ļ۸�50Ԫ
	struct Book *pb = &b1;//struct Book *-ָ�����ͣ�pbָ�������ָ��b1
	//����pb��ӡ�������ͼ۸�
	//.  ������-�ṹ�����.��Ա
	//-> ������-�ṹ��ָ��->��Ա
	printf("%s\n",(*pb).name);
	printf("%d\n",(*pb).price);
	printf("%s\n", pb->name);//pbָ�����b1��name
	printf("%d\n", pb->price);//pbָ�����b1��price
	return 0;
}