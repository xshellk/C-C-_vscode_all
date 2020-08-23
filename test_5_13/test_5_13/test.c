#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>


//int my_strncmp(const char *String1, const char *String2, int num)
//{
//	assert(String1);
//	assert(String2);
//
//	while (String1++,String2++,num--)
//	{
//		if (*String1-*String2 > 0)
//		{
//			return 1;
//		}
//		if (*String1-*String2==0)
//		{
//			return 0;
//		}
//		else
//		{
//			return -1;
//		}
//	}
//
//}
//
//int main()
//{
//	int check = 0;
//	int num = 0;
//	char *arr = "hallo";
//	char *arr2 = "hdeff";
//	scanf("%d", &num);
//	check = my_strncmp(arr, arr2, num);
//	system("pause");
//	return 0;
//}


//void my_strncat(char *dst, const char *src, int num)
//{
//	assert(dst);
//	assert(src);
//	
//	int i = 0;
//	int DstSize = 0;
//	while (*(dst+i))
//	{
//		++i;
//		++DstSize;
//	}
//	int SrcSize = sizeof(*src);
//	dst += DstSize;
//	while (*dst++=*src++)
//	{
//		if (--num==0)
//		{
//			*dst = '\0';
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int num = 0;
//	char arr[20] = "hello";
//	char arr2[20] = " word";
//	scanf("%d", &num);
//	my_strncat(arr, arr2, num);
//	system("pause");
//	return 0;
//}
//void my_strncpy(char *dst,const char *src, int num)
//{
//	assert(dst);
//	assert(src);
//	while (*dst++ = *src++)
//	{
//		if (--num==0)
//		{
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int num = 0;
//	char arr[20] = "hello";
//	char arr2[20] = "cao";
//	scanf("%d", &num);
//	my_strncpy(arr2, arr,num);
//
//	system("pause");
//	return 0;
//}



//int main()
//{
//	int j = 0;
//	int i = 0;
//	char tmp[20] = { 0 };
//	char arr[5][20] = { 0 };
//	while (i<5)
//	{
//		scanf("%s", arr[i]);
//		i++;
//	}
//
//	for (i = 5; i > 0;--i)
//	{
//		for (j = 0; j < i - 1;j++)
//		{
//			
//			if (strcmp(arr[j],arr[j+1])>0)
//			{
//				strcpy(tmp, arr[j]);
//				strcpy(arr[j], arr[j + 1]);
//				strcpy(arr[j + 1], tmp);
//			}
//		}
//
//	}
//	i = 0;
//	while (i<5)
//	{
//		printf("%s\n", arr[i]);
//		i++;
//	}
//	system("pause");
//	return 0;
//}


	//char *parr[5] = { NULL };
	//char arr[20] = { 0 };
	//int i = 0;
	//char tmp = 0;
	//while (i < 5)
	//{
	//	gets(arr[i]);

	//	i++;
	//}


	


	//i = 0;
	/*while (i < 5)
	{
	printf("%s\n", arr[i]);
	i++;
	}*/



//int main()
//{
//	
//	struct stu 
//	{
//		int a;
//		char b;
//		char c;
//
//	}stu;//8
//	
//	printf("%d\n", sizeof(stu));
//	system("pause");
//	return 0;
//
//}
//
//int main()
//{
//
//	struct stu
//	{
//		char a;
//		int b;
//		char c;
//
//	}stu;//12
//
//	printf("%d\n", sizeof(stu));
//	system("pause");
//	return 0;
//
//}int main()
//{
//
//	struct stu
//	{
//		short a;
//		char b;
//		char c;
//
//	}stu;//4
//
//	printf("%d\n", sizeof(stu));
//	system("pause");
//	return 0;
//
//}int main()
//{
//
//	struct stu
//	{
//		short a;
//		char b;
//		short c;
//
//	}stu;//6
//
//	printf("%d\n", sizeof(stu));
//	system("pause");
//	return 0;
//
//}int main()
//{
//
//	struct stu
//	{
//		short a;
//		int b;
//		short c;
//
//	}stu;//12
//
//	printf("%d\n", sizeof(stu));
//	system("pause");
//	return 0;
//
//}int main()
//{
//
//	struct stu
//	{
//		short a;
//		double b;
//		short c;
//
//	}stu;//24
//
//	printf("%d\n", sizeof(stu));
//	system("pause");
//	return 0;
//
//}int main()
//{
//
//	struct stu
//	{
//		char a;
//		double b;
//		char c;
//
//	}stu;//24
//
//	printf("%d\n", sizeof(stu));
//	system("pause");
//	return 0;
//
//}int main()
//{
//
//	struct stu
//	{
//		int a;
//		int b;
//		double c;
//
//	}stu;//16
//
//	printf("%d\n", sizeof(stu));
//	system("pause");
//	return 0;
//
//}
//int main()
//{
//
//	struct stu
//	{
//		char a;
//		char b;
//		double c;
//
//	}stu;//16
//
//	printf("%d\n", sizeof(stu));
//	system("pause");
//	return 0;
//
//}
//
//int main()
//{
//
//	struct stu
//	{
//		double a;
//		char b;
//		char c;
//
//	}stu;//16
//
//	printf("%d\n", sizeof(stu));
//	system("pause");
//	return 0;
//
//}
//
//
//
//
//
//
//
//
//
//int main()
//{
//
//	struct stu
//	{
//		char a;
//		char b;
//		double c;
//
//	}stu;//16
//
//	printf("%d\n", sizeof(stu));
//	system("pause");
//	return 0;
//
//}
//
//
//
////union stduent
////{
////	short a1;
////	char a2[2];
////}stu;
////stu.a1 = 1;
////printf("%d\n", stu.a2[0]);
////system("pause");
////return 0;
//
////int main()
////{
////	int key = 0;
////	int arr[] = { 1, 4, 6, 7, 13, 14, 24, 45, 47, 50 };
////	int i = 0;
////	int num = 0;
////	num = (sizeof(arr) / sizeof(arr[0]));
////
////
////	printf("输入你要找的数字\n");
////	scanf("%d", &key);
////
////	while (num/2)
////	{
////		i = (num / 2) + 1;
////		while ((i-1)<num)
////		{
////			if (arr[i-1]==key)
////			{
////				printf("%d\n", i);
////				break;
////			}
////			++i;
////		}
////		num /= 2;
////	}
////	printf("1\n");
////	system("pause");
////	return 0;
////
////}