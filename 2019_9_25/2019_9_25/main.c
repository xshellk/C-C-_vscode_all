#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef struct List
{
	int date;
	struct List* next;

}List;
void InitList(List *ls)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ls->date = i;
		ls->next = (List *)malloc(sizeof(List));
		ls = ls->next;
	}
	ls->date = i;
	ls->next = NULL;

}
List *PushFront(List *ls,int date)
{
	List * tmp = (List *)malloc(sizeof(List));
	tmp->date = date;
	tmp->next = ls;
	return tmp;
}
List *PopFront(List *ls)
{
	List *tmp = ls;
	ls = ls->next;
	free(tmp);
	return ls;
}
void PushBack(List *ls, int date)
{
	while (ls->next)
	{
		ls = ls->next;
	}
	ls->next = (List *)malloc(sizeof(List));
	ls->next->date = date;
	ls->next->next = NULL;
	
}
void PopBack(List *ls)
{
	while (ls->next->next)
	{
		ls = ls->next;
	}
	free(ls->next);
	ls->next = NULL;

}
void PrintList(List *ls)
{
	while (ls->next)
	{
		printf("%d ", ls->date);
		ls = ls->next;
	}
	printf("%d ", ls->date);
	printf("\n");
}
void FreeList(List *ls)
{
	if (ls)
	{
		List *tmp;
		while (ls->next)
		{
			tmp = ls->next;
			free(ls);
			ls = tmp;
		}
		free(ls);
		ls = NULL;
	}
}
int Size(List *ls)
{
	int num = 1;
	while (ls->next)
	{
		num++;
		ls = ls->next;
	}
	return num;
}
void main()
{
	List *ls = (List *)malloc(sizeof(List));
	int date = 23;
	InitList(ls);

	ls = PushFront(ls,date);
	ls =PopFront(ls);
	PushBack(ls,date);
	PopBack(ls);
	PrintList(ls);
	printf("%d\n", Size(ls));
	FreeList(ls);


	return 0;
}




//void Func2(int N)// 计算Func2的时间复杂度？
//{ 
//	int count = 0;
//	for (int k = 0; k < 2 * N; ++k) 
//	{ 
//		++count;
//	}
//
//
//	int M = 10; 
//	while (M--) 
//	{ 
//		++count; 
//	}
//	printf("%d\n", count);
//}
// 
//void Func3(int N, int M)// 计算Func3的时间复杂度？
//{ 
//	int count = 0;
//	for (int k = 0; k < M; ++k)
//	{
//		++count; 
//	}
//	for (int k = 0; k < N; ++k)
//	{ 
//		++count; 
//	}
//	printf("%d\n", count); 
//}
//
//
//
//void Func4(int N)// 计算Func4的时间复杂度？ 
//{
//	int count = 0;
//	for (int k = 0; k < 100; ++k) 
//	{ 
//		++count;
//	}
//	printf("%d\n", count); 
//}
//
//
//void BubbleSort(int* a, int n) // 计算BubbleSort的时间复杂度？ 
//{ 
//	assert(a);
//	for (size_t end = n; end > 0; --end) 
//	{  
//		int exchange = 0;   
//		for (size_t i = 1; i < end; ++i)  
//		{     
//			if (a[i-1] > a[i])  
//			{           
//				Swap(&a[i-1], &a[i]); 
//				exchange = 1;    
//			}  
//		}
//		if (exchange == 0)    
//			break;
//	}
//}
//
//int BinarySearch(int* a, int n, int x)// 计算BinarySearch的时间复杂度？
//{ 
//	assert(a);
//	int begin = 0; 
//	int end = n - 1;
//	while (begin < end)
//	{ 
//		int mid = begin + ((end - begin) >> 1);   
//		if (a[mid] < x)     
//			begin = mid + 1;    
//		else if (a[mid] > x)        
//			end = mid;   
//		else       
//			return mid;
//	}
//
//	return -1;
//}
