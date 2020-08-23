#define _CRT_SECURE_NO_WARNINGS 1
#include "BTree.h"


BTNode* BinaryTreeCreate(BTDataType* src)//��ʽ�������Ĵ���
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

void BinaryTreePrevOrder(BTNode* root)//�ݹ�ʽ��ǰ�����
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
void BinaryTreeInOrder(BTNode* root)//�ݹ�ʽ���������
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
void BinaryTreePostOrder(BTNode* root)//�ݹ�ʽ�ĺ������
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

void BinaryTreeLevelOrder(BTNode* root)//�������
{
	Queue qu;
	QueueInit(&qu);
	while (root)
	{
		putchar(root->data);

		if (root->lchild)
		{
			QueuePush(&qu, root->lchild);//���
		}
		if (root->rchild)
		{
			QueuePush(&qu,root->rchild);//���
		}
		root = qu.head->_data;//��ȡ��ͷ

		QueuePop(&qu);//����ͷ
	}

	//QueueDestory(&qu);

}

void BinaryTreePrevOrderNonR(BTNode* root)//�ǵݹ�ʽ��ǰ�����
{
	Stack st;
	StackInit(&st);
	while (root)
	{
		putchar(root->data);//�Ƚ���һ�����ڵ�Ĵ�ӡ
		if (root->rchild)
		{
			StackPush(&st,root->rchild);//�Һ��ӽ�ջ
		}
		if (root->lchild)
		{
			root = root->lchild;//���ӽ�ջ
		}
		else
		{
			if (st._top == 0)//�ж�����ջ֮ǰ ջ�Ƿ��ǿ�
			{
				break;
			}
			root = st._a[st._top - 1];
			StackPop(&st);
		}
	}

}

void BinaryTreeInOrderNonR(BTNode* root)//�ǵݹ�ʽ���������
{
	BTNode *cur = root;
	Stack st;
	StackInit(&st);

	while (1)
	{
		for (;cur;cur = cur->lchild)//���и��ڵ�����ӽ�ջ
		{
			StackPush(&st,cur);
		}
		cur = StackTop(&st);//��ȡջ��

		putchar(cur->data);
		StackPop(&st);//��ջ

		cur = cur->rchild;//�����Һ���

		if (!cur)
		{
			if (st._top == 0)//�ж�����ջ֮ǰ ջ�Ƿ��ǿ�
			{
				break;
			}
		}
	}
	StackDestory(&st);
}

void BinaryTreePostOrderNonR(BTNode* root)//�ǵݹ�ʽ�ĺ������
{
	BTNode *cur = root;
	Stack st;
	int arr[100] = { 0 };//����һ������
	StackInit(&st);
	while (1)
	{
		for (;cur;cur = cur->lchild)//���и��ڵ�����ӽ�ջ
		{
			StackPush(&st, cur);
			arr[st._top - 1] = 0;
		}

		while (arr[st._top - 1])//�ؼ����ڣ��жϸ��׽ڵ��Ƿ��ǵ�����Ԫ���Ƿ���1�����ǣ������һ��ѭ����ӡ��ֱ��������0��ֹͣ
		{
			if (st._top == 0)//�ж�����ջ֮ǰ ջ�Ƿ��ǿ�
			{
				break;
			}
			cur = StackTop(&st);//��ȡջ��
			putchar(cur->data);
			StackPop(&st);//��ջ
		}
		if (st._top == 0)//�ж�����ջ֮ǰ ջ�Ƿ��ǿ�
		{
			break;
		}
		cur = StackTop(&st);//��ȡջ��
		arr[st._top - 1] = 1;//���ø��׽ڵ������Ԫ����1
		cur = cur->rchild;//�����Һ���
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

