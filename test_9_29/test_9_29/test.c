#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void deblack(char*arr)
{
	int i = 0;
	int *tip = arr;
	for (i = 0; i < 20; i++)
	{

		if (*(arr + i) == ' ')
		{
			int point = 1;
			int opoint = 1;
			while (*(arr + point) == ' ')
			{
				if (*(arr + point) == ' ')
				{
					;
				}
				point++;
			}
			for (opoint = 1; (*(arr + point + opoint) != '\0'); opoint++)
			{
				*(arr + opoint) = *(arr + point + opoint);
			}
			*(arr + point + opoint) = '\0';
			arr += i;
		}


	}

}
int main()
{
	char arr[20] = { 0 };
	printf("请输入需要转换的字符串：");
	scanf("%s", arr);
	deblack(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}