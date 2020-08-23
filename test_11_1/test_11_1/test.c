#define _CRT_SECURE_NO_WARNINGS 1
#include"contect.h"
int main()
{
	int k = 0;
	CONTECT contect[100] = { 0 };
	FILE* pf1 = NULL;
	FILE* pf2 = NULL;
	pf1 = fopen("text.txt", "w");
	if (pf1 == NULL)
	{
		EXIT_FAILURE;
	}
	printf("请输入需要进行的操作（ 1.写入信息  2.导出信息）\n");
	scnaf("%d", &k);
	if (k == 1)
	{
		int change = 0;
		while (num++,change != 5)
		{
			printf("请选择需要进行添加到通讯录的人的信息：\n");
			printf("***************************************************************\n");
			printf("***************************************************************\n");
			printf("********            1.姓名              2.性别          *******\n");
			printf("********            3.电话号码          4.地址          *******\n");
			printf("********            5.退出通讯录                        *******\n");
			printf("***************************************************************\n");
			printf("***************************************************************\n");
			scanf("%d", &change);
			switch (change)
			{
			case(1) :
				AddNeme(contect[num].name);
				break;
			case(2) :
				AddSex(contect[num].sex);
				break;
			case(3) :
				AddCalnumber(contect[num].calnumber);
				break;
			case(4) :
				AddAddress(contect[num].address);
				break;
			default:
				exit(0);
			}
		}
		if (change == 5)
		{
			exit(0);
		}
	}
	if (k == 2)

	{
		
	}

}