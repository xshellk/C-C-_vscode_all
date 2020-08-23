#define _CRT_SECURE_NO_WARNINGS 1

#include "main.h"
void PrintSort(int * ar, int size)
{
	for (int i = 0; i < size; i ++)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
}
void swap(int * a,int * b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void InsertSort(int * ar,int size)
{
	int key = 0;
	for (int i = 1; i < size; i++)
	{
		key = ar[i];

		for (int j = i - 1; j >= 0; j--)
		{
			if (j > 0 && key <= ar[j] && key >= ar[j - 1])
			{
				for (int k = i; k > j; k--)
				{
					ar[k] = ar[k - 1];
				}
				ar[j] = key;
				break;
			}
			else if (j == 0 && key <= ar[j])
			{
				for (int k = i; k > j; k--)
				{
					ar[k] = ar[k - 1];
				}
				ar[j] = key;
				break;
			}
		}
	}

}


void ShellSort(int * ar, int size)
{
	int gap[] = { 5,2,1 };
	int SizeGap = sizeof(gap) / sizeof(int);
	for (int i = 0; i < SizeGap; i++)
	{
		for (int j = 0; j < size - gap[i]; j++)
		{
			if (ar[j] > ar[j + gap[i]])
			{
				swap(&ar[j], &ar[j + gap[i]]);
			}
		}
	}
}
void _QSort(int * ar, int left, int right)
{
	int mid = left;
	while (left >= right)
	{
		if (ar[mid] > ar[right])
		{

		}
	}
}
void QSort(int *ar, int size)
{
	int left = 0;
	int right = size - 1;
	_QSort(ar,left, right);
	
}