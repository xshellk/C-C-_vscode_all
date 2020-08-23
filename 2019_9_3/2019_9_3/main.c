#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	/*int i = 10;
	int t = sizeof(i++);*/
	//int s = 0;
	//int n = 0;
	//for (n = 0; n < 4; n++)
	//{
	//	switch (n)
	//	{
	//	default:s += 4;
	//	case 1:s += 1;
	//	
	//	case 2:s += 2;
	//	case 3:s += 3;
	//	
	//	}
	//	
	//			
	//}\

	int k = 0;
	int key = 32;
	int n = 8;
	if (n%2 == 1)
	{
		printf("not");
		return 0;
	}
	while (key > 0)
	{
		n = n >> 1;
		if (n % 2 == 1)
		{
			k++;
			if (k > 1)
			{
				printf("not");
				return 0;
			}
		}
		key--;
	}
	printf("yes");
	return 0;
}