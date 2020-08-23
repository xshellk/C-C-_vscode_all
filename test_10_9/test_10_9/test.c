#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
//int my_strlen(char *arry)
//{
//	int count = 0;
//	assert(arry);
//	while (count++,*arry++ != '\0')
//	{
//		;
//	}
//	return count - 1;
//}
//int main()
//{
//	int len = 0;
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	len = my_strlen(arr);
//	printf("%d", len);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	printf("%d\n",strlen(arr));
//	system("pause");
//	return 0;
//}
void del_str(char*arr, char*str)
{
	int i = 0;
	while (*(arr + i) != '\0')
	{
		int pl = 0;
		int pf = 0;
		int po = 0;
		int j = 0;
		while (*(arr + i) == *(str + j))
		{
			po = i;
			pf = i;

			while (*(arr + po) == *(str + j))
			{
				j++;
				po++;
				if (*(str + j) == '\0')
				{
					while (*(arr + i + j) != '\0')
					{
						*(arr + i) = *(arr + i + j);
						i++;
					}
					return;
				}
			}
		}

	}
}
int main()
{
	char arry[20] = { 0 };
	char arr[20] = { 0 };
	scanf("%s", arr);
	scanf("%s", arry);
	del_str(arr, arry);
	printf("%s", arr);
	system("pause");
	return 0;
}