#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct List
{
	int date;
	struct List * next;

}List;
void init_list(List *ls)
{
	List *tmp = ls;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ls->date = i;
		ls->next = (List*)malloc(sizeof(List));
		ls = ls->next;
	}
	ls->date = i;
	ls->next = NULL;
}

void push_front(List *ls,int date)
{
	List * tmp = (List *)malloc(sizeof(List));
	tmp->date = date;
	tmp->next = ls->next;
	ls->next = tmp;
}
void pop_front(List *ls)
{
	List *tmp = ls->next;

	ls->next = ls->next->next;
	free(tmp);
}
void push_back(List *ls, int date)
{
	while (ls->next)
	{
		ls = ls->next;
	}
	ls->next = (List *)malloc(sizeof(List));
	ls->next->date = date;
	ls->next->next = NULL;
}
void pop_back(List *ls)
{
	while (ls->next->next)
	{
		ls = ls->next;
	}
	free(ls->next);
	ls->next = NULL;
	
}
void print_list(List *ls)
{
	int i = 0;
	for ( i = 0; ls->next; i++)
	{
		printf("%d\n", ls->date);
		ls = ls->next;
	}
	putchar('\n');
	printf("%d\n", ls->date);
}
void free_list(List *ls)
{
	List *tmp;
	ls = ls->next;
	for (int i = 0; ls->next;i++)
	{
		tmp = ls->next;
		free(ls);
		ls = tmp;
	}
	free(ls);

}
int length(List *ls)
{
	int num = 1;
	while (ls->next)
	{
		num++;
		ls = ls->next;
	}
	return num;
}
int main()
{
	List ls;
	int i = 13;
	init_list(&ls);
	printf("%d\n", length(&ls));
	push_front(&ls, i);
	printf("%d\n", length(&ls));
	pop_front(&ls);
	push_back(&ls, 20);
	printf("%d\n", length(&ls));
	pop_back(&ls);
	print_list(&ls);
	free_list(&ls);


	return 0;

}