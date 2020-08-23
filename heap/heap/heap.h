#define _CRT_SECURE_NO_WARNINGS 1

#ifndef _HEAP_H__
#define  _HEAP_H__
//用堆排序找第N大的数

#include<stdio.h>
#include<stdlib.h>

typedef int HPDataType;
typedef struct Heap 
{ 
	HPDataType* _a;  
	int _size;    
	int _capacity; 
}Heap;

void HeapInit(Heap* hp, HPDataType* a, int n);
void HeapDestory(Heap* hp); 
void HeapPush(Heap* hp, HPDataType x);
void HeapPop(Heap* hp);
HPDataType HeapTop(Heap* hp); 
int HeapSize(Heap* hp);
int HeapEmpty(Heap* hp);// 堆排序 
void HeapSort(int* a, int n);

void TestHeap();



#endif //_HEAP_H__