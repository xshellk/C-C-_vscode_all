#define _CRT_SECURE_NO_WARNINGS 1
#include"Contects.h"

int main()
{
	Contect *people = NULL;

	int change = 0;
	int i = 0;
	int check = 0;

	FILE* FileContect = fopen("contact.txt", "r");
	if (FileContect != NULL)
	{
		check = fscanf(FileContect, "%d", &NumPeople);
		people = (Contect*)malloc(NumPeople * sizeof(Contect));
		SizeContect = NumPeople;

		for (i = 0; i < NumPeople; ++i)
		{
			fscanf(FileContect, "%s", people[i].Name);
			fscanf(FileContect, "%s", people[i].Address.Country);
			fscanf(FileContect, "%s", people[i].Address.Province);
			fscanf(FileContect, "%s", people[i].Address.City);
			fscanf(FileContect, "%s", people[i].Address.Detail);
			fscanf(FileContect, "%d", &people[i].Sex);
			fscanf(FileContect, "%s", people[i].CallNumber);
		}
		fclose(FileContect);
	}
	else
	{
		people = (Contect*)malloc(SizeContect * sizeof(Contect));
	}
	do{
		PrintContect(change);
		scanf("%d", &change);
		while (change < 0|| change > 7)
		{
			printf("Input error,again:>");
			scanf("%d", &change);
			if (change >= 0&&change <= 7)
			{
				break;
			}
		}
		if (change == 1 || change == 2)
		{
			//system("cls");
		}
		people = DoChange(change, people);

	} while (change);


	free(people);
	people = NULL;
	return 0;
}