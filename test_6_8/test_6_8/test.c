#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>



char *my_strcpy(char *dst, const char *src)
{
	assert(dst != NULL);
	assert(src != NULL);
	char *tmp = dst;
	while (*dst++ = *src++)
	{
		;
	}
	return tmp;
}

int main()
{
	char arr1[20] = "hello";
	char arr2[20] = "word";
	printf("%s", my_strcpy(arr1, arr2));
	system("pause");
	return 0;
}





//int my_strcmp(char *dst, const char *src)
//{
//	assert(dst != NULL);
//	assert(src != NULL);
//	int tmp = 0;
//	do{
//		tmp = *dst - *src;
//	} while (*dst++ - *src++ == 0 && *dst != '\0');
//
//	return tmp;
//}
//
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[20] = "word";
//	printf("%d", my_strcmp(arr1, arr2));
//	system("pause");
//	return 0;
//}





//char *my_strcat(char *dst, const char *src)
//{
//	assert(dst != NULL);
//	assert(src != NULL);
//	char *tmp = dst;
//	while (*dst++)
//	{
//		if (*dst=='\0')
//		{
//			while (*dst++=*src++)
//			{
//				;
//			}
//			break;
//		}
//	}
//	return tmp;
//}
//
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[20] = "word";
//	printf("%s", my_strcat(arr1, arr2));
//	system("pause");
//	return 0;
//}





//char *my_strcpy(char *dst, const char *src)
//{
//	assert(dst != NULL);
//	assert(src != NULL);
//	char *tmp = dst;
//	while (*dst++ = *src++)
//	{
//		;
//	}
//	return tmp;
//}
//
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[20] = "word";
//	printf("%s", my_strcpy(arr1, arr2));
//	system("pause");
//	return 0;
//}
