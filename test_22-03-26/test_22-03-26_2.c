#define _CRT_SECURE_NO_WARNINGS 1
//�ṹ�ĳ�Ա�����Ǳ��������顢ָ�룬�����������ṹ��
//�ṹ�����ĳ�Ա��ͨ�����������.�����ʵ�
#include<stdio.h>
struct S
{
	int a;
	char c;
	char arr[20];
	double d;
};
struct T
{
	char ch[10];
	struct S s;
	char* pc;
};
int main()
{
	char arr[] = "hello bit\n";
	struct T t = { "hehe", {100,'w',"hello world",3.14}, arr };////�ṹ��Ƕ�׳�ʼ��
	printf("%s\n", t.ch);//hehe
	printf("%s\n", t.s.arr);//hello world
	printf("%lf\n", t.s.d);//3.140000
	printf("%s\n", t.pc);//hello bit
	return 0;

}