
#include"Contact.h"
void menu()
{
	printf("*************************************\n");
	printf("*****   1.  add     2.   del    *****\n");
	printf("*****   3.  seatch  4.   modify *****\n");
	printf("*****   5.  show    6.   sort   *****\n");
	printf("*****   0.exit                  *****\n");
	printf("*************************************\n");
}
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MOODIFY,
	SHOW,
	SORT
};
void test()
{
	int input = 0;
	Contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��>");
		scanf_s("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			break;
		case SEARCH:
			break;
		case MOODIFY:
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case 0:
			printf("�˳�ͨѶ¼");
			break;
		}
	} while (input);
} 
int main()
{
	test();
	return 0;
}