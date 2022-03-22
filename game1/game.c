#define _CRT_SECURE_NO_WARNINGS 1
//函数实现
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//遍历  棋盘初始化为空格
	for (i = 0; i < row; i++) 
	{
		for (j = 0; j < col; j++) 
		{
			board[i][j] = ' ';
		}
	}
}

/*
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++) 
	{
		//1.打印一行的数据
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		//2.打印分割行
		if(i < row - 1)
			printf("---|---|---\n");
	}
}
*/
//优化
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
	/*	   |   |   
		---|---|---*/
		int j = 0;
		for (j = 0; j < col; j++) 
		{
			//1.打印一行的数据
			printf(" %c ",board[i][j]);
			if (j < col - 1)
				printf("|");//最后一列不打印|
		}
		printf("\n");
		//2.打印分割行
		if (i < row - 1)
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		printf("\n");
	}
}

//可用goto语句 跳转
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走：>\n");
	while (1) 
	{
		printf("请输入要下的坐标：>");
		scanf("%d%d", &x, &y);
		//判断x y坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)//几行几列
		{
			//判断坐标是否被占用
			if (board[x - 1][y - 1] == ' ') 
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else 
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入！");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走：>\n");
	while (1) 
	{
		x = rand() % row;//rand()生成随机数0-32767
		y = rand() & col;//合法坐标
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//返回1表示棋盘满了 返回0表示棋盘没满
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) 
	{
		for (j = 0; j < col; j++) 
		{
			if (board[i][j] == ' ') //说明没满
			{
				return 0;
			}
		}
	}
	return 1;//没找到board[i][j] == ' '说明棋盘满了
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断横三行
	for (i = 0; i < row; i++) 
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ') 
		{
			return board[i][1];
		}
	}
	//判断竖三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//判断正对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ') 
	{
		return board[1][1];
	}
	//判断反对角线
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//判断是否平局
	if(1 == IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}