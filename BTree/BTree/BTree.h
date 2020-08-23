#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _BTREE_H__
#define _BTREE_H__

#include<stdio.h>
#include<stdlib.h>

typedef char BTDataType;

typedef struct BinaryTreeNode 
{
	BTDataType data;
	struct BinaryTreeNode* lchild;
	struct BinaryTreeNode* rchild;
}BTNode;

typedef BTNode* QUDataType;

typedef BTNode* STDataType;


typedef struct Stack
{
	STDataType* _a;
	int _top;
	int _capacity;

}Stack;

typedef struct QueueNode 
{ 
	struct QueueNode* _next;
	QUDataType _data;
}QueueNode;

typedef struct Queue
{
	QueueNode *head;
	QueueNode *rear;
}Queue;

BTNode* BinaryTreeCreate(BTDataType* src);

void BinaryTreePrevOrder(BTNode* root); 
void BinaryTreeInOrder(BTNode* root); 
void BinaryTreePostOrder(BTNode* root);

void BinaryTreeLevelOrder(BTNode* root);
void BinaryTreePrevOrderNonR(BTNode* root);
void BinaryTreeInOrderNonR(BTNode* root);
void BinaryTreePostOrderNonR(BTNode* root);

void BIaryTreeLevelPrint(BTNode* root, int num);

#endif//_BTREE_H__