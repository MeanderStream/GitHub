#include<iostream>
#include"game.h"
using namespace std;


void menu()
{
	cout << "**************************************" << endl;
	cout << "***********1. PLAY  0. EXIT **********" << endl;
	cout << "**************************************" << endl;
}
//��Ϸ�㷨ʵ��
void game()
   
{
	char ret = 0;
	
	//������������Ϣ
	char board[ROW][COL] = {0};//ȫ���ո�
	//��ʼ������
	InitBoard(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);

	while (1)
	{
		
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);

		if (ret != 'C')
		{
			break;
		}
		//��������
		computerBoard(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);

		if (ret != 'C')
		{
			break;
		}
	}
		if (ret == '*')
		{
			cout << "���Ӯ!"<<endl;
		}
		else if (ret == '#')
		{
			cout << "����Ӯ!" << endl;
		}
		else
		{
			cout << "ƽ��!" << endl;
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
		cout << "��ѡ��:>" ;
		cin >> input;
		switch (input)
		{
		case 1:
			cout << endl;
			game();			
			break;
		case 0:
			cout << "�˳���Ϸ!" << endl;
			break;
		default:
			cout << "ѡ����������ѡ��!" << endl;
			break;
		}
	} while (input);
}

int main()

{
	test();
	return 0;
}