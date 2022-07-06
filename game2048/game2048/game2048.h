#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include<conio.h>

#define ROW 4
#define COL 4
const int copy[ROW][COL];

//初始化并打印游戏界面
void DisplayBoard(int board[ROW][COL]);
//开局随机生成两个2
void init_num(int board[ROW][COL]);
//在移动后随机放置数字2或4
void put_num(int board[ROW][COL]);
//移动
void up(int board[ROW][COL]);
void down(int board[ROW][COL]);
void left(int board[ROW][COL]);
void right(int board[ROW][COL]);
//判定胜负
int is_win(int board[ROW][COL]);
int is_fail(int board[ROW][COL]);