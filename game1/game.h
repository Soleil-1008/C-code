#pragma once
//函数声明
#define ROW 3//定义行(可读性更高)
#define COL 3//定义列

#include<stdio.h>//printf()头文件
#include <stdlib.h>//srand()头文件
#include <time.h>//time()头文件

void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);


//棋盘是否走满
int IsFull(char board[ROW][COL], int row, int col);

//告诉我们四种游戏状态
//玩家赢 - '*'
//电脑赢 - '*'
//平局 - 'Q'
//继续 - 'C'
char IsWin(char board[ROW][COL], int row, int col);
