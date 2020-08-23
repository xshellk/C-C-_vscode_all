#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//typedef struct Foryou
//{
//	int First;
//	int Second;
//	int Third;
//	int Fourth;
//	int Fifth;
//} Foryou;
//Foryou My_scanf(Foryou get)
//{
//	get.First = 70;
//	get.Second = 117;
//	get.Third = 99;
//	get.Fourth = 107;
//	get.Fifth = '\0';
//	return get;
//}
//void My_printf(Foryou put)
//{
//	printf("%s%s%s%s%s\n", &put.First, &put.Second, &put.Third, &put.Fourth, &put.Fifth);
//}
//int main()
//{
//	Foryou haha = { 0 };
//	haha=My_scanf(haha);
//	My_printf(haha);
//	system("pause");
//	return 0;
//}
#include<stdio.h>
int main()

{
	static int i = 4;
	printf("%d\n", i);
	system("pause");
	return 0;
}