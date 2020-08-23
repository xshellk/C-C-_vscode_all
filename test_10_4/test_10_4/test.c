#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 20;
//	if (1 <= a <= 10)
//	{
//		printf("in arrange");
//	}
//	else
//	{
//		printf("out arrange");
//	}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = -8;
//	int b = 0;
//	b = a >> 1;
//	printf("%d\n", b);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<assert.h>
//void Charge(char*arr)
//{
//	assert(arr);
//	int i = 0;
//	for (i = 0;*(arr+i)!='\0';i++)
//	{
//		if (('A' <= *(arr + i)) && (*(arr + i) <= 'Z'))
//		{
//			*(arr + i) += 32;
//		}
//	}
//}
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	Charge(arr);
//	printf("%s", arr);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//void PLUS(char *arr)
//{
//	int i = 0;
//	for (i = 0; (*(arr + i) != '\0')||(*(arr+i)==32); i++)
//	{
//		if ((('A' <= *(arr + i)) && (*(arr + i) <= 'Z')) || (('a' <= *(arr + i)) && (*(arr + i) <= 'z')))
//		{
//			*(arr + i) += 13;
//		}
//	}
//}
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	PLUS(arr);
//	printf("%s\n", arr);
//	system("pause");
//return 0;
//}
#include<stdio.h>
unsigned int reverse_bit(unsigned int bit)
{
	unsigned int num = 0;
	unsigned int bits = 0 ;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		num = bit;
		num = (num >> i);
		bits += (31 - i) <<num ;
	}
	return bits;
}
int main()
{
	unsigned int i = 8;
	unsigned int j = 0;
	j = reverse_bit(i);
	printf("%d\n", j);
	system("pause");
	return 0;
}
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(int));
//	system("pause");
//	return 0;
//}