#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

typedef struct List
{
	int date;
	struct List * next;

}List;

void ListInit(List * list)
{
	List* tmp = list;

	for (int i = 0; i < 10; i++)
	{
		list->date = i;
		list->next = (List *)malloc(sizeof(List));
		list = list->next;
	}
	list->date = 10;
	list->next = NULL;

}
void ListPrint(List *me)
{
	while (me->next)
	{
		printf("%d\n", me->date);
		me = me->next;
	}
	printf("%d\n", me->date);

}
void ListFree(List *me)
{
	List* tmp = me->next;
	me = me->next;
	for (int i = 0; i < 10; i++)
	{
		me = me->next;
		free(tmp);
		tmp = me;
	}

}

void ListOrder(List *me)
{
	List * head = me;
	List * bef = me->next;
	me = bef->next;
	List * aft = bef->next->next;
	bef->next = NULL;
	while (aft->next)
	{
		me->next = bef;
		bef = me;
		me = aft;
		aft = aft->next;
	}
	me->next = bef;
	aft->next = me;
	head->next = aft;

}

int main()
{
	List me;
	ListInit(&me);
	ListPrint(&me);
	ListOrder(&me);
	ListPrint(&me);
	ListFree(&me);


	return 0;

}