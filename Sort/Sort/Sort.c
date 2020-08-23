#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"


void PrintSort(int *num, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", num[i]);
	}
	putchar('\n');
}

//
// void StickSort(int *num, int size)
//{
//	int tmp = 0;
//	int flag = 0;
//	int i = 0;
//	int k = 0;
//	for (flag = 1; flag < size; flag++)
//	{
//		for (i = 0; i < flag; i++)
//		{
//			if (num[flag] < num[i])
//			{
//				tmp = num[flag];
//				for (k = flag - 1; k >= i;k--)
//				{
//					num[k + 1] = num[k];
//				}
//				num[i] = tmp;
//				break;
//			}
//		}
//		
//	}
//	
//}
// void dealMergesort(int *arr, int *p, int start,int end)
// {
//	 int mid = 0;
//	 int i = 0;
//	 int j = 0;
//	 int k = 0;
//
//
//	 if (start < end)
//	 {
//		 mid = (start + end) / 2;
//		 dealMergesort(arr, p, start, mid);
//		 dealMergesort(arr, p, mid + 1, end);
//	 }
//	 i = start;
//	 j = mid + 1;
//	 k = start;
//	 while (i <= mid&&j <= end)
//	 {
//		 if (arr[i] < arr[j])
//		 {
//			 p[k] = arr[i];
//			 k++;
//			 i++;
//		 }
//		 else
//		 {
//			 p[k] = arr[j];
//			 k++;
//			 j++;
//		 }
//	 }
//	while (i <= mid)
//	{
//		p[k] = arr[i];
//		i++;
//		k++;
//	}
//	while (j <= mid)
//	{
//		p[k] = arr[j];
//		j++;
//		k++;
//	}
//	for (i = 0; i <= end; i++)
//	{
//		arr[i] = p[i];
//	}
//
//
// }
//
//
//
// void MergeSort(int *arr, int size)
// {
//	 int *p = (int *)malloc(sizeof(arr));
//	 int start = 0;
//	 int end = size - 1;
//	 dealMergesort(arr, p, start, end);
//	 PrintSort(arr, size);
//	 free(p);
// }
//
void QuickSwap(int *arr, int i, int j)
{
	int tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}
int dealQuickSort(int *arr,int start,int end)
{
	int i = start;
	int j = end;
	int flag = 0;
	while (i < j)// 3, 5, 2, 1, 6, 9, 7, 8
	{
		if (arr[i] > arr[j])
		{
			QuickSwap(arr, i, j);
			flag = !flag;
		}
		flag ? i++ : j--;
	}
	return flag ? j : i;
}
int mySort(int *arr, int start, int end)
{
	int i = start;
	int j = end;
	int flag = 0;
	int mid = 0;
	if (i < j)
	{
		mid = dealQuickSort(arr, i, j);
		mySort(arr, mid + 1, end);
		mySort(arr, start, mid - 1);
	}
}
void QuickSort(int *arr, int size)
{
	int start = 0;
	int end = size - 1;
	mySort(arr, 0, size - 1);
}
