#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ѭ�����while  for  do while
//while(���ʽ) {ѭ�����;}--���ʽΪ����ִ�����,���ʽΪ��������ѭ��
int main() {
	/*
	if (1)
		printf("haha\n");//haha
	while(1)
		printf("haha\n");//��ѭ��
	*/

	//����Ļ�ϴ�ӡ1-10
	/*
	int i = 1;
	while (i <= 10)
	{
		printf("%d ",i);//1 2 3 4 5 6 7 8 9 10
		i++;
	}*/

	//while�е�break(������������ֹѭ����)--����break��ֹͣ���ڵ�����ѭ����ֱ����ֹѭ����
	/*
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			break;//i=5ʱֹͣ,��������ѭ��
		printf("%d ", i);//1 2 3 4 
		i++;
	}*/

	//while�е�continue(��������ֹ����ѭ����)
	//--����continue��ߵĴ��벻����ִ�У�ֱ����ת��while�����ת����,������һ��ѭ��������ж�
	/*
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			continue;//��ֹ����ѭ��continue����Ĵ��룬ֱ����ת��ѭ�����жϲ���
		printf("%d ", i);//1 2 3 4 ��ѭ��
		i++;
	}*/

	int i = 0;
	while (i < 10)
	{
		i++;//i=i+1;
		if (5 == i)
			continue;//��������ѭ������Ĵ��룬�����ж���һ��ѭ��
		printf("%d ", i);//1 2 3 4 6 7 8 9 10 
	}
	return 0;
}