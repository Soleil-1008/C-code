#pragma once
//��������
#define ROW 3//������(�ɶ��Ը���)
#define COL 3//������

#include<stdio.h>//printf()ͷ�ļ�
#include <stdlib.h>//srand()ͷ�ļ�
#include <time.h>//time()ͷ�ļ�

void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);


//�����Ƿ�����
int IsFull(char board[ROW][COL], int row, int col);

//��������������Ϸ״̬
//���Ӯ - '*'
//����Ӯ - '*'
//ƽ�� - 'Q'
//���� - 'C'
char IsWin(char board[ROW][COL], int row, int col);
