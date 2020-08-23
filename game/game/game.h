#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 5
#define COL 5


#include<time.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void PrintGame();
void PvE_Game(char GameArr[ROW][COL]);
void PeoPrint(int row, int col);
void PvP_Game(char GameArr[ROW][COL]);