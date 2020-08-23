#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
//void fun(int & a, int & b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//
//	int a = 0;
//	int b = 4;
//	int c = 2;
//	int d = 6;
//	fun(a, b);
//	cout << a << endl << b << endl;
//	return 0;
//}

bool strtoi(const char * arr, int & i)
{
	while (*arr != '\0')
	{
		i += *arr - 48;
		arr++; 
		i *= 10;
	}
	i /= 10;
	return true;
}
void sysResverse(int & num, int flag)
{
	int tmp = 0;
	while (num > 0)
	{
		tmp += num % flag;
		num /= flag;
		tmp *= flag;
	}
	tmp /= flag;
	num = tmp;
}

int main()
{
	int num = 234;
	int i = 0;
	int flag = 0;
	char arr[] = "123456";
	bool bo = strtoi(arr, i);
	

	if (bo)
	{
		cout << arr << endl;
		cout << i << endl;
	}
	else
	{
		cout << "Don't do it " << endl;
	}

	cout << " Input num:";
	cin >> flag;

	sysResverse(num, flag);
	cout << num << endl;

	return 0;
}