#pragma once

#define ROW  3
#define COL  3

#include<stdlib.h>
#include<stdio.h>
#include<time.h>

//����
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL],int row,int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void computerBoard(char board[ROW][COL], int row, int col);

//��������״̬
//���Ӯ ��*��
//����Ӯ ��#��
//ƽ�֡�Q��
//���� 'C'
char IsWin(char board[ROW][COL], int row, int col);
//int  IsFull(int board[ROW][COL], int row, int col);