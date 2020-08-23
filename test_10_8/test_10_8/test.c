#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void set_bit(char * bit_arry, int bit_number)
{
	int bit = 1;
	int tmp = 0;
	int num = 0;
	tmp = bit_number % 8;
	num = bit_number / 8;
	bit = bit << tmp;
	*(bit_arry + num ) = *(bit_arry + num ) | bit;
}
void clear_bit(char*bit_arry, int bit_number)
{
	int bit = 1;
	int tmp = 0;
	int num = 0;
	tmp = bit_number % 8;
	num = bit_number / 8;
	bit = bit << tmp;
	*(bit_arry + num) = *(bit_arry + num) & (!bit);
}
void assign_bit(char*bit_arry, int bit_number,int value)
{
	if (value == 0)
	{
		int bit = 1;
		int tmp = 0;
		int num = 0;
		tmp = bit_number % 8;
		num = bit_number / 8;
		bit = bit << tmp;
		*(bit_arry + num) = *(bit_arry + num) & (!bit);
	}
	else
	{
		int bit = 1;
		int tmp = 0;
		int num = 0;
		tmp = bit_number % 8;
		num = bit_number / 8;
		bit = bit << tmp;
		*(bit_arry + num) = *(bit_arry + num) | bit;
	}
}
int test_bit(char *bit_arry, int bit_number)
{
	int bit = 1;
	int tmp = 0;
	int num = 0;
	tmp = bit_number % 8;
	num = bit_number / 8;
	bit = bit << tmp;
	*(bit_arry + num) = *(bit_arry + num) & bit;
	if (*(bit_arry + num) == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	char arr[20] = { 0 };
	int bit_number = 0;
	int valua = 0;
	int last = 0;
	printf("请输入需要进行操作的字符串\n");
	scanf("%s", arr);
	printf("请输入需要进行操作的数\n");
	scanf("%d", &bit_number);
	printf("请输入value\n");
	scanf("%d", &valua);
	if (((sizeof(arr) / sizeof(arr[0]))*8)<bit_number)
	{
		exit(0);
	}
	set_bit(arr, bit_number);
	clear_bit(arr, bit_number);
	assign_bit(arr, bit_number, valua);
	last = test_bit(arr, bit_number);
	printf("%d\n", last);
	system("pause");
	return 0;
}
