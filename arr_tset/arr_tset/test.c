#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	double arr[90000] = { 0 };
	arr[90000 - 1] = 1.1;
	return 0;
}