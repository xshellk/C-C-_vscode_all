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
	printf("��������Ҫ���еĲ����� 1.д����Ϣ  2.������Ϣ��\n");
	scnaf("%d", &k);
	if (k == 1)
	{
		int change = 0;
		while (num++,change != 5)
		{
			printf("��ѡ����Ҫ������ӵ�ͨѶ¼���˵���Ϣ��\n");
			printf("***************************************************************\n");
			printf("***************************************************************\n");
			printf("********            1.����              2.�Ա�          *******\n");
			printf("********            3.�绰����          4.��ַ          *******\n");
			printf("********            5.�˳�ͨѶ¼                        *******\n");
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