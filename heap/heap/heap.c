#define _CRT_SECURE_NO_WARNINGS 1
#include"heap.h"

void HeaoPrint(Heap* hp)
{
	int i = 0;
	for (i = 0; i < hp->_size; i++)
	{
		printf("%d  ", hp->_a[i]);

	}
	putchar('\n');
}
//void adjustDown(Heap* hp,int n)
//{
//	int child = 2 * n + 1;
//	while (child < hp->_size)
//	{
//		if ((hp->_a[child] < hp->_a[child + 1])&&(child + 1)!= hp->_size)
//		{
//			child++;
//
//		}
//		if (hp->_a[n] < hp->_a[child] )
//		{
//			int tmp = hp->_a[child];
//			hp->_a[child] = hp->_a[n];
//			hp->_a[n] = tmp;
//			n = child;
//			child = 2 * n + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//
//
//}
//void HeapInit(Heap* hp, HPDataType* a, int n)
//{
//	int i = 0;
//	hp->_a = (HPDataType*)malloc(n * sizeof(HPDataType));
//	while (i<n)
//	{
//		hp->_a[i] = a[i];
//		i++;
//	}
//	for (i = (n - 2) / 2; i >= 0;i--)
//	{
//		adjustDown(hp,i);
//	}
//
//}

//void adjustDown(Heap *hp, int n)
//{
//	HPDataType cur = 0;
//
//	while (2 * n + 1 < hp->_size)
//	{
//		if (2 * n + 2 == hp->_size)
//		{
//			cur = 2 * n + 1;
//		}
//		else if (hp->_a[2 * n + 1] > hp->_a[2 * n + 2])
//		{
//			cur = 2 * n + 1;
//		}
//		else
//		{
//			cur = 2 * n + 2;
//		}
//
//
//		if (hp->_a[cur] > hp->_a[n])
//		{
//			HPDataType tmp = hp->_a[n];
//			hp->_a[n] = hp->_a[cur];
//			hp->_a[cur] = tmp;
//			n = cur;
//		}
//		else
//		{
//			break;
//		}
//	}
//}

//void adjustDown(Heap *hp, int n)
//{
//	int child = 2 * n + 1;
//	int cur = child;
//	while (child < hp->_size)
//	{
//		if (hp->_size != child + 1 && hp->_a[child + 1] > hp->_a[child])
//		{
//			child++;
//		}
//		if (hp->_a[child] > hp->_a[n])
//		{
//			HPDataType tmp = hp->_a[n];
//			hp->_a[n] = hp->_a[child];
//			hp->_a[child] = tmp;
//			n = child;
//			child = 2 * n + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}


void adjustDown(Heap *hp, int n)
{
	int child = 2 * n + 1;
	while (child < hp->_size)
	{
		if (child != hp->_size&&hp->_a[child + 1] > hp->_a[child])
		{
			child++;

		}
		if (hp->_a[child] > hp->_a[n])
		{
			int tmp = hp->_a[n];
			hp->_a[n] = hp->_a[child];
			hp->_a[child] = tmp;
			n = child;
			child = 2 * n + 1;

		}
		else
		{
			break;
		}
	}
}
void HeapInit(Heap* hp, HPDataType* a, int n)
{
	int i = 0;
	int tmp = 0;
	hp->_a = (HPDataType*)malloc(n * sizeof(HPDataType));
	for (i = 0; i < n; i++)
	{
		hp->_a[i] = a[i];
	}
	for (tmp = n / 2 - 1; tmp >= 0; tmp--)
	{
		adjustDown(hp, tmp);
	}



}



void HeapDestory(Heap* hp)
{
	free(hp->_a);

}
void HeapPush(Heap* hp, HPDataType x)
{
	int n = hp->_size / 2 - 1;
	if (hp->_size == hp->_capacity)
	{
		hp->_a = (HPDataType*)realloc(hp->_a,sizeof(HPDataType)* 2 * hp->_size);
		hp->_capacity = 2 * hp->_size;
	}
	if (2*n+2 >= hp->_size)
	{
		hp->_size++;
		hp->_a[2 * n + 2] = x;
	}
	else
	{
		n += 1;
		hp->_a[2 * n + 1] = x;
		hp->_size++;
	}
	//adjustDown(hp,);


}
void HeapPop(Heap* hp)
{
		if (hp->_size <= 0)
		{
			return;
		}
		int tmp = hp->_a[0];
		hp->_a[0] = hp->_a[hp->_size - 1];
		hp->_a[hp->_size - 1] = tmp;
		hp->_size--;
		adjustDown(hp, 0);

}
HPDataType HeapTop(Heap* hp);
int HeapSize(Heap* hp)
{
	return hp->_size;
}
int HeapEmpty(Heap* hp)// ¶ÑÅÅÐò
{
	return hp->_size == 0;
	
}
void HeapSort(Heap *hp,int num)
{
	int n = hp->_size;

	while (hp->_size > 0)
	{
		num--;
		if (num==0)
		{
			printf("The number is :");
			printf("%d\n", hp->_a[0]);
		}

		HeapPop(hp);
	}

	hp->_size = n;
}

void TestHeap()
{
	Heap hp;
	HPDataType arr[] = { 99, 6, 17, 24, 36, 0 };
	int num = 0;
	hp._capacity = sizeof(arr) / sizeof(arr[0]);
	hp._size = sizeof(arr)/sizeof(arr[0]);

	HeapInit(&hp, arr, hp._size);
	HeaoPrint(&hp);
	scanf("%d", &num);
	HeapSort(&hp,num);
	HeaoPrint(&hp);

	HeapDestory(&hp);



}