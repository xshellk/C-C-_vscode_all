#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>


//
////#define ROW 4;
////#define COL 4;
//
//int main()
//{
//	//int arr[4][4] = { 
//	//	1,2,8,9,
//	//	2,4,9,12,
//	//	4,7,10,13,
//	//	6,9,11,15 };
//	//int a = 0;
//	//int row = 0;
//	//int col = 0;
//	//int flag = 0;
//
//	//scanf("%d", &a);
//	//while (a>arr[row][col]&&row != 3&&col != 3)
//	//{
//	//	++col;
//	//	++row;
//	//}
//
//
//	//if (a==arr[row][col])
//	//{
//	//	printf("Row = %d     Col = %d\n", row + 1, col + 1);
//	//	system("pause");
//	//	return 0;
//	//	
//	//}
//	//else if (row == 3||col == 3)
//	//{
//	//	printf("Not found\n");
//	//	system("pause");
//	//	return 0;
//
//	//}
//
//
//	//flag = row;
//	//while (a != arr[row][col] && row > 0)//row
//	//{
//	//	--row;
//	//}
//	//if (a == arr[row][col])
//	//{
//	//	printf("Row = %d     Col = %d\n", row + 1, col + 1);
//	//	system("pause");
//	//	return 0;
//	//	
//	//}
//	//else if (row < 0)
//	//{
//	//	printf("Not found\n");
//	//	system("pause");
//	//	return 0;
//	//	
//	//}
//	//
//
//
//
//	//row = flag;
//	//while (a != arr[row][col] && col > 0)//col
//	//{
//	//	--col;
//	//}
//	//if (a == arr[row][col])
//	//{
//	//	printf("Row = %d     Col = %d\n", row + 1, col + 1);
//	//	system("pause");
//	//	return 0;
//	//	
//	//}
//	//else if (col < 0)
//	//{
//	//	printf("Not found\n");
//	//	system("pause");
//	//	return 0;
//	//	
//	//}
//	//printf("Row = %d     Col = %d\n", row+1, col+1);
//
//	//typedef struct 
//	//{
//	//	/*int nm;
//	//	char sd;
//	//	short sde;
//	//	char sdf;
//	//	double adf;*/
//	//	char af;
//	//	short sadf;
//
//	//	char afs;
//	//	int sf;
//	//}a;
//
//	// 	char a[] = "helloword";
//	// 	printf("%d\n", sizeof(a));
//	// 	int one = 1;
//	// 	int two = 2;
//	// 	int num = 0;
//	// 	int fib = 0;
//	// 	scanf("%d", &num);
//	// 	if (num==1)
//	// 	{
//	// 		printf("%d\n", one );
//	// 		system("pause");
//	// 		return 0;
//	// 	}
//	// 	if (num == 2)
//	// 	{
//	// 		printf("%d\n", two );
//	// 		system("pause");
//	// 		return 0;
//	// 	}
//	// 	while (num != 2)
//	// 	{
//	// 		fib = one + two;
//	// 		--num;
//	// 		one = two;  
//	// 		two = fib;
//	// 	}
//	// 	printf("%d\n", fib);
//
//// 
//// 	char a[20];
//// 	char *p1 = (char *)a;
//// 	char *p2 = (char *)(a + 1);
//// 	printf("%d\n", p1);
//
//// enum MyEnum
//// {
//// 	a,
//// 	b
//// };
//// enum MyEnum en = a;
//// 
//// 	printf("%d\n", a);
//	
//	system("pause");
//	return 0;
//	
//
//}

//void test(mylist, k)
//{
//	int *p = mylist;
//	int num = 0;
//	while (p->next != NULL)
//	{
//		p = p->next;
//		num++;
//	}
//	p = mylist;
//	num -= k;
//	while (num--)
//	{
//		p = p->next;
//	}
//	return p; 
//
//}




// file information
//typedef struct mylist
//{
//	int mydate;
//	struct mylist *mynext;
//}mylist;
//
//mylist test(mylist headlist)
//{ 
//	mylist *bef = headlist.mynext;
//	mylist *plist = bef->mynext;
//  	mylist *aft = plist->mynext;
//	bef->mynext = NULL;
//
//	while (aft->mynext != NULL)
//	{
//		plist->mynext = bef;
//		bef = plist;
//		plist = aft;
//		aft = aft->mynext;
//	}
//	plist->mynext = bef;//最后一次的换头操作
//	aft->mynext = plist;
//	headlist.mynext = aft;
//
//
//	plist = headlist.mynext;//print fun
//	while (plist->mynext)
//	{
//		printf("%d  ", plist->mydate);
//		plist = plist->mynext;
//	}
//	printf("%d  ", plist->mydate);
//
//}
//int main()
//{
//	int i = 0;
//	mylist headlist;
//	headlist.mynext = (mylist*)malloc(sizeof(mylist));
//	mylist *plist = headlist.mynext;
//	for (i = 0; i < 10; i++)//控制开辟内存的数量
//	{
//		plist->mydate = i;
//		if (i != 9)
//		{
//			plist->mynext = malloc(sizeof(mylist));
//			plist = plist->mynext;
//		}
//	}
//	plist->mynext = NULL;
//	plist = headlist.mynext;
//	while (plist->mynext)
//	{
//		printf("%d  ", plist->mydate);
//		plist = plist->mynext;
//	}
//	printf("%d  ", plist->mydate);
//	printf("\n");
//	test(headlist);
//
//	plist = headlist.mynext;// print fun
//	while (plist->mynext)
//	{
//		printf("%d  ", plist->mydate);
//		plist = plist->mynext;
//	}
//





//int fun(int *arr,int k)
//{
//	int big = *(arr++);
//	while (--k)
//	{
//		if (big > *arr)
//		{
//			big = *arr;
//		}
//		arr++;
//	}
//	return big;
//
//
//}
//int main()
//{
//	int k = 0;
//	int arr[20] = { 10, 5, 23, 12, 3, 13, 14, 1313, 123, 1, 32, 123, 23, 55, 56, 787, 45, 43, 456 };
//	scanf("%d", &k);
//	int big = fun(arr , k);
//	printf("%d\n", big);
//
//	system("pause");
//	return 0;
//
//}

//int fun(int *arr, int size)
//{
//	int i = 0;
//	int j = 0;
//	int num = 1;
//	int myflag = *(arr++);
//	int half = size / 2;
//	for (j=size ; j > half ; j--)
//	{
//		for (i = 0; i < j;i++)
//		{
//			if ((myflag^*(arr + i))==0)
//			{
//				num++;
//			}
//			if (num > half)
//			{
//				return myflag;
//			}
//		}
//		myflag = *(arr++);
//		num = 1;
//	}
//	return 0;
//
//
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 1, 2, 2, 0, 3 };
//	int num = 0;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	num = fun(arr, size);
//	printf("%d\n", num);
//
//	system("pause");
//	return 0;
//}






//typedef struct max
//{
//	int bagin;
//	int over;
//	int add;
//}point;
//point test(int *arr, int size)
//{
//	point max = { 0 };
//	point date = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; *(arr + i) > 0;++i)
//	{
//		if (*arr < 0)
//		{
//			++i;
//		}
//		max.add += *(arr + i);
//	}
//	max.bagin = 0;
//	max.over = i;
//
//	for (i = 1 ; i < size;i++)
//	{
//		if ((*(  arr + i - 1) < 0))
//		{
//			for (j = 0; j < size - i;j++)
//			{
//				date.add += *(arr + i + j);
//				if (date.add > max.add)
//				{
//					max.add = date.add;
//					max.bagin = i;
//					max.over = i + j;
//				}
//			}
//		}
//		date.add = 0;
//	}
//	return max;
//}
//
//int main()
//{
//	int arr[] = { 1, -2, 3, 10, -4, 7, 2, -5 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	point max = test(arr, size);
//	printf("%d\n", max.add);
//	system("pause");
//	return 0;
//}

//char *my()
//{
//	char buffer[6] = { 0 };
//	char *s = "hello world!";
//	for (int i = 0;i < sizeof(buffer)-1;i++)
//	{
//		buffer[i] = *(s + i);
//	}
//	return buffer;
//}
//
//int main()
//{
//	printf("%s\n", my());
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = (char)(-1 - i);
//	}
//	printf("%d\n", strlen(a));
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char arr[] = "aeajcckfefa";
//	int all[26] = { 0 };
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
//	{
//		all[arr[i] - 97] += 1;
//	}
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		if (all[arr[i] - 97] == 1)
//		{
//			break;
//		}
//	}
//	if (all[arr[i] - 97] > 1)
//	{
//		printf("not found\n");
//	}
//	else
//	{
//		printf("%c\n", arr[i]);
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	const int i = 0;
//	int *j = (int *)&i;
//	*j = 1;
//	printf("%d%d\n", i, *j);
//	system("pause");
//	return 0;
//}




//char fun(char *arr, int size)
//{
//	int i = 0;
//	char date[128] = { 0 };
//	for (i = 0; i < size; i++)
//	{
//		date[arr[i]] += 1;
//		if (date[arr[i]] == 2)
//		{
//			return arr[i];
//		}
//	}
//	return NULL;
//
//}
//int main()
//{
//
//	char arr[] = "qwyer23td";
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	printf("%c\n",fun(arr, size));
//	
//
//	system("pause");
//	return 0;
//}



//void fun(char *arr, int size)
//{
//	int i = 0;
//	char date[20] = { 0 };
//	for (i = 0; i < size; i++)
//	{
//		date[arr[i]] += 1;
//	}
//	for ( i = 0; i < size; i++)
//	{
//		if (date[arr[i]] == 1)
//		{
//			printf("%d\n", arr[i]);
//		}
//	}
//
//}
//int main()
//{
//
//	char arr[] = { 1, 3, 5, 7, 1, 3, 5, 9 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	fun(arr, size);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (j = -1; j == 0; ++j)
//	{
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//void fun(char *scr, char *arr, int size)
//{
//	int j = 0;
//	int i = 0;
//	while (*(arr + i) != '\0')
//	{
//		for (j = 0; *(scr + j) != '\0';j++)
//		{
//			if (*(arr + i) == *(scr + j))
//			{
//				int tmp = 0;
//				while (*(scr + j + tmp) != '\0')
//				{
//					*(scr + j + tmp) = *(scr + j + tmp +1);
//					tmp++;
//				}
//			}
//		}
//		i++;
//	}
//	printf("%s\n", scr);
//
//}
//
//
//int main()
//{
//	char scr[] = "Tahey are satudents.";
//	char arr[] = "aeiou";
//	int size = sizeof(arr) / sizeof(arr[0]);
//	fun(scr, arr, size);
//	system("pause");
//	return 0;
//
//}





//void fun(int num)
//{
//	int i = 0;
//	int size = 0;
//	char arr[20] = { 0 };
//	while (num != 0)
//	{
//		arr[size] = num % 10;
//		num /= 10;
//		size++;
//	}
//	for (i = 0; i < size; i++)
//	{
//		if (arr[i] != arr[size - i - 1])
//		{
//			printf("Not\n");
//			return;
//		}
//	}
//	printf("Yes\n");
//	return;
//}
//
//int main()
//{
//
//	int num = 0;
//	scanf("%d", &num);
//	fun(num);
// 
//	system("pause");
//	return 0;
//}


//typedef struct mylist
//{
//	int mydate;
//	struct mylist *mynext;
//}mylist;
//void fun(mylist list)
//{
//	mylist *p = list.mynext->mynext;
//	mylist *flag = list.mynext->mynext;
//	int i = 0;
//	while (p)
//	{
//		if ( i>=3 && i%2==1 )
//		{
//			flag = flag->mynext;
//		}
//		p = p->mynext;
//		++i;
//	}
//	printf("%d\n", flag->mydate);
//	return 0;
//}
//int main()
//{
//
//	mylist list;
//	list.mynext = (mylist *)malloc(sizeof(mylist));
//	mylist *p = list.mynext;
//	int i = 0;
//	for (i = 0; i < 11; i++)
//	{
//		p->mydate = i;
//		if (i != 10)
//		{
//			p->mynext = malloc(sizeof(mylist));
//			p = p->mynext;
//		}
//	}
//	p->mynext = NULL;
//
//	fun(list);
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	mylist headlist;
//	headlist.mynext = (mylist*)malloc(sizeof(mylist));
//	mylist *plist = headlist.mynext;
//	for (i = 0; i < 10; i++)//控制开辟内存的数量
//	{
//		plist->mydate = i;
//		if (i != 9)
//		{
//			plist->mynext = malloc(sizeof(mylist));
//			plist = plist->mynext;
//		}
//	}
//	plist->mynext = NULL;
//	plist = headlist.mynext;
//	while (plist->mynext)
//	{
//		printf("%d  ", plist->mydate);
//		plist = plist->mynext;
//	}
//	printf("%d  ", plist->mydate);
//	printf("\n");
//	test(headlist);
//
//	plist = headlist.mynext;// print fun
//	while (plist->mynext)
//	{
//		printf("%d  ", plist->mydate);
//		plist = plist->mynext;
//	}
//


//float MyPow(float x,float y)
//{
//	int tmp = 0;
//	if (y==0)
//	{
//		return 1;
//	}else if (x == 1)
//	{
//		return 1;
//	}else if (x==0)
//	{
//		return 0;
//	}
//	
//	if (y < 0)
//	{
//		tmp = 1 / x;
//		while (++y < 0)
//		{
//			tmp /= x;
//		}
//		return tmp;
//	}
//	else if (y > 0)
//	{
//		tmp = x;                                        
//		while (--y)
//		{
//			tmp *= x;
//		}
//		return tmp;
//	}
//	return 0;
//}
//
//int main()
//{
//	float x = 0.0;
//	float y = 0.0;
//	scanf("%f%f", &x, &y);
//	float num = MyPow(x, y);
//	printf("%f\n", num);
//	system("pause");
//	return 0;
//}




//typedef int SLTDataType; 
//typedef struct SListNode 
//{
//	SLTDataType _data; 
//	struct SListNode* _next;
//}SListNode;
//
//
//
//
//typedef struct SList
//{
//	SListNode* _head; 
//}SList;
//
//void SListInit(SList* plist)
//{
//	
//	plist->_head = (SListNode*)malloc(sizeof(SListNode));
//	SList tmp;
//	tmp._head = plist->_head;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		tmp._head->_data = i;
//		tmp._head->_next = (SListNode*)malloc(sizeof(SListNode));
//		tmp._head = tmp._head->_next;
//	}
//	tmp._head->_data = i;
//	tmp._head->_next = NULL;
//
//}//Init
//
//void SListDestory(SList* plist)
//{
//	SList tmp;
//	tmp._head = plist->_head;
//	while (plist->_head = plist->_head->_next)
//	{
//		free(tmp._head);
//		tmp._head = plist->_head;
//	}
//	free(plist->_head);
//}
//
////SListNode* BuySListNode(SLTDataType x);
//
//void SListPushFront(SList* plist, SLTDataType x)//front push
//{
//	SList cur;
//	cur._head = (SListNode*)malloc(sizeof(SListNode));
//	cur._head->_next = plist->_head->_next;
//	plist->_head->_next = cur._head;
//	cur._head->_data = plist->_head->_data;
//	plist->_head->_data = x;
//}
//
//void SListPopFront(SList* plist) //front pop
//{
//	SList tmp;
//	tmp._head = plist->_head;
//	plist->_head = plist->_head->_next;
//	free(tmp._head);
//
//}
//
//SListNode* SListFind(SList* plist, SLTDataType x)
//{
//	SList tmp;
//	tmp._head = plist->_head;
//	while (tmp._head = tmp._head->_next)
//	{
//		if (tmp._head->_data == x)
//		{
//			return tmp._head;
//		}
//	}
//
//}
//
//void SListInsertAfter(SListNode* pos, SLTDataType x)// 在pos的后面进行插入
//{
//	SList cur;
//	cur._head = (SListNode*)malloc(sizeof(SListNode));
//	cur._head->_next = pos->_next;
//	pos->_next = cur._head;
//	cur._head->_data = x;
//}
//
//void SListEraseAfter(SListNode* pos)
//{
//	SListNode* tmp = pos->_next;
//	pos->_next = pos->_next->_next;
//	free(tmp);
//
//}
//
//void SListRemove(SList* plist, SLTDataType x)
//{
//	SList tmp;
//	SList pre;
//	tmp._head = plist->_head;
//	while (tmp._head = tmp._head->_next)
//	{
//
//		if (tmp._head->_data == x)
//		{
//			pre._head->_next = tmp._head->_next;
//			free(tmp._head);
//			break;
//		}
//		pre._head = tmp._head;
//	}
//}
//
//void SListPrint(SList* plist)
//{
//	SList tmp;
//	for (tmp._head = plist->_head; tmp._head;tmp._head = tmp._head->_next)
//	{
//		printf("     |");
//		printf("%2d", tmp._head->_data);
//	}
//	printf("| \n");
//}
//
//void TestSList()
//{
//	SList plist;
//	int i = 0;
//	int x = 0;
//	SListNode *pos;
//	SListInit(&plist);//Init
//	
//	printf("Please input your change\n");
//	printf("**********************************************************************\n");
//	printf("**********************************************************************\n");
//	printf("*********** 1.//SListEraseAfter      2.//SListInsertAfter   **********\n");
//	printf("*********** 3.SListFind                4.SListPopFront      **********\n");
//	printf("*********** 5.SListPushFront           6.SListDestory       **********\n");
//	printf("*********** 7.SListRemove              8.SListPrint         **********\n");
//	printf("*********** 0.Exit                                          **********\n");
//	printf("**********************************************************************\n");
//	scanf("%d", &i);
//	while (i)
//	{
//	
//		switch (i)
//		{
//		case 1:
//			//SListEraseAfter(pos);
//			break;
//		case 2:
//			//SListInsertAfter(pos, x);
//			break;
//		case 3:
//			scanf("%d", &x);
//			pos = SListFind(&plist, x);
//			printf("%d\n", pos->_data);
//			break;
//		case 4:
//			SListPopFront(&plist);
//			break;
//		case 5:
//			scanf("%d", &x);
//			SListPushFront(&plist, x);
//			break;
//		case 6:
//			SListDestory(&plist);
//			return 0;
//		case 7:
//			scanf("%d", &x);
//			SListRemove(&plist, x);
//			break;
//		case 8:
//			SListPrint(&plist);
//
//			break;
//		default:
//			break;
//
//		}
//		scanf("%d", &i);
//	}
//}
//
//
//int main()
//{
//
//	TestSList();
//
//	system("pause");
//	return 0;
//
//}


//void fun(int n)
//{
//	int flag = 0;
//	int num = 0;
//	while (num++<100)
//	{
//		n /= 2;
//		if (n%2 == 1)
//		{
//			flag++;
//		}
//	}
//	if (flag == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("not\n");
//	}
//
//}
//int main()
//{
//	int n = 4;
//	
//	scanf("%d", &n);
//	fun(n);
//	system("pause");
//	return 0;
//	
//}






