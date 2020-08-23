#define _CRT_SECURE_NO_WARNINGS 1

#include "main.h"
//typedef struct SeqCyQueue
//{
//	int * base;
//	size_t capacity;
//	int front;
//	int tail;
//
//}SeqQueue;
//bool SeqQueueFull(SeqQueue * Q)
//{
//	if (((Q->tail + 1)%Q->capacity == 1&&Q->front==0)||Q->tail + 1 == Q->front )
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//bool SeqQueueEmpty(SeqQueue * Q)
//{
//	return Q->front + 1 == Q->tail ? 0 : 1;
//}
//
//void SeqQueueInit(SeqQueue * Q, int size)
//{
//	Q->base = (int *)calloc(0,sizeof(int)* size);
//	return;
//}
//
//void SeqQueuePush(SeqQueue * Q, int data)
//{
//	if (!SeqQueueEmpty)
//	{
//		printf("queue full\n");
//		return;
//	}
//	Q->base[Q->tail] = data;
//	Q->tail++;
//	return;
//}
//
//void SeqQueuePop(SeqQueue * Q)
//{
//	Q->front++;
//	return;
//}
//void SeqQueueShow(SeqQueue * Q)
//{
//	int i = Q->front;
//	while (!(i - 1 )%Q->capacity&&i+1 != Q->tail)
//	{
//		printf("%d ", Q->base[i]);
//		i++;
//		if ((i - 1) % Q->capacity)
//		{
//			i = 0;
//		}
//	}
//	return;
//}
//void SeqQueueDestory(SeqQueue * Q)
//{
//	free(Q->base);
//	Q->base = NULL;
//	return;
//}int sta[1000];
int sta[1000];
int smax[1000];
int ps;
int pms;
//MinStack()
//{
//	ps = 0;
//	pms = 0;
//}
//
//void push(int x)
//{
//	if (ps == 0)
//	{
//		smax[pms] = x;
//		sta[ps] = x;
//		ps++;
//		pms++;
//		return;
//	}
//	if (x < smax[pms])
//	{
//		smax[pms] = x;
//		pms++;
//	}
//	sta[ps] = x;
//	ps++;
//	return;
//}
//
//void pop()
//{
//	if (ps == 0)
//	{
//		return;
//	}
//	if (sta[ps] == smax[pms])
//	{
//		ps--;
//		pms--;
//		return;
//	}
//	ps--;
//
//}
//
//int top()
//{
//	if (ps == 0)
//	{
//		return -1;
//	}
//	return sta[ps - 1];
//}
//
//int getMin()
//{
//	if (ps == 0)
//	{
//		return -1;
//	}
//	return smax[pms - 1];
//}

//MinStack()
//{
//	ps = 0;
//	pms = 0;
//}
//
//void push(int x)
//{
//	if (ps == 0)
//	{
//		smax[pms] = x;
//		sta[ps] = x;
//		ps++;
//		pms++;
//		return;
//	}
//	if (x < smax[pms])
//	{
//		smax[pms] = x;
//		pms++;
//	}
//	sta[ps] = x;
//	ps++;
//	return;
//}
//
//void pop()
//{
//	if (ps == 0)
//	{
//		return;
//	}
//	if (sta[ps] == smax[pms])
//	{
//		ps--;
//		pms--;
//		return;
//	}
//	ps--;
//
//}
//
//int top()
//{
//	if (ps == 0)
//	{
//		return -1;
//	}
//	return sta[ps - 1];
//}
//
//int getMin()
//{
//	if (pms <= 0)
//	{
//		return -1;
//	}
//	return smax[pms - 1];
//}
//int front;
//int tail;
//int base[100];
//int capecity;
//void MyCircularQueue(int k)
//{
//	capecity = k;
//	front = 0;
//	tail = 1;
//}
//bool isEmpty()
//{
//	if (front + 1 == tail || (front + 1 % capecity == 1 && tail == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
///** Insert an element into the circular queue. Return true if the operation is successful. */
//bool enQueue(int value)
//{
//	if (tail + 1 == front || ((tail + 1) % capecity == 1) && (front == 0))
//	{
//		printf("This queue be full,don't push data\n");
//		return false;
//	}
//	if (tail + 1 % capecity == 1)
//	{
//		base[tail - 1] = value;
//		tail = 0;
//	}
//	else
//	{
//		base[tail - 1] = value;
//		tail++;
//	}
//	return true;
//}
//
///** Delete an element from the circular queue. Return true if the operation is successful. */
//bool deQueue()
//{
//	if (isEmpty())
//	{
//		return false;
//	}
//	if (front + 1 % capecity == 1&&front != 0)
//	{
//		front = 0;
//	}
//	else
//	{
//		front++;
//	}
//	return true;
//}
//
///** Get the front item from the queue. */
//int Front()
//{
//	if (isEmpty())
//	{
//		return -1;
//	}
//	return base[front];
//}
//
///** Get the last item from the queue. */
//int Rear()
//{
//	if (isEmpty())
//	{
//		return -1;
//	}
//	return base[tail - 2];
//}
//
///** Checks whether the circular queue is empty or not. */
//
//
///** Checks whether the circular queue is full or not. */
//bool isFull()
//{
//	return tail + 1 == front || ((tail + 1) % capecity == 1) && (front == 0) ? 1 : 0;
//}
//int main()
//{
//	MyCircularQueue(10);
//	enQueue(1);  // 返回 true
//
//	enQueue(2);  // 返回 true
//
//	enQueue(3);  // 返回 true
//
//	enQueue(4);  // 返回 false，队列已满
//
//	printf("%d\n", Rear());  // 返回 3
//
//	printf("%d\n", isFull());  // 返回 true
//
//	printf("%d\n", deQueue());  // 返回 true
//
//	enQueue(4);  // 返回 true
//
//	printf("%d\n", Rear());  // 返回 4
//	return 0;
//}

//typedef struct ListNode
//{
//	struct ListNode * next;
//	int val;
//}ListNode;
//
//ListNode* removeElements(ListNode* head, int val)
//{
//	ListNode * del = NULL;
//	ListNode * tmp = head;
//	if (head == NULL)
//	{
//		return NULL;
//	}
//	if (head->val == val && head->next == NULL)
//	{
//		free(head);
//		return NULL;
//	}
//	while (head->next)
//	{
//		if (head->next->val != val&& head->next->next == NULL)
//		{
//			return tmp;
//		}
//		if (head->next->val == val&& head->next->next == NULL)
//		{
//			free(head->next);
//			head->next = NULL;
//			return tmp;
//		}
//		if (head->next->val == val)
//		{
//			del = head->next;
//			head->next = del->next;
//			head = head->next;
//			free(del);
//		}
//		else
//		{
//			head = head->next;
//		}
//
//	}
//	return head;
//}
//
//int main()
//{
//	int i = 0;
//	ListNode * head = (ListNode *)malloc(sizeof(ListNode) * 1);
//	ListNode * tmp = head;
//	while (i < 10)
//	{
//		head->val = i;
//		i++;
//		head->next = (ListNode *)malloc(sizeof(ListNode) * 1);
//		head = head->next;
//	}
//	head->val = i;
//	head->next = NULL;
//	head = tmp;
//	removeElements(&head, 9);
//	removeElements(&head, 10);
//	return 0;
//}
//#define DateType char
//int head = 0;
//int rear = 1;
//typedef struct BinTreeNode
//{
//	DateType data;
//	struct BinTreeNode * left;
//	struct BinTreeNode * right;
//
//}BinTreeNode;
//BinTreeNode *qu[100] = { 0 };
//
//void BinTreeInit(BinTreeNode **bt)
//{
//	*bt = NULL;
//
//}
//void BinTreeCreat(BinTreeNode ** bt)
//{
//	DateType i;
//	scanf("%c", &i);
//	if (i == '#')
//	{
//		*bt = NULL;
//	}
//	else
//	{
//		*bt = (BinTreeNode *)malloc(sizeof(BinTreeNode));
//		assert(bt);
//		(*bt)->data = i;
//		BinTreeCreat(&((*bt)->left));
//		BinTreeCreat(&((*bt)->right));
//	}
//}
//
//void _PreOrder(BinTreeNode * bt)
//{
//	if (bt != NULL)
//	{
//		printf("%c", bt->data);
//		_PreOrder(bt->left);
//		_PreOrder(bt->right);
//	}
//}
//void PreOrder(BinTreeNode * bt)
//{
//	printf("Pre:");
//	_PreOrder(bt);
//	printf("\n");
//}
//void _InOrder(BinTreeNode * bt)
//{
//	if (bt != NULL)
//	{
//		_InOrder(bt->left);
//		printf("%c", bt->data);
//		_InOrder(bt->right);
//	}
//}
//void InOrder(BinTreeNode * bt)
//{
//	printf("Pre:");
//	_InOrder(bt);
//	printf("\n");
//
//}
//void _PostOrder(BinTreeNode * bt)
//{
//	if (bt != NULL)
//	{
//		_PostOrder(bt->left);
//		_PostOrder(bt->right);
//		printf("%c", bt->data);
//
//	}
//}
//void PostOrder(BinTreeNode * bt)
//{
//	printf("Pre:");
//	_PostOrder(bt);
//	printf("\n");
//
//}
//void Order(BinTreeNode * bt)
//{
//	DateType BinTreeNode[100] = { 0 };
//
//	
//}
//
//size_t _Hight(BinTreeNode * bt,size_t max)
//{
//	if (bt == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		max = _Hight(bt->left,max) + 1;
//	}
//}
//size_t Hight(BinTreeNode * bt)
//{
//	size_t max = 0;
//	_Hight(bt,max);
//}
//size_t _Size(BinTreeNode *bt)
//{
//	size_t i = 0;
//	if (bt == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		i += _Size(bt->left) + 1;
//		i += _Size(bt->right);
//		return i;
//	}
//}
//
//size_t Size(BinTreeNode * bt)
//{
//	return _Size(bt);
//}
//
//BinTreeNode * _Find(BinTreeNode * bt, DateType key)
//{
//	if (bt != NULL && bt->data != key)
//	{
//		_PreOrder(bt->left);
//		_PreOrder(bt->right);
//	}
//	else if (bt->data == key)
//	{
//		return bt;
//	}
//
//}
//BinTreeNode * Find(BinTreeNode * bt, DateType key)
//{
//	_Find(bt, key);
//}
//int main()
//{
//	size_t i = 0;
//	BinTreeNode *bt;
//	BinTreeInit(&bt);
//	BinTreeCreat(&bt);
//	PreOrder(bt);
//	InOrder(bt);
//	PostOrder(bt);
//
//	i = Size(bt);
//
//
//	return 0;
//}
//typedef struct TreeNode {
//    int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//}TreeNode;
//void BinTreeCreat(TreeNode ** bt)
//{
//	int i;
//	scanf("%d", &i);
//	if (i == 0)
//	{
//		*bt = NULL;
//	}
//	else
//	{
//		*bt = (TreeNode *)malloc(sizeof(TreeNode));
//		assert(bt);
//		(*bt)->val = i;
//		BinTreeCreat(&((*bt)->left));
//		BinTreeCreat(&((*bt)->right));
//	}
//}
//
//char * _tree2str(TreeNode * t)
//{
//	static char str[1000] = { 0 };
//	static int i = 0;
//	static int j = 0;
//	if (t != NULL)
//	{
//		
//		if (i % 2 == 0 && i > 0)
//		{
//			putchar('(');
//			i--;
//		}
//		str[j++] = (char)(t->val + 48);
//		printf("%c", str[--j]);
//
//		if (t->left)// next != NULL
//		{
//			i += 2;
//		}
//
//		_tree2str(t->left);
//		if (t->right)// next != NULL
//		{
//			i += 2;
//		}
//		_tree2str(t->right);
//		if (i % 2 == 1 && i >= 0)
//		{
//			putchar(')');
//			i--;
//		}
//	}
//}
//char* tree2str(TreeNode* t)
//{
//	_tree2str(t);
//	printf("\n");
//
//}
//int main()
//{
//	TreeNode *t;
//	BinTreeCreat(&t);
//	tree2str(t);//1 2 3 0 0 4 5 0 0 6 0 0 0 0 0 0
//
//	//printf("%d", '0');
//	return 0;
//}

//typedef struct TreeNode {
//    int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//}TreeNode;
//typedef struct MyQueue
//{
//	TreeNode* qu[100];
//	int head;
//	int rear;
//}MyQueue;
//typedef struct Stack
//{
//	TreeNode * st[30];
//	int top;
//}Stack;
//
//bool StackIsEmpty(Stack * st)
//{
//	if (st->top == 0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//void StackPush(Stack * st, TreeNode * bt)
//{
//	st->st[st->top] = bt;
//	st->top++;
//}
//
//TreeNode * StackPop(Stack * st)
//{
//	st->top--;
//	return st->st[st->top];
//}
//
//
//bool isempty(MyQueue *qu)
//{
//	if (qu->head + 1 == qu->rear)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//TreeNode *pop(MyQueue * qu)
//{
//
//	qu->head++;
//	return qu->qu[qu->head - 1];
//
//}
//
//void push(MyQueue *Q, TreeNode * root)
//{
//	Q->qu[Q->rear - 1] = root;
//	Q->rear++;
//
//}
//void leveOrder(TreeNode * root)
//{
//	MyQueue Q;
//	Q.rear = 1;
//	Q.head = 0;
//	push(&Q,root);
//	
//	while (!isempty(&Q))
//	{
//		root = pop(&Q);
//		if (root == NULL)
//		{
//			printf(" NULL ");
//		}
//		else
//		{
//			printf(" %d ", root->val);
//		}
//		if (root)
//		{
//			push(&Q, root->left);
//			push(&Q, root->right);
//		}
//	
//	}
//
//}
//void BinTreeCreat(TreeNode ** bt)
//{
//	int i;
//	scanf("%d", &i);
//	if (i == 0)
//	{
//		*bt = NULL;
//	}
//	else
//	{
//		*bt = (TreeNode *)malloc(sizeof(TreeNode));
//		assert(bt);
//		(*bt)->val = i;
//		BinTreeCreat(&((*bt)->left));
//		BinTreeCreat(&((*bt)->right));
//	}
//}
//
//
//
//
//void BinTreeNorOrder(TreeNode * bt)
//{
//	Stack st;
//	st.top = 0;
//	StackPush(&st, bt);
//	while (!StackIsEmpty(&st))
//	{
//		bt = StackPop(&st);
//		printf(" %d ", bt->val);
//		if (bt->right)
//		{
//			StackPush(&st, bt->right);
//		}
//		if (bt->left)
//		{
//			StackPush(&st, bt->left);
//		}
//	}
//
//}
//
//int main()
//{
//	TreeNode * bt;
//	BinTreeCreat(&bt);
//	//leveOrder(bt);
//	BinTreeNorOrder(bt);
//
//
//	return 0;
//}




int main()
{
	int ar[] = { 9, 1, 2, 5, 7, 4, 8, 6, 3, 5};
	int size = sizeof(ar) / sizeof(int);
	//InsertSort(ar,size);
	ShellSort(ar, size);
	PrintSort(ar,size);
	system("pause");
	return 0;
}
