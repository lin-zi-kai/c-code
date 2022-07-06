#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("*****按 1 开 始 游 戏*****\n");
	printf("*****按 0 退 出 游 戏*****\n");
	printf("**************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 }; //放置布置的雷的信息
	char show[ROWS][COLS] = { 0 }; //放置排查出雷的信息
	InitBoard(mine, ROWS, COLS, '0'); //初始化雷盘
	InitBoard(show, ROWS, COLS, '*'); //初始化展示界面
	SetMine(mine, ROW, COL);
	DisplayBoard(show, ROW, COL); //打印展示界面
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
		printf("做出你的选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();

			break;
		case 0:
			printf("退出游戏~)\n");
			break;
		default:
			printf("请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}