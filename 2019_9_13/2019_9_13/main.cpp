#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

//template <class T>
//class cal
//{
//public :
//	void add(T a, T b)
//	{
//		cout << a + b << endl;
//	}
//	void sub(T a, T b)
//	{
//		cout << a - b << endl;
//
//	}
//	void fun_max(T a, T b);
//};
//template <class T>
//void cal<T>::fun_max(T a, T b)
//{
//	if (a > b)
//	{
//		cout << a << endl;
//		return;
//	}
//	else
//	{
//		cout << b << endl;
//		return;
//	}
//}
//int main()
//{
//	cal<int> a1;
//	a1.add(3, 4);
//	a1.sub(3, 4);
//	a1.fun_max(3, 4);
//
//
//
//	return 0;
//}


template <class T>
class date
{

	T m_month;
	T m_year;
	T m_day;
public:
	date(T year, T month, T day) : m_year(year), m_month(month) ,m_day(day)
	{}
	friend ostream & operator << <T>(ostream & os, date tmp);
	friend iostream & operator >> <T>(iostream & is, date tmp);

};


template <class T>
ostream & operator <<(ostream & os, date<T> tmp)
{
	os << tmp.m_year << endl << tmp.m_month << endl << tmp.m_day << endl;
	return os;
}


template <class T>
iostream & operator >> (iostream & is, date<T> tmp)
{
	is >> tmp.m_year >> tmp.m_day >> tmp.m_day;
	return is;
}
int main()
{
	date<int> tmp(2019,8,19);
	cout << tmp << endl;

	return 0;
}