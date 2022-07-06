#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("************************\n");
	printf("*****1.play  0.exit*****\n");
	printf("************************\n");
}

void game()   //数据存储到一个字符的二维数组中，玩家下棋是‘*’，电脑下棋是‘#’；
{
	char board[ROW][COL] = {0}; //数组的内容应该是全部空格
	InitBoard(board, ROW, COL); //初始化棋盘
	DisplayBoard(board, ROW, COL);  //打印棋盘
	char ret = 0;
	//下棋
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
		printf("你赢了，运气不错。\n");
	}
	else if (ret == '#')
	{
		printf("居然输给电脑重开吧你！\n");
	}
	else
		printf("不会吧不会吧不会有人和人机只打了平手吧\n");
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		    case 1:
		    	game();

			    break;
		    case 0:
		    	printf("退出游戏，下次还要来玩哦:-)\n");
		    	break;
	    	default:
		    	printf("来点正常人的选择\n");
		    	break;
		}
	} while (input);
	return 0;
}