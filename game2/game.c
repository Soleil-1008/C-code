#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
//函数实现

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
	//打印列号
	for (i = 0; i <= col; i++) 
	{
		printf("%d ",i);//1 2 3 4 5 6 7 8 9
	}
	printf("\n");//换行
	for (i = 1; i <= row; i++) 
	{
		//打印行号
		printf("%d ",i);//1 2 3 4 5 6 7 8 9
		for (j = 1; j <= col; j++) 
		{
			printf("%c ",board[i][j]);//打印一行信息
		}
		printf("\n");//换行
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;//设置雷的个数
	while (count) 
	{
		int x = rand() % row + 1;//1-9范围  (0-8)+1
		int y = rand() % col + 1;
		if (board[x][y] == '0') 
		{
			board[x][y] = '1';//布置雷
			count--;//布置成功，雷减少1，直到count=0布置完成
		}
	}
}

//'0'-'0'= 0
//'1'-'0'= 1
//'3'-'0'= 3
int get_mine_count(char mine[ROWS][COLS], int x, int y) 
{
	//1.遍历数组 遇到1就count++
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
		printf("请输入排查雷的坐标：>");
		scanf("%d %d", &x, &y);
		//判断坐标是否合法
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//判断是否踩雷
			//踩雷
			if (mine[x][y] == '1') 
			{
				printf("很遗憾，你被炸死了！\n");
				DisplayBoard(mine,row,col);//显示情况 打印9*9
				break;//踩雷跳出循环
			}
			//不是雷
			else 
			{
				//计算x y坐标周围雷的个数
				int count = get_mine_count(mine, x, y);//简化本函数代码
				show[x][y] = count + '0';//放入字符
				DisplayBoard(show,row,col);//打印用户排雷情况
				win++;//排雷成功一次加1
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入：>");
		}
	}
	if (win == row * col - EASY_COUNT) 
	{
		printf("恭喜你，扫雷成功！\n");
		DisplayBoard(mine, ROW, COL);//成功后给用户打印雷盘
	}
}

//展开功能的时候-递归(自己调自己)
//坐标不是雷
//该坐标周围也没有雷