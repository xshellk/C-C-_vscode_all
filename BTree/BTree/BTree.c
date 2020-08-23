#define _CRT_SECURE_NO_WARNINGS 1
#include "BTree.h"


BTNode* BinaryTreeCreate(BTDataType* src)//链式二叉树的创建
{
	static int n = 0;
	if (src[n] == '#')
	{
		n++;
		return NULL;
	}
	BTNode *cur = (BTNode*)malloc(sizeof(BTDataType));
	cur->data = src[n];
	n++;

	cur->lchild = BinaryTreeCreate(src);
	cur->rchild = BinaryTreeCreate(src);

	return cur;
}

void BinaryTreePrevOrder(BTNode* root)//递归式的前序遍历
{
	printf("%c ", root->data);
	if (root->lchild)
	{
		BinaryTreePrevOrder(root->lchild);
	}
	if (root->rchild)
	{
		BinaryTreePrevOrder(root->rchild);
	}

}
void BinaryTreeInOrder(BTNode* root)//递归式的中序遍历
{
	
	if (root->lchild)
	{
		BinaryTreeInOrder(root->lchild);
	}
	printf("%c ", root->data);
	if (root->rchild)
	{
		BinaryTreeInOrder(root->rchild);
	}
}
void BinaryTreePostOrder(BTNode* root)//递归式的后序遍历
{
	
	if (root->lchild)
	{
		BinaryTreePostOrder(root->lchild);
	}
	if (root->rchild)
	{
		BinaryTreePostOrder(root->rchild);
	}
	printf("%c ", root->data);
}

void QueueInit(Queue* qu)
{
	qu->head = qu->rear = (QueueNode *)malloc(sizeof(QueueNode));
}
void QueuePop(Queue* qu)
{
	qu->head = qu->head->_next;
}
void QueueDestory(Queue* qu)
{
	free(qu->head);

}
void QueuePush(Queue* qu, QUDataType x)
{
	qu->rear->_data = x;
	qu->rear->_next = (QueueNode *)malloc(sizeof(QueueNode));
	qu->rear = qu->rear->_next;   
	qu->rear->_data = NULL;
}

STDataType StackTop(Stack * st)
{
	return st->_a[st->_top - 1];
}
void StackInit(Stack *st)
{
	st->_a = (STDataType)malloc(sizeof(STDataType)* 10);
	st->_capacity = 10;
	st->_top = 0;

}
void StackPop(Stack *st)
{
	st->_top--;
}
void StackPush(Stack *st,STDataType  x)
{
	if (st->_top == st->_capacity - 1)
	{
		realloc(st->_a, sizeof(STDataType)* 2 * st->_capacity);
	}
	st->_a[st->_top] = x;
	st->_top++;

}
void StackDestory(Stack *st)
{
	free(st->_a);
}

void BinaryTreeLevelOrder(BTNode* root)//层序遍历
{
	Queue qu;
	QueueInit(&qu);
	while (root)
	{
		putchar(root->data);

		if (root->lchild)
		{
			QueuePush(&qu, root->lchild);//入队
		}
		if (root->rchild)
		{
			QueuePush(&qu,root->rchild);//入队
		}
		root = qu.head->_data;//拿取对头

		QueuePop(&qu);//出对头
	}

	//QueueDestory(&qu);

}

void BinaryTreePrevOrderNonR(BTNode* root)//非递归式的前序遍历
{
	Stack st;
	StackInit(&st);
	while (root)
	{
		putchar(root->data);//先进行一个根节点的打印
		if (root->rchild)
		{
			StackPush(&st,root->rchild);//右孩子进栈
		}
		if (root->lchild)
		{
			root = root->lchild;//左孩子进栈
		}
		else
		{
			if (st._top == 0)//判断在退栈之前 栈是否是空
			{
				break;
			}
			root = st._a[st._top - 1];
			StackPop(&st);
		}
	}

}

void BinaryTreeInOrderNonR(BTNode* root)//非递归式的中序遍历
{
	BTNode *cur = root;
	Stack st;
	StackInit(&st);

	while (1)
	{
		for (;cur;cur = cur->lchild)//所有根节点的左孩子进栈
		{
			StackPush(&st,cur);
		}
		cur = StackTop(&st);//拿取栈顶

		putchar(cur->data);
		StackPop(&st);//退栈

		cur = cur->rchild;//进入右孩子

		if (!cur)
		{
			if (st._top == 0)//判断在退栈之前 栈是否是空
			{
				break;
			}
		}
	}
	StackDestory(&st);
}

void BinaryTreePostOrderNonR(BTNode* root)//非递归式的后序遍历
{
	BTNode *cur = root;
	Stack st;
	int arr[100] = { 0 };//创建一个数组
	StackInit(&st);
	while (1)
	{
		for (;cur;cur = cur->lchild)//所有根节点的左孩子进栈
		{
			StackPush(&st, cur);
			arr[st._top - 1] = 0;
		}

		while (arr[st._top - 1])//关键所在，判断父亲节点是否是的数组元素是否是1，若是，则进行一个循环打印，直到遇到是0的停止
		{
			if (st._top == 0)//判断在退栈之前 栈是否是空
			{
				break;
			}
			cur = StackTop(&st);//拿取栈顶
			putchar(cur->data);
			StackPop(&st);//退栈
		}
		if (st._top == 0)//判断在退栈之前 栈是否是空
		{
			break;
		}
		cur = StackTop(&st);//拿取栈顶
		arr[st._top - 1] = 1;//将该父亲节点的数组元素置1
		cur = cur->rchild;//进入右孩子
	}
	StackDestory(&st);
}

void BIaryTreeLevelPrint(BTNode* root, int num)
{
	int my_flag[100] = { 0 };
	static int i = 0;
	if (root)
	{
		++i;
		if (i == num)
		{
			putchar(root->data);
		}
		if (root->lchild)
		{
			BIaryTreeLevelPrint(root->lchild, num);
		}

	}

	if (root->rchild)
	{
		++i;
		if (i == num)
		{
			putchar(root->data);
		}
		BIaryTreeLevelPrint(root->rchild, num);

	}
	--i;

}

