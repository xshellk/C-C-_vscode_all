
#include"RMB.h"
int main()
{
	double RMB = 1000;
	int YEAR = 5;
	int change = 0;
	printf("*******************************************************************\n");
	printf("*********   1.一次存五年                                   ********\n");
	printf("*********   2.先存两年，到期后再将本息存三年               ********\n");
	printf("*********   3.先存三年，到期后再将本息存两年               ********\n");
	printf("*********   4.先存一年，到期后将本息再存一年，连续存五年   ********\n");
	printf("*********   5.存活期款存款，活期利息每年节算一次           ********\n");
	printf("*******************************************************************\n");
	printf("请选择一种存储的方式:>");
	scanf_s("%d", &change);
	if ((change<1) || (change>5))
	{
		printf("输入错误，请重新输入\n");
		while ((change<1) || (change>5))
		{
			printf("请选择一种存储的方式:>");
			scanf_s("%d", &change);
		}
	}
	printf("选择你要存储的金额:>");
	scanf_s("%lf", &RMB);
	if (RMB <= 0)
	{
		printf("金额输入错误，请重新输入\n");
		while (RMB <= 0)
		{
			printf("选择你要存储的金额:>");
			scanf_s("%lf",&RMB);
		}
	}
	switch (change)
	{
	case(1) : FirstChange(&RMB);
		break;
	case(2) : SecondChange(&RMB);
		break;
	case(3) : ThirdChange(&RMB);
		break;
	case(4) : FourthChange(&RMB);
		break;
	case(5) : FifthChange(&RMB);
		break;
	default:EXIT();
		break;
	}
	return 0;
}