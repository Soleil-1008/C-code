#define _CRT_SECURE_NO_WARNINGS 1
//��֧���if switch��ѡ��ṹ��
//C��������һ���ֺ�;�����ľ���һ�����
//; �����-�����
//c������ 0 ��ʾ�� ��0 ��ʾ��
//����֧��if(���ʽ) ���;
//˫��֧��if(���ʽ){����б�1;}  else{����б�2;}
//���֧��if(���ʽ1){����б�1;}  else if(���ʽ2){����б�2;}  else{����б�3;}
//�ж������
#include <stdio.h>
int main()
{ 
	//����֧
	/*
	int age = 10;
	if(age<18) 
		printf("δ����\n");//δ���꣨һ�����ʱ���Բ�Ҫ�����ţ�
	*/

	//˫��֧
	/*
	int age = 22;
	if (age < 18)
	{
		printf("δ����\n");
	}
	else {
		printf("����\n");//����
	}
	*/

	//���֧
	int age1 = 17;
	int age2 = 24;
	if(age1<18)
	{
		printf("δ����\n");//δ����
		printf("����̸����\n");//����̸������ִ�ж������ʱ���ϴ����� һ��{}����һ�������
	}//�����
	else if(age1>=18 && age1<28)//18<age<28  18<17<28  ֵΪ1
		printf("����\n");//һ�����
	else if(age1>=28 && age1<50)
		printf("׳��\n");
	else
		printf("����\n");

	//Ҳ��дΪ���߼���ͬ��
	if (age2 < 18) 
		printf("δ����\n");
	else {
		if (age2 >= 18 && age2 < 28)
			printf("����\n");//����
		else if (age2>=28 && age2<50)  
			printf("׳��\n");
		else
			printf("����\n");
	}//�����
	return 0;
}