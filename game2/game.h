#pragma once
//函数声明

#define ROW 9//没有分号;
#define COL 9//9*9

#define ROWS ROW+2
#define COLS COL+2//边界计算可读性，提高效率

#define EASY_COUNT 10//简易版本 雷的个数

#include<stdio.h>//printf()scanf()头文件
#include<stdlib.h>//srand()头文件
#include<time.h>//time()头文件

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
