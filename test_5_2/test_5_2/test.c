#define _CRT_SECURE_NO_WARNINGS 1


#define X 3
#define Y X*2
#undef X
#define  X 10
#ifdef X
#pragma maessage("sdf");
#endif
#include<stdio.h>

int main()
{

	int z = Y;

	printf("%d\n", z);
	system("pause");
	return 0;
	 
}