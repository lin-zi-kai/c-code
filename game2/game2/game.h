#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

#define ROW 9 
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

//初始化雷盘或展示界面
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//打印展示界面
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col);
//排雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);