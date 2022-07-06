#define _CRT_SECURE_NO_WARNINGS 1
#include "game2048.h"
  
void menu()
{
	printf("**************************\n");
	printf("*****按 1 开 始 游 戏*****\n");
	printf("*****按 0 退 出 游 戏*****\n");
	printf("**************************\n");
}

void game2048()
{
	int board[ROW][COL] = { {0} };
	int control = 0;
	DisplayBoard(board); 
	init_num(board);
	system("cls"); //清屏，美观界面
	DisplayBoard(board);
	while ((control = _getch()) != 0x1b)
	{ 
		switch (control)
		{
		case 0xe0:
			switch (control = getch())
			{
			    case 72: 
					copyboard(board, copy);
				    up(board);
				    break;
			    case 80: 
					copyboard(board, copy);
			    	down(board);
			    	break;
			    case 75: 
					copyboard(board, copy);
			    	left(board);
				    break;
		    	case 77:  
					copyboard(board, copy);
		    		right(board);
				    break;
		    	default:
			    	break;
			}
			
		system("cls");
		DisplayBoard(board);
		if (is_win(board) == 1)
		{
			printf("恭喜你赢了！\n");
		}
		if (is_fail(board) == 1)
		{
			printf("哈哈哈哈哈哈哈好菜\n");
		}
		}
	}	
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));	
	do
	{	menu();
	    printf("请选择：");
	    scanf("%d", &input);
		switch (input)
		{
		    case 1:
			    game2048();

			    break;
		    case 0:
		    	printf("退出游戏，客官常来玩呀~)\n");
		    	break;
		    default:
			    printf("给你一次重新选择的机会\n");
		    	break;
		}
	} while (input);
	return 0;
}