#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//switch(���ͱ��ʽ)
//{�����;}--case ���ͳ������ʽ:���;
//breakʵ��Ч���ǰ�����б���Ϊ��ͬ�Ĳ���---���һ��case����һ��break���
//����break��������û��break���������ִ��
//���Գ���if��䣬����Ҫcontinue
int main() {
	int day = 0;//day ����Ϊ����
	int n = 3;
	scanf_s("%d",&day);//3
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");//weekday
		if (n == 3)
			printf("haha\n");//haha
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
	default://--Ĭ�� ��ǰ��switch���ʽ��ֵ����case������ƥ���ʱִ��
			//���п���,����Ƿ������(��ü���,����λ��,����ź���)
		printf("�������\n");
		break;//��ü���
	}

	/*
	switch (day)
	{
	case 1://�������
		printf("����һ\n");
		break;//��������
	case 2://���ͳ���
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");//������
		break;//����switch���
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	}*/

	/*
	if (1 == day)
		printf("����һ\n");
	else if (2 == day)
		printf("���ڶ�\n");
	else if (3 == day)
		printf("������\n");//������
	else if (4 == day)
		printf("������\n");
	else if (5 == day)
		printf("������\n");
	else if (6 == day)
		printf("������\n");
	else if (5 == day) 
		printf("������\n");*/
	return 0;
}
