#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
//����ʵ��

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++) 
	{
		for (j = 0; j < cols; j++) 
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++) 
	{
		printf("%d ",i);//1 2 3 4 5 6 7 8 9
	}
	printf("\n");//����
	for (i = 1; i <= row; i++) 
	{
		//��ӡ�к�
		printf("%d ",i);//1 2 3 4 5 6 7 8 9
		for (j = 1; j <= col; j++) 
		{
			printf("%c ",board[i][j]);//��ӡһ����Ϣ
		}
		printf("\n");//����
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;//�����׵ĸ���
	while (count) 
	{
		int x = rand() % row + 1;//1-9��Χ  (0-8)+1
		int y = rand() % col + 1;
		if (board[x][y] == '0') 
		{
			board[x][y] = '1';//������
			count--;//���óɹ����׼���1��ֱ��count=0�������
		}
	}
}

//'0'-'0'= 0
//'1'-'0'= 1
//'3'-'0'= 3
int get_mine_count(char mine[ROWS][COLS], int x, int y) 
{
	//1.�������� ����1��count++
	//ASCII
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1]
		+ mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//9*9-10=71
	while (win < row * col - EASY_COUNT) 
	{
		printf("�������Ų��׵����꣺>");
		scanf("%d %d", &x, &y);
		//�ж������Ƿ�Ϸ�
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�ж��Ƿ����
			//����
			if (mine[x][y] == '1') 
			{
				printf("���ź����㱻ը���ˣ�\n");
				DisplayBoard(mine,row,col);//��ʾ��� ��ӡ9*9
				break;//��������ѭ��
			}
			//������
			else 
			{
				//����x y������Χ�׵ĸ���
				int count = get_mine_count(mine, x, y);//�򻯱���������
				show[x][y] = count + '0';//�����ַ�
				DisplayBoard(show,row,col);//��ӡ�û��������
				win++;//���׳ɹ�һ�μ�1
			}
		}
		else
		{
			printf("��������Ƿ������������룺>");
		}
	}
	if (win == row * col - EASY_COUNT) 
	{
		printf("��ϲ�㣬ɨ�׳ɹ���\n");
		DisplayBoard(mine, ROW, COL);//�ɹ�����û���ӡ����
	}
}

//չ�����ܵ�ʱ��-�ݹ�(�Լ����Լ�)
//���겻����
//��������ΧҲû����