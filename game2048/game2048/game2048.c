#define _CRT_SECURE_NO_WARNINGS 1
#include "game2048.h"

void DisplayBoard(int board[ROW][COL])
{
    int i = 0;
    int j = 0;
    printf("tip：*方向键控制方块移动*ESC键返回菜单*\n");
    for (int j = 0; j < COL; j++)
        printf("+-----");
    printf("+\n");
    for (int i = 0; i < ROW; i++)
    {
        for (int j= 0; j < COL; j++)
        {
            printf("|");
            if (board[i][j]!=0)
                printf("%5d", board[i][j]);

            else
                printf("     ");
        }
        printf("|\n");
        for (int j = 0; j < COL; j++)
        {
            printf("+-----");
        }
        printf("+\n");
    }    
}

void init_num(int board[ROW][COL])
{
	int x, y;
	x = rand() % ROW;
	y = rand() % COL;	
	board[x][y] = 2;//随机在一个位置生成2
	x = rand() % ROW;
	y = rand() % COL;
	while (board[x][y] == 2) 
    {
		x = rand() % ROW;
		y = rand() % COL;
	}
	board[x][y] = 2; 
	return;
}

void put_num(int board[ROW][COL])
{
	int x = 0;
	int y = 0; 
	int z = 0;	
	x = rand() % ROW;
	y = rand() % COL;
	while (board[x][y] !=0)
	{
		x = rand() % ROW;
		y = rand() % COL;
	}
	z = rand() % 10;
	if (z<9)	
		board[x][y] = 2;	
	else	
		board[x][y] = 4;	
	return;
}
				
void up(int board[ROW][COL])
{
	int i = 0; 
	int j = 0;
	int x = 0;
	int y = 0;
	for (i = 0; i < ROW; i++)
	{
		//移动
		j = 0;
		y = 0;
		while (j < COL-1 && y < COL-1 )
		{
			if (board[j][i] == 0) 
			{
				for (x = j; x < ROW-1; x++)
					board[x][i] = board[x + 1][i];
				board[ROW-1][i] = 0;	
				y++;
			}
			else
				j++; 
		}
		//合并
		for (j = 0; j < COL-1; j++)
			if (board[j][i] == board[j + 1][i] && board[j][i] != 0) 
			{											 
				board[j][i] = board[j][i] * 2;
				board[j + 1][i] = 0;		
			}
		//再次移动补空
		j = 0;
		y = 0;
		while (j < COL - 1 && y < COL - 1)
		{
			if (board[j][i] == 0)
			{
				for (x = j; x < ROW - 1; x++)
					board[x][i] = board[x + 1][i];
				board[ROW - 1][i] = 0;
				y++;
			}
			else
				j++;
		}
	}
	if (contrast(board) == 0)
		put_num(board);
	else
		return;
}

void down(int board[ROW][COL])
{
	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;
	for (i = 0; i < ROW; i++)
	{
		j = COL-1;
		y = 0;
		while (j > 0 && y < COL-1)
		{
			if (board[j][i] == 0)
			{
				for (x = j; x > 0; x--)
					board[x][i] = board[x - 1][i];
				board[0][i] = 0;
				y++;
			}
			else 
				j--;
		}
		for (j = COL-1; j > 0; j--)
			if (board[j][i] == board[j - 1][i] && board[j][i] != 0)
			{
				board[j][i] = board[j][i] * 2;
				board[j - 1][i] = 0;			
			}
		j = COL - 1;
		y = 0;
		while (j > 0 && y < COL - 1)
		{
			if (board[j][i] == 0)
			{
				for (x = j; x > 0; x--)
					board[x][i] = board[x - 1][i];
				board[0][i] = 0;
				y++;
			}
			else
				j--;
		}
	}
	if (contrast(board) == 0)
		put_num(board);
	else
		return;
}
			
void left(int board[ROW][COL])
{
	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;
	for (i = 0; i < ROW; i++)
	{
		j = 0; 
		y = 0;
		while (j < 3 && y < 3 )
		{
			if (board[i][j] == 0)
			{
				for (x = j; x < ROW-1; x++)
					board[i][x] = board[i][x + 1];
				board[i][COL-1] = 0;
				y++;
			}
			else
				j++;
		}
		for (j = 0; j < 3; j++)
			if (board[i][j] == board[i][j + 1] && board[i][j] != 0)
			{
				board[i][j] = board[i][j] * 2;
				board[i][j + 1] = 0;
			}
		j = 0; 
		y = 0;
		while (j < 3 && y < 3)
		{
			if (board[i][j] == 0)
			{
				for (x = j; x < ROW - 1; x++)
					board[i][x] = board[i][x + 1];
				board[i][COL - 1] = 0;
				y++;
			}
			else
				j++;
		}
	}
	if (contrast(board) == 0)
		put_num(board);
	else
		return;
}

void right(int board[ROW][COL])
{
	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;
	for (i = 0; i < 4; i++)
	{
		j = COL-1;
		y = 0;
		while (j>0 && y < COL-1)
		{
			if (board[i][j] == 0)
			{
				for (x = j; x > 0; x--)
					board[i][x] = board[i][x - 1];
				board[i][0] = 0;
				y++;
			}
			else j--;
		}
		for (j = 3; j > 0; j--)
			if (board[i][j] == board[i][j - 1] && board[i][j] != 0)
			{
				board[i][j] = board[i][j] * 2;
				board[i][j - 1] = 0;
			}
		j = COL - 1;
		y = 0;
		while (j > 0 && y < COL - 1)
		{
			if (board[i][j] == 0)
			{
				for (x = j; x > 0; x--)
					board[i][x] = board[i][x - 1];
				board[i][0] = 0;
				y++;
			}
			else j--;
		}
	}
	if (contrast(board) == 0)
		put_num(board);
	else
		return;
}

int is_fail(int board[ROW][COL])
{
	int i = 0; 
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] == 0)
				return 0;
			if (i > 0)
			{
				if (board[i - 1][j] == board[i][j])
					return 0;
			}
			if (j > 0)
			{
				if (board[i][j - 1] == board[i][j])
					return 0;
			}
		}
	}
	return 1;
}

int is_win(int board[ROW][COL])
{	
	int i = 0;
	int j = 0;
	int num = 0;
	for (i = 0; i < ROW; i++)
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] > num)
				num = board[i][j];
		}
	if (num >= 2048)
		return 1;
	else
		return 0;
}

void copyboard(int board[ROW][COL],int copy[ROW][COL])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
		for (j = 0; j < COL; j++)
			copy[i][j] = board[i][j];
}

int contrast(int board[ROW][COL])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			if (copy[i][j] != board[i][j])
				return 0;
	return 1;
}

