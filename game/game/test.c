#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int main()
{
	srand((unsigned int)time(NULL));
	int key = 0;
	char GameArr[ROW][COL];
	while (1)
	{
		printf("***************************\n");
		printf("***        1.PvE       ***\n");
		printf("***        2.PvP       ***\n");
		printf("***        0.exit      ***\n");
		printf("**************************\n");
		printf("请选择:>");
		scanf("%d", &key);
		while(key > 2 || key < 0)
		{
			printf("输入有误，请重新选择:>");
			scanf("%d", &key);
		}
		PrintGame();
		if (key == 0)
		{
			break;
		}
		else if (key == 1)
		{
			PvE_Game(GameArr);
		}
		else if (key == 2)
		{
			PvP_Game(GameArr);
		}
	}
	system("pause");
	return 0;
}