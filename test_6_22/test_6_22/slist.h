#define _CRT_SECURE_NO_WARNINGS 1

#ifndef _SLIST_H_
#define _SLIST_H_

#include<stdio.h>
#include<assert.h>

typedef int SLTDataType;

typedef struct SListNode
{
	SListNode *_date;
	struct SlistNode *_next;
}SListNode;

typedef struct SList
{
	SListNode *_head;
};

void SListInit(SList *plist);
void SListDestory(SList *plist);
void SListPushFront(SList *plist ,)




#endif //_SLIST_H_