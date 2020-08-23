#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<malloc.h>


//int main()
//{
//	printf("%s\n",__FILE__);
//	printf("%s\n",__LINE__);
//	printf("%s\n",__DATE__);
//	printf("%s\n",__TIME__);
//
//
//	return 0;
//}

/*
typedef struct softArray
{
	char  soft[];
	//char c;
}softArray;
int main()
{
	FILE * fp = fopen("cTest.txt", "wb+");
	if (fp == NULL)
	{
		printf("open file error");
		system("pause");
		return 1;
	}
	char str[20] = "hello world";
	fwrite(str, 2, 3, fp);
	
	rewind(fp);

	char buf[200] = { 0 };
	fread(buf, 3,5, fp);
	
	printf("%s\n", buf);
	printf("%d\n", strlen(buf));

	fclose(fp);
	return 0;
}
*/