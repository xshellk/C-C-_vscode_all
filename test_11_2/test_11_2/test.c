#define _CRT_SECURE_NO_WARNINGS 1
#include"contect.h"
int main()
{
	CONTECT contect = { 0 };
	int key = 0;
	printf("***************************************************\n");
	printf("***************************************************\n");
	printf("**********         1.��            2.��    ********\n");
	printf("**********         3.��ʾ          4.�˳�  ********\n");
	printf("***************************************************\n");
	printf("***************************************************\n");
	printf("��������Ҫ���еĲ�����");
	scnaf("%d", &key);
	switch (key)
	{
	case(1) :
		Add(&contect);
		break;
	case(2) :
		Del(&contect);
		break;
	case(3) :
		Put(&contect);
		break;
	case(4) :
		Esc(&contect);
		break;
	default:
		break;
	}

	system("pause");
	return 0;
}