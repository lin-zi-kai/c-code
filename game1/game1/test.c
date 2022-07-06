#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("************************\n");
	printf("*****1.play  0.exit*****\n");
	printf("************************\n");
}

void game()   //���ݴ洢��һ���ַ��Ķ�ά�����У���������ǡ�*�������������ǡ�#����
{
	char board[ROW][COL] = {0}; //���������Ӧ����ȫ���ո�
	InitBoard(board, ROW, COL); //��ʼ������
	DisplayBoard(board, ROW, COL);  //��ӡ����
	char ret = 0;
	//����
	while (1)
	{
		player_move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);	
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		computer_move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}	
	if (ret == '*')
	{
		printf("��Ӯ�ˣ���������\n");
	}
	else if (ret == '#')
	{
		printf("��Ȼ��������ؿ����㣡\n");
	}
	else
		printf("����ɲ���ɲ������˺��˻�ֻ����ƽ�ְ�\n");
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		    case 1:
		    	game();

			    break;
		    case 0:
		    	printf("�˳���Ϸ���´λ�Ҫ����Ŷ:-)\n");
		    	break;
	    	default:
		    	printf("���������˵�ѡ��\n");
		    	break;
		}
	} while (input);
	return 0;
}