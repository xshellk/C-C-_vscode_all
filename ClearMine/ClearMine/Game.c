#define _CRT_SECURE_NO_WARNINGS 1
#include "Game.h"
int ChickCount(char ArrMine[ROW][COL])
{
	int my_count = 0;
	int row = 0;
	int col = 0;
	for (row = 0; row < ROW; ++row)
	{
		for (col = 0; col < COL; ++col)
		{
			if (ArrMine[row][col] == '#' || ArrMine[row][col] == ' ')
			{
				my_count += 1;
			}
		}

	}
	if (my_count == ROW*COL)
	{		
		return 1;
	}
	else
	{
		return 0;
	}
}
//void ChickBlackUp(char ArrMine[ROW][COL],int row,int col)
//{
//	if (ArrMine[row+1][col+1]!='#'&&row+1<ROW&&col+1<COL)
//	{
//		if (ArrMine[row + 2][col + 1] != '#'&&row+2<ROW&&col+1<COL)
//		{
//			ArrMine[row + 2][col + 1] = ' ';
//			return ChickBlackUp(ArrMine, row + 2, col + 1);
//		}
//		if (ArrMine[row][col + 1] != '#'&&row<ROW&&col+1<COL)
//		{
//			ArrMine[row][col + 1] = ' ';
//			return ChickBlackUp(ArrMine, row, col + 1);
//		}		
//		if (ArrMine[row + 1][col + 2] != '#'&&row+1<ROW&&col+2<COL)
//		{
//			ArrMine[row + 1][col + 2] = ' ';
//			return ChickBlackUp(ArrMine, row + 1, col + 2);
//		}		
//		if (ArrMine[row + 1][col] != '#'&&row+1<ROW&&col<COL)
//		{
//			ArrMine[row + 1][col] = ' ';
//			return ChickBlackUp(ArrMine, row + 1, col);
//		}
//	}
//
//
//}
void CountMine(char ArrMine[ROW][COL])
{
	int row = 1;
	int col = 1;
	int k = 0;
	int x = 1;
	int y = 1;//变量声明
	printf("   ");
	while (x <= COL)
	{
		if (x > 9)
		{
			printf("%d  ", x);
		}
		else
		{

			printf(" %d  ", x);
		}
		if (x == COL)
		{
			printf("\n");
		}
		x++;
	}//打印列标
	for (row = 0; row <ROW; ++row)
	{
		printf("%2d ", y++);//打印行号
		for (col = 0; col < COL; ++col)
		{
			int count_mine = 0;
			if (col == COL - 1)
			{
				if (ArrMine[row][col] == ' ')
				{
					if (row == 0 && col == 0)
					{
						if (ArrMine[row + 1][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col + 1] == '#')
							count_mine += 1;

					}
					if (row == ROW - 1 && col == COL - 1)
					{
						if (ArrMine[row - 1][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row - 1][col] == '#')
							count_mine += 1;
						if (ArrMine[row - 1][col + 1] == '#')
							count_mine += 1;


					}
					if (row == ROW - 1 && col == 0)
					{
						if (ArrMine[row - 1][col] == '#')
							count_mine += 1;
						if (ArrMine[row - 1][col + 1] == '#')
							count_mine += 1;
						if (ArrMine[row][col + 1] == '#')
							count_mine += 1;


					}
					if (row == 0 && col == COL - 1)
					{
						if (ArrMine[row][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col] == '#')
							count_mine += 1;
					}
					if (row == 0 && col > 0 && col < COL - 1)
					{
						if (ArrMine[row][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row][col + 1] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col + 1] == '#')
							count_mine += 1;

					}
					if (row == ROW - 1 && col > 0 && col < COL - 1)
					{
						if (ArrMine[row - 1][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row - 1][col] == '#')
							count_mine += 1;
						if (ArrMine[row - 1][col + 1] == '#')
							count_mine += 1;
						if (ArrMine[row][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row][col + 1] == '#')
							count_mine += 1;
					}
					if (col == 0 && row > 0 && row < ROW - 1)
					{
						if (ArrMine[row - 1][col] == '#')
							count_mine += 1;
						if (ArrMine[row - 1][col + 1] == '#')
							count_mine += 1;
						if (ArrMine[row][col + 1] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col + 1] == '#')
							count_mine += 1;
					}
					if (col == COL - 1 && row > 0 && row < ROW - 1)
					{
						if (ArrMine[row - 1][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row - 1][col] == '#')
							count_mine += 1;
						if (ArrMine[row][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col] == '#')
							count_mine += 1;
					}
					if ((row > 0) && (row<(ROW - 1)) && (col>0) && (col < (COL - 1)))
					{
						if (ArrMine[row - 1][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row - 1][col] == '#')
							count_mine += 1;
						if (ArrMine[row - 1][col + 1] == '#')
							count_mine += 1;
						if (ArrMine[row][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row][col + 1] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col + 1] == '#')
							count_mine += 1;

					}//判断雷的数量
					if (count_mine == 0)
					{
						printf("   \n");
					}
					else
					{
						printf(" %d \n", count_mine);
					}
					break;
				}
				printf(" * \n");
				break;
			}
			else
			{
				if (ArrMine[row][col] == ' ')
				{
					if (row == 0 && col == 0)
					{
						if (ArrMine[row + 1][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col + 1] == '#')
							count_mine += 1;

					}
					if (row == ROW - 1 && col == COL - 1)
					{
						if (ArrMine[row - 1][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row - 1][col] == '#')
							count_mine += 1;
						if (ArrMine[row - 1][col + 1] == '#')
							count_mine += 1;


					}
					if (row == ROW - 1 && col == 0)
					{
						if (ArrMine[row - 1][col] == '#')
							count_mine += 1;
						if (ArrMine[row - 1][col + 1] == '#')
							count_mine += 1;
						if (ArrMine[row][col + 1] == '#')
							count_mine += 1;


					}
					if (row == 0 && col == COL - 1)
					{
						if (ArrMine[row][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col] == '#')
							count_mine += 1;
					}
					if (row == 0 && col > 0 && col < COL - 1)
					{
						if (ArrMine[row][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row][col + 1] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col + 1] == '#')
							count_mine += 1;

					}
					if (row == ROW - 1 && col > 0 && col < COL - 1)
					{
						if (ArrMine[row - 1][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row - 1][col] == '#')
							count_mine += 1;
						if (ArrMine[row - 1][col + 1] == '#')
							count_mine += 1;
						if (ArrMine[row][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row][col + 1] == '#')
							count_mine += 1;
					}
					if (col == 0 && row > 0 && row < ROW - 1)
					{
						if (ArrMine[row - 1][col] == '#')
							count_mine += 1;
						if (ArrMine[row - 1][col + 1] == '#')
							count_mine += 1;
						if (ArrMine[row][col + 1] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col + 1] == '#')
							count_mine += 1;
					}
					if (col == COL - 1 && row > 0 && row < ROW - 1)
					{
						if (ArrMine[row - 1][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row - 1][col] == '#')
							count_mine += 1;
						if (ArrMine[row][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col] == '#')
							count_mine += 1;
					}
					if ((row > 0) && (row<(ROW - 1)) && (col>0) && (col < (COL - 1)))
					{
						if (ArrMine[row - 1][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row - 1][col] == '#')
							count_mine += 1;
						if (ArrMine[row - 1][col + 1] == '#')
							count_mine += 1;
						if (ArrMine[row][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row][col + 1] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col - 1] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col] == '#')
							count_mine += 1;
						if (ArrMine[row + 1][col + 1] == '#')
							count_mine += 1;

					}//判断雷的数量
					if (count_mine==0)
					{
						printf("   |");
					}
					else
					{
						printf(" %d |", count_mine);
					}
					continue;
				}
				printf(" * |");
				continue;
			}
			if (col == COL-1)
			{
				printf(" * \n");
				break;
			}
			printf(" * |");
		}//列的打印
		k++;
		if (k == ROW)
		{
			break;
		}//判断行打印的结束
		printf("   ");
		for (col = 0; col < COL; ++col)
		{
			if (col == COL-1)
			{
				printf("---\n");
				break;
			}
			printf("---|");
		}//打印表格的行
	}
}
void PrintMine(char ArrMine[ROW][COL])
{
	int row = 0;
	int col = 0;
	int k = 0;
	int x = 1;
	int y = 1;
	while (x <= COL)//打印列标
	{
		if (x > 9)
		{
			printf("%d  ", x);
		}
		else
		{

			printf(" %d  ", x);
		}
		if (x == COL)
		{
			printf("\n");
		}
		x++;
	}
	for (row = 1; row <= ROW; ++row)
	{
		printf("%2d ", y);	//打印行号
		y++;
		for (col = 1; col <= COL; ++col)
		{
			if (ArrMine[row - 1][col - 1] == '#')//进行字符判定，打印出所存储的字符
			{
				if (col == COL)
				{
					printf(" # \n");
					break;
				}
				else
				{
					printf(" # |");
					continue;
				}
			}
			if (col == COL)
			{
				printf("   \n");
				break;
			}
			printf("   |");
		}
		k++;
		if (k == ROW)
		{
			break;
		}
		printf("   ");
		for (col = 1; col <= COL; ++col)
		{
			if (col == COL)
			{
				printf("---\n");
				break;
			}
			printf("---|");
		}
	}


}
void InitMine(char ArrMine[ROW][COL])
{
	int row = 0;
	int col = 0;
	for (row = 0; row < ROW;++row)
	{
		for (col = 0; col < COL;++col)
		{
			ArrMine[row][col] = 0;
		}
	}
	int count_mine = 0;
	for (count_mine = 1; count_mine <= MINE; ++count_mine)//初始化地雷数组
	{
		while (1)
		{
			row = rand() % (MINE - 1);
			col = rand() % (MINE - 1);
			if (ArrMine[row][col] != '#')
			{
				ArrMine[row][col] = '#';
				break;
			}
		}
	}
	for (row = 0; row < ROW; ++row)
	{
		for (col = 0; col < COL; ++col)
		{
			if (ArrMine[row][col] != '#')
			{
				ArrMine[row][col] = '@';
			}
		}
	}
}
void PrintMap(char ArrMap[ROW][COL])
{
	int row = 1;
	int col = 1;
	int k = 0;
	int x = 1;
	int y = 1;
	printf("   ");
	while (x <= COL)//打印列标
	{
		if (x>9)
		{
			printf("%d  ", x);
		}
		else
		{

			printf(" %d  ", x);
		}		
		if (x == COL)
		{
			printf("\n");
		}
		x++;
	}
	for (row = 1; row <= ROW; ++row)
	{
		printf("%2d ", y);	//打印行号
		y++;
		for (col = 1; col <= COL; ++col)
		{
			if (col == COL)
			{
				printf(" * \n");
				break;
			}
			printf(" * |");
		}
		k++;
		if (k == ROW)
		{
			break;
		}
		printf("   ");
		for (col = 1; col <= COL; ++col)
		{
			if (col == COL)
			{
				printf("---\n");
				break;
			}
			printf("---|");
		}
	}

}
int Game( char ArrMine[ROW][COL])
{
	int row = 0;
	int col = 0;
	InitMine(ArrMine);
	while (1)
	{
		printf("请输入要翻开的行和列:>\n");
		scanf("%d", &row);
		scanf("%d", &col);
		system("cls");
		if (row<1 || row>ROW||col<1 || col>COL)
		{
			printf("输入有误，请重新输入:>\n");
			CountMine(ArrMine);
			continue;
		}
		if (ArrMine[row-1][col-1] == ' ')
		{
			printf("输入数据重复，请重新输入:>\n");
			CountMine(ArrMine);
			continue;
		}
		if (ArrMine[row-1][col-1] == '#')
		{
			PrintMine(ArrMine);
			return 0;
		}
		if (ArrMine[row - 1][col - 1] != '#')
		{

			ArrMine[row - 1][col - 1] = ' ';
			//ChickBlackUp(ArrMine,row-1,col-1);
			if (ChickCount(ArrMine))
			{
				return 1;
			}
			CountMine(ArrMine);
		}

	}


}