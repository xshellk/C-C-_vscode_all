#define _CRT_SECURE_NO_WARNINGS 1
#include "Contects.h"

int NumPeople = 0;//all people
int SizeContect = NUM;//realloc function 
int i = 0;//Show function



void PrintContect(change)// print function
{
	printf("                     **********************************\n");
	printf("                     ******* 1.Add      2.Del    ******\n");
	printf("                     ******* 3.Show     4.Search ******\n");
	printf("                     ******* 5.Modify   6.Modify ******\n");
	printf("                     ******* 7.Save     0.Exit   ******\n");
	printf("                     **********************************\n");
	switch (change)
	{
	case 1:
		printf("Input success\n");
		break;
	case 2:
		if (NumPeople == 0)
		{
			printf("Contect is void\n");
			break;
		}
		else
		{
			printf("Delete success\n");
			break;
		}
 	//case 3:
	//	if (NumPeople == 0)
	//	{
	//		printf("Contect is void ,don't show\n");
	//		break;
	//	}
	case 4:
		if (NumPeople == 0)
		{
			printf("Contect is void ,don't search\n");
			break;
		}
	default:
		break;
	}
	printf("Please do change:>");

}

void SortContact(Contect *people)
{
	Contect tmp;
	int i = 0;
	int j = 0;
	for (i = NumPeople; i > 0;--i)
	{
		if (NumPeople == 1)
		{
			break;
		}
		for (j = 0; j < i;++j)
		{
			if (strcmp(people[j].Name,people[j+1].Name)>0)
			{
				tmp = people[j];
				people[j] = people[j + 1];
				people[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < NumPeople; ++i)
	{
		people[i].Number = i + 1;
	}

}


Contect* AddContect(Contect* people)
{
	assert(people != NULL);
	int tmp = 0;
	int key = 1;

	if (NumPeople == SizeContect)
	{
		int tmp2 = SizeContect;
		SizeContect = SizeContect + tmp2;
		people = (Contect*)realloc(people, SizeContect*sizeof(Contect));
	}

	printf("-----------------------------------------------------------------------------------\n");
	printf("Number   Name          Country    Province    City   Detail      Sex     CallNumber    \n");
	printf("-----------------------------------------------------------------------------------\n");

	printf(" Input name:>");
	scanf("%s", people[NumPeople].Name);
	if (strcmp(people[NumPeople].Name,"exit0")==0)
	{
		return people;
	}


	printf(" Input address(Country):>");
	scanf("%s", people[NumPeople].Address.Country);
	
	printf(" Input address(Province):>");
	scanf("%s", people[NumPeople].Address.Province);
	
	printf(" Input address(City):>");
	scanf("%s", people[NumPeople].Address.City);
	
	printf(" Input address(Detail):>");
	scanf("%s", people[NumPeople].Address.Detail);


	
	printf(" Input sex number( men(0) or women(1) or secret(2) ):>");
	scanf("%d",&tmp);
	while (key)
	{
		if (tmp == 0 || tmp == 1 || tmp == 2)
		{
			people[NumPeople].Sex = tmp;
			key = 0;
		}
		else
		{
			printf("Input error\n");
			scanf("%d", &tmp);
		}
	}
	printf(" Input PhoneNumber:>");
	scanf("%s", people[NumPeople].CallNumber);
	
	++NumPeople;
	return people;
}


Contect* DelContect(Contect* people)
{
	assert(people != NULL);
	char DelName[15] = { 0 };
	int i = 0;

	printf("Please input need delete name(Input rma could delete all name):>");
	scanf("%s", DelName);
	if (strcmp(DelName,"rma")==0)
	{
		NumPeople = 0;
		SizeContect = NUM;
		people = (Contect*)realloc(people, NUM * sizeof(Contect));
	}
	for (i = 0; i < NumPeople;++i)
	{
		if (strcmp(DelName,people[i].Name)==0)
		{
			while (i < NumPeople)
			{
				people[i] = people[i + 1];
				++i;
			}
			--NumPeople;
		}

	}
	if (NumPeople != 0 && NumPeople < SizeContect/2)
	{
		SizeContect /= 2;
		people = (Contect*)realloc(people, SizeContect*sizeof(Contect));
	}

	return people;
}


Contect* ShowContect(Contect* people)
{
	assert(people != NULL);
	SortContact(people);
	printf("-----------------------------------------------------------------------------------\n");
	printf("Number   Name          Country    Province    City   Detail      Sex     CallNumber    \n");
	printf("-----------------------------------------------------------------------------------\n");
	for (i = 0; i < NumPeople;++i)
	{
		printf("%-8d", people[i].Number);
		printf("%-7s", people[i].Name);
		printf("%10s %10s %10s %10s", people[i].Address.Country, people[i].Address.Province, people[i].Address.City, people[i].Address.Detail);
		//printf("%8d", people[NumContect].Sex);
		if (people[i].Sex==0)
		{
			printf("       man");
		}
		else if (people[i].Sex == 1)
		{
			printf("     women");
		}
		else if (people[i].Sex == 2)
		{
			printf("    secret");
		}


		printf("%15s", people[i].CallNumber);
		printf("\n");
	}
	printf("-----------------------------------------------------------------------------------\n");
	printf("\n");
	printf("\n");
	
	return people;

}


Contect* SearchContect(Contect* people)
{
	assert(people != NULL);
	int i = 0;
	char search[15] = { 0 };
	int check = 0;

	printf("Please input you need search name :>");
	scanf("%s", search);
	printf("-------------------------------------------------------------------------------\n");
	printf("Name          Country    Province    City   Detail      Sex     CallNumber    \n");
	for (i = 0; i < NumPeople;++i)
	{
		if (strcmp(search,people[i].Name) == 0)
		{

			printf("%-7s", people[i].Name);
			printf("%10s %10s %10s %10s", people[i].Address.Country, people[i].Address.Province, people[i].Address.City, people[i].Address.Detail);
			printf("%8d", people[i].Sex);
			printf("%15s", people[i].CallNumber);
			printf("\n");

			++check;

		}
	}
	printf("-------------------------------------------------------------------------------\n");
	printf("\n");
	if (check==0)
	{
		printf("Not found\n");
	}
	return people;

}


Contect* ModifyContect(Contect* people)
{
	int j = 0;
	int i = 0;
	int num = 0;
	char tmp[15] = { 0 };
	char Itmp = 0;
	int key = 0;
	int Check = 0;
	int CheckArr[10] = { 0 };

	printf("Change need modify name:>");
	scanf("%s", tmp);
	system("cls");
	printf("-----------------------------------------------------------------------------------\n");// Print pinter
	printf("Number   Name          Country    Province    City   Detail      Sex     CallNumber    \n");
	printf("-----------------------------------------------------------------------------------\n");
	for (i = 0; i < NumPeople; ++i)
	{
		if (strcmp(tmp, people[i].Name) == 0)
		{
			CheckArr[j] = people[i].Number;
			++j;
			++Check;

			printf("%-8d", people[i].Number);
			printf("%-7s", people[i].Name);
			printf("%10s %10s %10s %10s", people[i].Address.Country, people[i].Address.Province, people[i].Address.City, people[i].Address.Detail);
			printf("%8d", people[i].Sex);
			printf("%15s", people[i].CallNumber);
			printf("\n");
			if (Check == 1)
			{
				num = people[i].Number;
			}

		}
	}
	printf("-------------------------------------------------------------------------------\n");
	printf("\n");
	printf("                     *****************************************************\n");
	printf("                     *****                   1.Name                  *****\n");
	printf("                     *****  2.Country  3.Province  4.City  5.Detail  *****\n");
	printf("                     *****                    6.Sex                  *****\n");
	printf("                     *****                7.CallNumber               ******\n");
	printf("                     ******************************************************\n");

	if (Check == 0)
	{
		printf("Contect can't found this name\n");
		return people;
	}
	if (Check == 1)
	{
		printf("Which need be changed of the options :>");
		scanf("%d", &key);
	}
	if (Check > 1)
	{
		printf("Which need be changed of the number and options :>");
		scanf("%d", &num);
		scanf("%d", &key);
		for (j = 0; j < Check;++j)//Check num are invalid
		{
			if (CheckArr[j] == num)
			{
				break;
			}
			if (CheckArr[Check - 1] != num&&j == Check - 1)//If num is invalid
			{
				while (1)
				{
					printf("Input error ,again input\n");
					printf("Which need be changed of the number :>");
					scanf("%d", &num);

					for (j = 0; j < Check; ++j)
					{
						if (CheckArr[j] == num)
						{
							break;
						}
					}
					if (CheckArr[j] == num)
					{
						break;
					}
				}
				if (CheckArr[j] == num)
				{
					break;
				}
			}

		}
		if (key < 1||key > 7)
		{
			printf("Input option is invalid,again:>");
			while (key > 0&&key < 8)
			{
				scanf("%d", &key);
			}

		}


	}



	printf("What are you modify:>");//Input modify
	if (key == 6)//Modify sex
	{
		scanf("%d", &Itmp);
		while (1)//Check sex invalid
		{
			if (Itmp == 0 || Itmp == 1 || Itmp == 2)
			{
				break;
			}
			printf("Input error\n");
			scanf("%d", &Itmp);
		}
	}
	else
	{
		scanf("%s", tmp);
	}
	switch (key) //Modify
	{
	case 1:
		strcpy(people[num - 1].Name, tmp);
		break;
	case 2:
		strcpy(people[num - 1].Address.Country, tmp);
		break;
	case 3:
		strcpy(people[num - 1].Address.Province, tmp);
		break;
	case 4:
		strcpy(people[num - 1].Address.City, tmp);
		break;
	case 5:
		strcpy(people[num - 1].Address.Detail, tmp);
		break; 
	case 6:
		people[num - 1].Sex = Itmp;
		break;
	case 7:
		strcpy(people[num - 1].CallNumber, tmp);
		break;
	default:
		break;
	}
	return people;
}


Contect* WriteContect(Contect* people)
{
	assert(people != NULL);
	int i = 0;
	FILE* FileContect = NULL;
	FileContect = fopen("contact.txt", "w");
	if (FileContect == NULL)
	{
		perror("contect.txt");
		exit(EXIT_FAILURE);
	}
	for (i = 0; i < NumPeople; i++)
	{
		fprintf(FileContect, "%d ", NumPeople);
		fprintf(FileContect, "%s %s %s %s %s %d %s", people[i].Name, people[i].Address.Country, people[i].Address.Province,
			people[i].Address.City, people[i].Address.Detail, people[i].Sex, people[i].CallNumber);
	}

	fclose(FileContect);
	if (NumPeople == 0)
	{
		remove("contact.txt");
	}
	return people;
}


Contect* SaveContect(Contect* people)
{
	assert(people != NULL);
	int i = 0;
	FILE* FileContect = NULL;
	FileContect = fopen("contact.txt", "w");
	if (FileContect == NULL)
	{
		perror("contect.txt");
		exit(EXIT_FAILURE);
	}
	for (i = 0; i < NumPeople; i++)
	{
		fprintf(FileContect, "%d ", NumPeople);
		fprintf(FileContect, "%s %s %s %s %s %d %s", people[i].Name, people[i].Address.Country, people[i].Address.Province,
			people[i].Address.City, people[i].Address.Detail, people[i].Sex, people[i].CallNumber);
	}

	fclose(FileContect);

	return people;
}


Contect* DoChange(int change,Contect *people)//do switch case
{
	switch (change)
	{
	case 1:
		AddContect(people);
		break;
	case 2:
		ShowContect(people);
		DelContect(people);
		break;
	case 3:
		//system("cls");
		ShowContect(people);
		break;
	case 4:
		SearchContect(people);
		break;
	case 5:
		ShowContect(people);
		ModifyContect(people);
		break;
	case 6:
		//system("cls");
		return people;
	case 7:
		SaveContect(people);
		return people;
	case 0:
		WriteContect(people);
		printf("   Exit from Contect \n");
		return people;
	default:
		printf("Input error\n");
		break;
	}
}