
//#include"calculate.h"
//void calculate(int line, double num1, double num2)
//{
//	switch (line)
//	{
//	case (1):
//		Add(num1, num2);
//		break;
//	case (2):
//		Sub(num1, num2);
//		break;
//	case (3):
//		Mul(num1, num2);
//		break;
//	case (4):
//		Div(num1, num2);
//		break;
//	default:
//		break;
//	}
//}
//int main()
//{
//	int line = 0;
//	double num1 = 0;
//	double num2 = 0;
//	while (1)
//	{
//		printf("***********************************************************\n");
//		printf("*********       1.Add           2.Sub             *********\n");
//		printf("*********       3.Mul           4.Div             *********\n");
//		printf("***********************************************************\n");
//		printf("Please input calculation method :");
//		scanf("%s", &line);
//		putchar('\n');
//		printf("Please enter two operands (please enter 'q' if you want to quit )：");
//		scanf("%f%f", &num1, &num2);
//		if (num1 == 'q')
//		{
//			exit(0);
//		}
//		calculate(line , num1, num2);
//		putchar('\n');
//	}
//	system("pasue");
//	return 0;
//}

#include<stdio.h>
void Add(int b, int  i)
{
	int m = 0;
	m = b + i;
	printf("%d\n", m);
	system("pause");
	return;
}
void Sub(int b, int  i)
{
	int m = 0;
	m = b - i;
	printf("%d\n", m);
	system("pause");
	return;
}
void Mul(int b, int  i)
{
	int m = 0;
	m = b*i;
	printf("%d\n", m);
	system("pause");
	return;
}
void Div(int b, int  i)
{
	int m = 0;
	m = b / i;
	printf("%d\n", m);
	system("pause");
	return;
}
int main()
{
	int a = 0;
	int n1 = 0;
	int n2 = 0;
	while (1)
	{
		printf("*******************************\n");
		printf("****  1.加法      2.减法   ****\n");
		printf("****  3.乘法      4.除法   ****\n");
		printf("****  5.退出               ****\n");
		printf("*******************************\n");
		printf("请输入要进行的操作：>");
		scanf_s("%d", &a);
		while ((a>5) || (a<1))
		{
			printf("输入有误，请重新输入\n");
			printf("请输入要进行的操作：>");
			scanf_s("%d", &a);
		}
		if (a != 5)
		{
			printf("请输入要进行运算的两个数\n");
			scanf_s("%d%d", &n1, &n2);
			switch (a)
			{
			case(1) :
				Add(n1, n2);
				break;
			case(2) :
				Sub(n1, n2);
				break;
			case(3) :
				Mul(n1, n2);
				break;
			case(4) :
				Div(n1, n2);
				break;
			}
		}
		else
		{
			printf("退出成功");
			break;
		}
	}
	return 0;
}
