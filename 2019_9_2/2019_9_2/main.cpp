#define _CRT_SECURE_NO_WARNINGS 1

#include<time.h>
#include<iostream>
using namespace std;

//class thing
//{
//	int	m_allNum = 100;
//	int m_money;
//	int k = 3;
//
//public:
//	void showThing()
//	{
//
//		cout << m_money << endl;
//		cout << m_allNum << endl;
//		cout << m_allNum * m_money * k << endl;
//	}
//	void changK()
//	{
//		cout << "Put in k:" << endl;
//		cin >> k;
//	}
//	void InitThing(int money)

//	{
//		m_money = money;
//	}
//
//};
//int main()
//{
//	thing m_store[10];
//	srand(time(0));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		m_store[i].InitThing(rand());
//	}
//	for (i = 0; i < 10;i++)
//	{
//		m_store[i].showThing();
//	}
//
//	
//	return 0;
//}

//class my_date
//{
//	int m_year;
//	int m_month;
//	int m_day;
//public:
//	void getDate()
//	{
//		cout << "year"<< m_year << "month" << m_month << "day" << m_day << endl;
//	}
//	void getDate(int n)
//	{
//		int year = m_year;
//		int month = m_month;
//		int day = m_day;
//		int tmp = 0;
//		
//		if ( n + day > 30)
//		{
//			tmp = (n + day) / 30;
//			month += tmp;
//		}
//		while (month > 12)
//		{	
//			month -= 12;
//			year++;
//		}
//		cout << "year" << " " << year << " " << "month" << " " << month << " " << "day" << day << endl;
//	}
//	my_date(int year, int month, int day)
//	{
//		m_year = year;
//		m_day = day;
//		m_month = month;
//	}
//	void showDate()
//	{
//		cout << m_year << " " << m_month <<" " << m_day<< endl;
//	}
//};
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	int n = 0;
//	cin >> year >> month >> day;
//
//	my_date Date(year,month ,day);
//	Date.showDate();
//	cin >> n;
//	Date.getDate(n);
//
//	return 0;
//}




