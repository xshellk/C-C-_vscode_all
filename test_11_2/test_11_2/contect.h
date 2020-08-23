#ifndef __CONTECT_H__
#define __CONTECT_H__

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

typedef struct CONTECT
{
	char sex[10];
	char neme[20];
	long call;
	char address[30];
}CONTECT;

void Add(CONTECT *contect);
void Del(CONTECT *contect);
void Put(CONTECT *contect);
void Esc(CONTECT *contect);


#endif