#pragma once
//��������

#define ROW 9//û�зֺ�;
#define COL 9//9*9

#define ROWS ROW+2
#define COLS COL+2//�߽����ɶ��ԣ����Ч��

#define EASY_COUNT 10//���װ汾 �׵ĸ���

#include<stdio.h>//printf()scanf()ͷ�ļ�
#include<stdlib.h>//srand()ͷ�ļ�
#include<time.h>//time()ͷ�ļ�

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
