#define _CRT_SECURE_NO_WARNINGS 1
//Ұָ��-ָ��ָ��Ŀռ��ͷ�-��̬�ڴ濪�ٽ���
#include<stdio.h>
int* test() 
{
	int a = 10;//�ֲ����� ���봴�� ��ȥ�ͷ�
	return &a; 
}
int main()
{
	int* p = test();
	*p = 20;//���ʵĿռ��Ѿ��ͷ� ����ϵͳ
	printf("%d\n", *p);//��ʱ���ʵĿռ�Ƿ�
	return 0;
}