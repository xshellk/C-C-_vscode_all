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
	int y = 1;//��������
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
	}//��ӡ�б�
	for (row = 0; row <ROW; ++row)
	{
		printf("%2d ", y++);//��ӡ�к�
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

					}//�ж��׵�����
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

					}//�ж��׵�����
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
		}//�еĴ�ӡ
		k++;
		if (k == ROW)
		{
			break;
		}//�ж��д�ӡ�Ľ���
		printf("   ");
		for (col = 0; col < COL; ++col)
		{
			if (col == COL-1)
			{
				printf("---\n");
				break;
			}
			printf("---|");
		}//��ӡ������
	}
}
void PrintMine(char ArrMine[ROW][COL])
{
	int row = 0;
	int col = 0;
	int k = 0;
	int x = 1;
	int y = 1;
	while (x <= COL)//��ӡ�б�
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
		printf("%2d ", y);	//��ӡ�к�
		y++;
		for (col = 1; col <= COL; ++col)
		{
			if (ArrMine[row - 1][col - 1] == '#')//�����ַ��ж�����ӡ�����洢���ַ�
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
	for (count_mine = 1; count_mine <= MINE; ++count_mine)//��ʼ����������
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
	while (x <= COL)//��ӡ�б�
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
		printf("%2d ", y);	//��ӡ�к�
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
		printf("������Ҫ�������к���:>\n");
		scanf("%d", &row);
		scanf("%d", &col);
		system("cls");
		if (row<1 || row>ROW||col<1 || col>COL)
		{
			printf("������������������:>\n");
			CountMine(ArrMine);
			continue;
		}
		if (ArrMine[row-1][col-1] == ' ')
		{
			printf("���������ظ�������������:>\n");
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