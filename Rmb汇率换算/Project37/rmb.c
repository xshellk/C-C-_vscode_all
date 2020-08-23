#include"RMB.h"

void FirstChange(double *rmb)
{
	*rmb = *rmb + 5 * (*rmb)*(0.0585);
	printf("%6.2f\n", *rmb);
	system("pause");
	return;
}
void SecondChange(double *rmb)
{
	*rmb = *rmb + 2 * (*rmb)*(0.0468);
	*rmb = *rmb + 3 * (*rmb)*(0.054);
	printf("%6.2f\n", *rmb);
	system("pause");
	return;
}
void ThirdChange(double *rmb)
{
	*rmb = *rmb + 3 * (*rmb)*(0.054);
	*rmb = *rmb + 2 * (*rmb)*(0.0468);
	printf("%6.2f\n", *rmb);
	system("pause");
	return;
}
void FourthChange(double *rmb)
{
	int i = 0;
	while (i < 5)
	{
		*rmb = (*rmb)*(1 + 0.0414);
		i++;
	}
	printf("%6.2f\n", *rmb);
	system("pause");
	return;
}
void FifthChange(double *rmb)
{
	int i = 0;
	while ((i / 4) < 5)
	{
		*rmb = (*rmb)*(1 + 0.0072);
		i++;
	}
	printf("%6.2f\n", *rmb);
	system("pause");
	return;
}
void EXIT()
{
	printf("ÊäÈë´íÎó£¬ÍË³ö³ÌÐò\n");
	system("pause");
	return;
}