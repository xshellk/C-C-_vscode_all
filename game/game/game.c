#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void PrintGame()
{
	int col = 0;
	int row = 0;
	int k = 0;
	int x = 1;
	int y = 1;
	while (x <= COL)
	{
		printf("  %d ", x);
		if (x == COL)
		{
			printf("\n");
		}
		x++;
	}
	while (1)
	{
		printf("%d ", y);
		y++;
		for (col = 1; col <= COL; ++col)
		{
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
		printf("  ");
		for (row = 1; row <= COL; ++row)
		{
			if (row == COL)
			{
				printf("---\n");
				break;
			}
			printf("---|");
		}
	}
}
static void PrintPler_1(char Game[ROW][COL])
{
	int row = 1;
	int col = 1;
	int k = 0;
	int x = 1;
	int y = 1;

	while (x <= COL)
	{
		printf("  %d ", x);
		if (x == COL)
		{
			printf("\n");
		}
		x++;
	}
	for (row = 1; row <= ROW; ++row)
	{
		printf("%d ", y);
		y++;
		for (col = 1; col <= COL; ++col)
		{
			if (Game[row - 1][col - 1] == '#')
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
			if (Game[row - 1][col - 1] == '*')
			{
				if (col == COL)
				{
					printf(" * \n");
					break;
				}
				else
				{
					printf(" * |");
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
		printf("  ");
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
static void PrintPler(char Game[ROW][COL])
{
	int row = 1;
	int col = 1;
	int k = 0;
	int x = 1;
	int y = 1;
	while (x <= COL)
	{
		printf("  %d ", x);
		if (x == COL)
		{
			printf("\n");
		}
		x++;
	}
	for (row = 1; row <= ROW; ++row)
	{
		printf("%d ", y);
		y++;
		for (col = 1; col <= COL; ++col)
		{
			if (Game[row - 1][col - 1] == '*')
			{
				if ( col == COL)
				{
					printf(" * \n");
					break;
				}
				else
				{
					printf(" * |");
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
		printf("  ");
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
static void PrintComputer(char Game[ROW][COL])
{
	int row = 1;
	int col = 1;
	int k = 0;
	int x = 1;
	int y = 1;
	while (1)
	{
		
		row =rand()%(ROW-1);
		col =rand()%(COL-1);
		if (Game[row][col] != '*'&&Game[row][col] != '#')
		{
			Game[row][col] = '#';
			break;
		}
		else 
		{
			continue;
		}
	}
	while (x <= COL)
	{
		printf("  %d ", x);
		if (x == COL)
		{
			printf("\n");
		}
		x++;
	}
	for (row = 1; row <= ROW; ++row)
	{
		printf("%d ", y);
		y++;
		for (col = 1; col <= COL; ++col)
		{
			if (Game[row - 1][col - 1] == '#')
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
			if (Game[row - 1][col - 1] == '*')
			{
				if (col == COL)
				{
					printf(" * \n");
					break;
				}
				else
				{
					printf(" * |");
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
		printf("  ");
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
static int ChickWin(char Game[ROW][COL])
{
	int row = 1;
	int col = 1;
	for (row = 1; row <= ROW - 2; ++row)
	{
		for (col = 1; col <= COL - 2; ++col)
		{
			if (Game[row - 1][col - 1] == '*'&&Game[row - 1][col] == '*'&&Game[row - 1][col + 1] == '*')//x1
			{
				printf("玩家胜利！\n");
				return 1;
			}
			if (Game[row][col - 1] == '*'&&Game[row][col] == '*'&&Game[row][col + 1] == '*')//x2
			{
				printf("玩家胜利！\n");
				return 1;
			}
			if (Game[row + 1][col - 1] == '*'&&Game[row + 1][col] == '*'&&Game[row + 1][col + 1] == '*')//x3
			{
				printf("玩家胜利！\n");
				return 1;
			}
			if (Game[row - 1][col - 1] == '*'&&Game[row][col - 1] == '*'&&Game[row + 1][col - 1] == '*')//y1
			{
				printf("玩家胜利！\n");
				return 1;
			}
			if (Game[row - 1][col] == '*'&&Game[row][col] == '*'&&Game[row + 1][col] == '*')//y2
			{
				printf("玩家胜利！\n");
				return 1;
			}
			if (Game[row - 1][col + 1] == '*'&&Game[row][col + 1] == '*'&&Game[row + 1][col + 1] == '*')//y3
			{
				printf("玩家胜利！\n");
				return 1;
			}
			if (Game[row - 1][col - 1] == '*'&&Game[row][col] == '*'&&Game[row + 1][col + 1] == '*')//xy1
			{
				printf("玩家胜利！\n");
				return 1;
			}
			if (Game[row + 1][col - 1] == '*'&&Game[row][col] == '*'&&Game[row - 1][col + 1] == '*')//xy2
			{
				printf("玩家胜利！\n");
				return 1;
			}


			if (Game[row - 1][col - 1] == '#'&&Game[row - 1][col] == '#'&&Game[row - 1][col + 1] == '#')//x1
			{
				printf("电脑胜利！\n");
				return 1;
			}
			if (Game[row][col - 1] == '#'&&Game[row][col] == '#'&&Game[row][col + 1] == '#')//x2
			{
				printf("电脑胜利！\n");
				return 1;
			}
			if (Game[row + 1][col - 1] == '#'&&Game[row + 1][col] == '#'&&Game[row + 1][col + 1] == '#')//x3
			{
				printf("电脑胜利！\n");
				return 1;
			}
			if (Game[row - 1][col - 1] == '#'&&Game[row][col - 1] == '#'&&Game[row + 1][col - 1] == '#')//y1
			{
				printf("电脑胜利！\n");
				return 1;
			}
			if (Game[row - 1][col] == '#'&&Game[row][col] == '#'&&Game[row + 1][col] == '#')//y2
			{
				printf("电脑胜利！\n");
				return 1;
			}
			if (Game[row - 1][col + 1] == '#'&&Game[row][col + 1] == '#'&&Game[row + 1][col + 1] == '#')//y3
			{
				printf("电脑胜利！\n");
				return 1;
			}
			if (Game[row - 1][col - 1] == '#'&&Game[row][col] == '#'&&Game[row + 1][col + 1] == '#')//xy1
			{
				printf("电脑胜利！\n");
				return 1;
			}
			if (Game[row + 1][col - 1] == '#'&&Game[row][col] == '#'&&Game[row - 1][col + 1] == '#')//xy2
			{
				printf("电脑胜利！\n");
				return 1;
			}
		}
	}
}
static int ChickWin_1(char Game[ROW][COL])
{
	int row = 1;
	int col = 1;
	for (row = 1; row <= ROW - 2; ++row)
	{
		for (col = 1; col <= COL - 2; ++col)
		{
			if (Game[row - 1][col - 1] == '*'&&Game[row - 1][col] == '*'&&Game[row - 1][col + 1] == '*')//x1
			{
				printf("玩家1胜利！\n");
				return 1;
			}
			if (Game[row][col - 1] == '*'&&Game[row][col] == '*'&&Game[row][col + 1] == '*')//x2
			{
				printf("玩家1胜利！\n");
				return 1;
			}
			if (Game[row + 1][col - 1] == '*'&&Game[row + 1][col] == '*'&&Game[row + 1][col + 1] == '*')//x3
			{
				printf("玩家1胜利！\n");
				return 1;
			}
			if (Game[row - 1][col - 1] == '*'&&Game[row][col - 1] == '*'&&Game[row + 1][col - 1] == '*')//y1
			{
				printf("玩家1胜利！\n");
				return 1;
			}
			if (Game[row - 1][col] == '*'&&Game[row][col] == '*'&&Game[row + 1][col] == '*')//y2
			{
				printf("玩家1胜利！\n");
				return 1;
			}
			if (Game[row - 1][col + 1] == '*'&&Game[row][col + 1] == '*'&&Game[row + 1][col + 1] == '*')//y3
			{
				printf("玩家1胜利！\n");
				return 1;
			}
			if (Game[row - 1][col - 1] == '*'&&Game[row][col] == '*'&&Game[row + 1][col + 1] == '*')//xy1
			{
				printf("玩家1胜利！\n");
				return 1;
			}
			if (Game[row + 1][col - 1] == '*'&&Game[row][col] == '*'&&Game[row - 1][col + 1] == '*')//xy2
			{
				printf("玩家1胜利！\n");
				return 1;
			}


			if (Game[row - 1][col - 1] == '#'&&Game[row - 1][col] == '#'&&Game[row - 1][col + 1] == '#')//x1
			{
				printf("玩家2胜利！\n");
				return 1;
			}
			if (Game[row][col - 1] == '#'&&Game[row][col] == '#'&&Game[row][col + 1] == '#')//x2
			{
				printf("玩家2胜利！\n");
				return 1;
			}
			if (Game[row + 1][col - 1] == '#'&&Game[row + 1][col] == '#'&&Game[row + 1][col + 1] == '#')//x3
			{
				printf("玩家2胜利！\n");
				return 1;
			}
			if (Game[row - 1][col - 1] == '#'&&Game[row][col - 1] == '#'&&Game[row + 1][col - 1] == '#')//y1
			{
				printf("玩家2胜利！\n");
				return 1;
			}
			if (Game[row - 1][col] == '#'&&Game[row][col] == '#'&&Game[row + 1][col] == '#')//y2
			{
				printf("玩家2胜利！\n");
				return 1;
			}
			if (Game[row - 1][col + 1] == '#'&&Game[row][col + 1] == '#'&&Game[row + 1][col + 1] == '#')//y3
			{
				printf("玩家2胜利！\n");
				return 1;
			}
			if (Game[row - 1][col - 1] == '#'&&Game[row][col] == '#'&&Game[row + 1][col + 1] == '#')//xy1
			{
				printf("玩家2胜利！\n");
				return 1;
			}
			if (Game[row + 1][col - 1] == '#'&&Game[row][col] == '#'&&Game[row - 1][col + 1] == '#')//xy2
			{
				printf("玩家2胜利！\n");
				return 1;
			}
		}
	}
}
void PvE_Game(char GameArr[ROW][COL])
{
	int row = 0;
	int col = 0;
	int chick = 0;
	char game[ROW][COL] = { NULL };
	while (1)
	{
		printf("请输入下棋位置:>");
		while (1)
		{
			printf("行：");
			scanf("%d", &row);
			printf("列: ");
			scanf("%d", &col);
			if (game[row - 1][col - 1] == '*' || game[row - 1][col - 1] == '#')
			{
				printf("输入的位置重复，请重新输入:>\n");
				continue;
			}
			else if ((row > ROW) || (col > COL))
			{
				printf("数据输入有误，请重新输入:>");
				continue;
			}
			else
			{
				break;
			}
		}
		game[row-1][col-1] = '*';
		system("cls");
		PrintComputer(game);
		chick = ChickWin(game);
		if (chick == 1)
		{
			break;
		}
	}
}
void PvP_Game(char GameArr[ROW][COL])
{
	int count = 0;
	int row = 0;
	int col = 0;
	int chick = 0;
	char game[ROW][COL] = { NULL };
	while (1)
	{
		printf("请玩家 %d 输入下棋位置:>",count%2+1);
		count++;
		while (1)
		{
			printf("行：");
			scanf("%d", &row);
			printf("列: ");
			scanf("%d", &col);
			if (game[row - 1][col - 1] == '*' || game[row - 1][col - 1] == '#')
			{
				printf("输入的位置重复，请重新输入:>\n");
				continue;
			}
			else if ((row > ROW) || (col > COL))
			{
				printf("数据输入有误，请重新输入:>");
				continue;
			}
			else
			{
				break;
			}
		}
		if (count % 2 == 1)
		{
			game[row - 1][col - 1] = '*';
			system("cls");
			PrintPler_1(game);
		}
		else
		{
			game[row - 1][col - 1] = '#';
			system("cls");
			PrintPler_1(game);
		}
		chick = ChickWin_1(game);
		if (chick == 1)
		{
			break;
		}
	}
}