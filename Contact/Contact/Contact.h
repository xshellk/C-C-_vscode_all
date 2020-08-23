#ifndef __CONTACT_H__
#define __CONTACT_H__
#include<assert.h>

#include<stdio.h>
#include<string.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30
#define MAX 1000

typedef struct peoinfor
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX]; 
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}peoinfor;
typedef struct Contact
{
	peoinfor data[MAX];
	int sz;

} Contact,*pContact;


void InitContact(pContact pc);
void AddContact(pContact pc);
void ShowContact(pContact pc);
#endif