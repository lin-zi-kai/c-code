#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("*****�� 1 �� ʼ �� Ϸ*****\n");
	printf("*****�� 0 �� �� �� Ϸ*****\n");
	printf("**************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 }; //���ò��õ��׵���Ϣ
	char show[ROWS][COLS] = { 0 }; //�����Ų���׵���Ϣ
	InitBoard(mine, ROWS, COLS, '0'); //��ʼ������
	InitBoard(show, ROWS, COLS, '*'); //��ʼ��չʾ����
	SetMine(mine, ROW, COL);
	DisplayBoard(show, ROW, COL); //��ӡչʾ����
	/*DisplayBoard(mine, ROW, COL);*/
	FindMine(mine, show,ROW, COL);
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("�������ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();

			break;
		case 0:
			printf("�˳���Ϸ~)\n");
			break;
		default:
			printf("������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}