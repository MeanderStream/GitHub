#include<iostream>
#include"game.h"
using namespace std;


void menu()
{
	cout << "**************************************" << endl;
	cout << "***********1. PLAY  0. EXIT **********" << endl;
	cout << "**************************************" << endl;
}
//游戏算法实现
void game()
   
{
	char ret = 0;
	
	//数组存放棋盘信息
	char board[ROW][COL] = {0};//全部空格
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);

	while (1)
	{
		
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board, ROW, COL);

		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		computerBoard(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);

		if (ret != 'C')
		{
			break;
		}
	}
		if (ret == '*')
		{
			cout << "玩家赢!"<<endl;
		}
		else if (ret == '#')
		{
			cout << "电脑赢!" << endl;
		}
		else
		{
			cout << "平局!" << endl;
		}
}


void test()
{
	char ret = 0;
	int input;

	srand((unsigned int)time(NULL));
	do
	{
		menu();
		cout << "请选择:>" ;
		cin >> input;
		switch (input)
		{
		case 1:
			cout << endl;
			game();			
			break;
		case 0:
			cout << "退出游戏!" << endl;
			break;
		default:
			cout << "选择错误，请从新选择!" << endl;
			break;
		}
	} while (input);
}

int main()

{
	test();
	return 0;
}