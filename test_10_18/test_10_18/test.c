#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
void fun(const char *ch)
{
	assert(ch != NULL);
	char cho = 0;
	cho = *ch;
	if (cho != '\0')
	{
		fun(ch + 1);
		return printf("%c", cho);
	}
}
int main()
{
	char ch[20] = { 0 };
	scanf("%s", ch);
	fun(ch);
	printf("%c",'\n');
	system("pause");
	return 0;
}