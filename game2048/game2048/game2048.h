#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include<conio.h>

#define ROW 4
#define COL 4
const int copy[ROW][COL];

//��ʼ������ӡ��Ϸ����
void DisplayBoard(int board[ROW][COL]);
//���������������2
void init_num(int board[ROW][COL]);
//���ƶ��������������2��4
void put_num(int board[ROW][COL]);
//�ƶ�
void up(int board[ROW][COL]);
void down(int board[ROW][COL]);
void left(int board[ROW][COL]);
void right(int board[ROW][COL]);
//�ж�ʤ��
int is_win(int board[ROW][COL]);
int is_fail(int board[ROW][COL]);