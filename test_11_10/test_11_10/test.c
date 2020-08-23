#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1 = "hello";
	char arr2 = "word";
	char arr3 = NULL;
	arr3 = strncpy(arr1, arr2, 3);
	printf("%s", arr3);
	system("pause");
	return 0;
}