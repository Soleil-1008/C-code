#define _CRT_SECURE_NO_WARNINGS 1
//ɨ��С��Ϸ

#include "game.h"

void menu()
{
	printf("**********************\n");
	printf("****** 1 . play ******\n");
	printf("****** 0 . exit ******\n");
	printf("**********************\n");
}

void game()
{
	//�׵���Ϣ�洢
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//11*11
	//2.�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');//��̨
	InitBoard(show, ROWS, COLS, '*');//�û�
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);//9*9��ΧһȦ������ӡ������ʾ  ��������߲鿴 �ɲ���ӡ
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);//����߲鿴
	//ɨ��
	FindMine(mine, show, ROW, COL);//mine-showֻ��9*9�Ĳ���
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//time()�������ص�ʱ�����Ϊsrand�����������
	do 
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input) 
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;

		}
	} while (input);
}

int main()
{
	test();
	return 0;
}