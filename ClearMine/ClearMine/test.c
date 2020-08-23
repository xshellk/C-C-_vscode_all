#define _CRT_SECURE_NO_WARNINGS 1
#include "Game.h"
int main()
{
	int Chick = 0;
	srand((unsigned int)time(NULL));
	char ArrMine[ROW][COL] = { 0 };
	char ArrMap[ROW][COL] = { 0 };

	int key = 0;
	printf("================================\n");
	printf("======      1.Start       ======\n");
	printf("======      0.Exit        ======\n");
	printf("================================\n");
	while (1)
	{
		printf("ÇëÑ¡Ôñ:>");
		scanf("%d", &key);
		if (key == 1)
		{
			PrintMap(ArrMap);
			Chick = Game(ArrMine);
		
		}
		else if (key > 1 && key < 0)
		{
			continue;
		}
		else
		{
			break;
		}
		if (Chick == 0)
		{
			printf("ÓÎÏ·½áÊø£¬Íæ¼ÒÉ¨À×Ê§°Ü£¡\n");
			printf("================================\n");
			printf("======      1.Start       ======\n");
			printf("======      0.Exit        ======\n");
			printf("================================\n");
		}
		if (Chick == 1)
		{
			printf("ÓÎÏ·½áÊø£¬Íæ¼ÒÉ¨À×³É¹¦£¡\n");
			printf("================================\n");
			printf("======      1.Start       ======\n");
			printf("======      0.Exit        ======\n");
			printf("================================\n");
		}
	}
	system("pause");
	return 0;

}
