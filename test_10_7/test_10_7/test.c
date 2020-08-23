#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
unsigned int reverse_bit(unsigned int num)
{
	unsigned int tmp = 0;
	int i = 0;
	unsigned int add = 0;
	for (i = 0; i <= 31; i++)
	{
		tmp = num;
  		tmp = tmp >> (i);
		tmp = tmp << (31 - 1);
		add += tmp;
	}
	return add;
}
int main()
{
	unsigned int k = 0;
	unsigned int i = 0;
	scanf("%d", &i);
	k = reverse_bit(i);
	printf("%u\n", k);
	system("pause");
	return 0;
}