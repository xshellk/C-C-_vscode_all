#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"


int main()
{
	int arr[] = { 1, 5, 2, 3, 6, 9, 7, 8, 3, 5, 2, 1, 6, 9, 7, 8 };
	int num[] = { 3, 5, 2, 1, 6, 9, 7, 8 };
	int size = sizeof(arr) / sizeof(arr[0]);
	//StickSort(num,size);
	//PrintSort(num,size);

	//MergeSort(arr, size);
	
	QuickSort(arr, size);
	PrintSort(arr, size);



	return 0;

}