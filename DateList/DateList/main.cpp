#define _CRT_SECURE_NO_WARNINGS 1
#include"common.h"
#include"DataList.h"
int main()
{
	//DataManger 
	DataManger a;
	a.CreateList();
	a.InsertList();
	a.ShowList();
	a.SaveList();
	return 0;
}