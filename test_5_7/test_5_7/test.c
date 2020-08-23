#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int arr[15] = 0;
	int i = 0;
	int key;

	for (i = 0; i < sizeof(arr) / sizeof(arr[0]);++i)
	{
		arr[i] = i + 3;
	}
	printf("put in your number are want search:\n");
	scanf("%d", key);

	system("pause");
	return 0;
}



//put something of picture
//#include<stdio.h>
//
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int layer = 7;
//	for (i = 1; i <= layer; i++)
//	{
//		for (num = 0; num < (i * 2) - 1; num++)
//		{
//			printf("*");
//		}
//		putchar('\n');
//	}
//	for (i = layer - 1; i > 0; i--)
//	{
//		for (num = 0; num <= (i * 2) - 3; num++)
//		{
//			printf("*");
//		}
//		putchar('\n');
//	}
//	system("pause");
//	return 0;
//}




//#include<stdio.h>
//
//int main()
//{
//	int number = 0;
//	for (number = 0; number < 1000; number++)
//	{
//		if (number<100 && number>9)
//		{
//			if (number == (number / 10)*(number / 10)*(number / 10) + (number % 10)*(number % 10)*(number % 10))
//			{
//				printf("%d\n", number);
//			}
//		}
//		if (number<1000 && number>99)
//		{
//			if (number == (number / 100)*(number / 100)*(number / 100)\
//				+ ((number / 10) % 10)*((number / 10) % 10)*((number / 10) % 10)\
//				+ (number % 10)*(number % 10)*(number % 10))
//			{
//				printf("%d\n", number);
//			}
//		}
//	}
//
//
//
//	system("pause");
//	return 0;
//}