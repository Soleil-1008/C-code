#define _CRT_SECURE_NO_WARNINGS 1
//扫雷小游戏

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
	//雷的信息存储
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };//11*11
	//2.排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS, '0');//后台
	InitBoard(show, ROWS, COLS, '*');//用户
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);//9*9周围一圈均不打印、不显示  用于设计者查看 可不打印
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);//设计者查看
	//扫雷
	FindMine(mine, show, ROW, COL);//mine-show只需9*9的操作
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//time()函数返回的时间戳作为srand随机数生成器
	do 
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input) 
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("选择错误，请重新选择");
			break;

		}
	} while (input);
}

int main()
{
	test();
	return 0;
}