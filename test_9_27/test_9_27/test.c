#define _CRT_SECURE_NO_WARNINGS 1
#include"calculator.h"
int main()
{
	double j = 0;
	double i = 0;
	int k = 0;
	printf("**********************************************\n");
	printf("**********************************************\n");
	printf("****          1.Add         2.Snb         ****\n");
	printf("****          3.Mul         4.Div         ****\n");
	printf("****          5.End                       ****\n");
	printf("**********************************************\n");
	printf("��������Ҫ���е����㷽ʽ��");
	scanf("%d",&k);
	while (k != 5)
	{
		if ((k<1) || (k>4))
		{
			printf("����������������룺");
			scanf("%d", &k);
			while ((k<1) || (k>4))
			{
				scanf("%d", &k);
				if ((k >= 1) && (k <= 4))
				{
					break;
				}
			}

		}
		printf("������Ҫ����Ѱ������֣�");
		scanf("%lf%lf",&i,&j);
		switch (k)
		{
		case(1):
			Add(i, j);
			break;
		case(2):
			Sub(i, j);
			break;
		case(3):
			Mul(i, j);		
			break;
		case(4):
			Div(i, j);
			break;
		default:
			break;
		}
		putchar('\n');
		printf("**********************************************\n");
		printf("**********************************************\n");
		printf("****          1.Add         2.Snb         ****\n");
		printf("****          3.Mul         4.Div         ****\n");
		printf("****          5.End                       ****\n");
		printf("**********************************************\n");
		printf("��������Ҫ���е����㷽ʽ��");
		scanf("%d", &k);
	}
	system("pause");
	return 0;
}