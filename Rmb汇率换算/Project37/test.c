
#include"RMB.h"
int main()
{
	double RMB = 1000;
	int YEAR = 5;
	int change = 0;
	printf("*******************************************************************\n");
	printf("*********   1.һ�δ�����                                   ********\n");
	printf("*********   2.�ȴ����꣬���ں��ٽ���Ϣ������               ********\n");
	printf("*********   3.�ȴ����꣬���ں��ٽ���Ϣ������               ********\n");
	printf("*********   4.�ȴ�һ�꣬���ں󽫱�Ϣ�ٴ�һ�꣬����������   ********\n");
	printf("*********   5.����ڿ��������Ϣÿ�����һ��           ********\n");
	printf("*******************************************************************\n");
	printf("��ѡ��һ�ִ洢�ķ�ʽ:>");
	scanf_s("%d", &change);
	if ((change<1) || (change>5))
	{
		printf("�����������������\n");
		while ((change<1) || (change>5))
		{
			printf("��ѡ��һ�ִ洢�ķ�ʽ:>");
			scanf_s("%d", &change);
		}
	}
	printf("ѡ����Ҫ�洢�Ľ��:>");
	scanf_s("%lf", &RMB);
	if (RMB <= 0)
	{
		printf("��������������������\n");
		while (RMB <= 0)
		{
			printf("ѡ����Ҫ�洢�Ľ��:>");
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