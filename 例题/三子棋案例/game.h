#pragma once

#define ROW  3
#define COL  3

#include<stdlib.h>
#include<stdio.h>
#include<time.h>

//声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL],int row,int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void computerBoard(char board[ROW][COL], int row, int col);

//返回四种状态
//玩家赢 ‘*’
//电脑赢 ‘#’
//平局‘Q’
//继续 'C'
char IsWin(char board[ROW][COL], int row, int col);
//int  IsFull(int board[ROW][COL], int row, int col);