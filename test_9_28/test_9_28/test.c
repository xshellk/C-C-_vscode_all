#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int max = 0;
//	printf("请输入三角形的三边长;\n");
//	printf("第一条边的长度：");
//	scanf("%d", &i);
//	printf("第二条边的长度：");
//	scanf("%d", &j);
//	printf("第三条边的长度：");
//	scanf("%d", &k);
//	max = i;
//	if (max <= j)
//	{
//		max = j;
//	}
//	if (max <= k)
//	{
//		max = k;
//	}
//	if ((max<(i + j)) && (max<(k + j)) && (max < (i + k)))
//	{
//		if ((i == j) && (i == k))
//		{
//			printf("该三角形是等边三角形\n");
//		}
//		else if ((i == j) || (k == j) || (i == k))
//		{
//			printf("该三角形是等腰三角形\n");
//		}
//		else if ((i*i + j*j == k*k) || (i*i + k*k == j*j) || (j*j + k*k == i*i))
//		{
//			printf("该三角形是直角三角形\n");
//		}
//		else
//		{
//			printf("该三角形是普通三角形\n");
//		}
//	}
//	else
//	{
//		printf("三遍输入有误，不是三角形");
//	}
//	system("pause");
//	return 0;
//}
