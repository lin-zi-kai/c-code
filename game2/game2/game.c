#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
			board[i][j] = set;
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("----------É¨À×---------\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------É¨À×---------\n");
}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{		
		int x = rand() % row + 1;   		
		int y = rand() % col + 1;	
		if (mine[x][y] == '0')	
		{	
			mine[x][y] = '1';		
			count--;	
		}
	}
}

static int get_mine_count(char mine[ROWS][COLS], int x,int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x - 1][y + 1] +
		mine[x][y - 1] + mine[x][y + 1] + 
		mine[x + 1][y] + mine[x + 1][y - 1] + mine[x + 1][y + 1] - 8 * '0';
}

void count(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	if (get_mine_count(mine, x, y) == 0)
	{
		show[x][y] = ' ';
		for (i = x - 1; i <= x + 1; i++)
		{			
			for (j = y - 1; j <= y + 1; j++)
			{
				if (i > 0 && i <= ROW && j > 0 && j <= COL && mine[i][j] != '1' && show[i][j] == '*')
				{
					count(show, mine, i, j);
				}
			}
		}
	}
	else
		show[x][y] = '0' + get_mine_count(mine, x, y);
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int i = 0;
	int j = 0;
	while (1)
	{
		printf("ÇëÊäÈëÒªÅÅ²éµÄ×ø±ê£º");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("ÄãÁ¹ÁË¹þ¹þ¹þ¹þ¹þ¹þ¹þ¹þ¹þ¹þ\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int n = get_mine_count(mine, x, y);
				show[x][y] = n + '0';
				count(show, mine, x, y);
				system("cls");
				DisplayBoard(show, row, col);
			}
		}
		else
		{
			printf("ÍùÄÄÅÅÀ×ÄØÄã£¬ÖØÐÂÀ´\n");
		}
		int mines = 0;
		for (i = 1; i <= ROW; i++)
		{		
			for (j = 1; j <= COL; j++)
			{
				if (show[i][j] == '*')
					mines++;
			}
		}
		if (EASY_COUNT == mines)
		{
			printf("²»´íÅ¶£¬ÄãÓ®ÁË£¡\n");
			break;
		}
	}
}