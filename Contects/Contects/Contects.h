#ifndef _CONTECT_H_
#define _CONTECT_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<windows.h>

#define NUM 2

extern int NumPeople;//all people
extern int SizeContect;//realloc function 


typedef struct ConAddress
{
	char Country[15];
	char Province[15];
	char City[15];
	char Detail[15];
}ConAddress;

typedef enum ConSex
{
	men,
	women,
	secret
}ConSex;

typedef struct Contect
{
	int Number;
	char Name[20];
	ConAddress Address;
	ConSex Sex;
	char CallNumber[15];
}Contect;


void PrintContect();
Contect* DoChange(int change,Contect *people);



#endif _CONTECT_H_