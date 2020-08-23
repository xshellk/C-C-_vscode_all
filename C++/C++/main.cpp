#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
//
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year = 2019, int month = 12, int day = 7)
//	{
//		m_year = year;
//		m_month = month;
//		m_day = day;
//		for (int i = 0; i < 13; i++)
//		{
//			if (i == 0)
//			{
//				NumDay[i] = 0;
//			}
//			else if (i == 2)
//			{
//				NumDay[i] = 28;
//			}
//			else if (i % 2 == 1 && i < 8)
//			{
//				NumDay[i] = 31;
//			}
//			else if ( i < 8)
//			{
//				NumDay[i] = 30;
//			}
//
//			if (i % 2 == 1 && i >= 8)
//			{
//				NumDay[i] = 30;
//			}
//			else if ( i >= 8)
//			{
//				NumDay[i] = 31;
//			}
//		}
//		//NumDay[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	}
//	Date(const Date& d)
//	{
//		if (*this != d)
//		{
//			m_year = d.m_year;
//			m_month = d.m_month;
//			m_day = d.m_day;
//		}
//
//	}
//	Date& operator=(const Date& d)
//	{
//		if (*this != d)
//		{
//			m_year = d.m_year;
//			m_month = d.m_month;
//			m_day = d.m_day;
//		}
//		return *this;
//	}
//	Date& operator+(int days)
//	{
//		YearSet();
//
//		while (m_month == 2 ? days && days > NumDay[m_month] + NumDay[0] - m_day : days && days > NumDay[m_month]- m_day)
//		{
//			if (m_month == 2)
//			{
//				days -= NumDay[m_month] + NumDay[0] - m_day;
//				m_day = 1;
//				days--;
//			}
//			else
//			{
//				days -= NumDay[m_month] - m_day;
//				m_day = 1;
//				days--;
//			}
//			m_month++;
//			if (m_month == 13)
//			{
//				m_year++;
//				m_month = 1;
//				m_day = 1;
//				days--;
//				YearSet();
//
//			}
//		}
//		m_day += days + 1;
//		return *this;
//	}
//	Date& operator-(int days)
//	{
//
//	}
//	int operator-(const Date& d);
//	Date& operator++()
//	{
//		if (m_day < NumDay[m_month])
//		{
//			m_day++;
//			return *this;
//		}
//	}
//	Date operator++(int);
//	Date& operator--();
//	Date operator--(int);
//
//
//	bool operator>(const Date& d)const;
//	bool operator>=(const Date& d)const;
//	bool operator<(const Date& d)const;
//	bool operator<=(const Date& d)const;
//	bool operator==(const Date& d)const
//	{
//		if (m_year == d.m_year && m_month == d.m_month && m_day == d.m_day)
//		{
//			return true;
//		}
//		else
//		{
//			false;
//		}
//	}
//	bool operator!=(const Date& d)const;
//private:
//	void YearSet()
//	{
//		if (m_year % 4 == 0)
//		{
//			if (m_year % 400 == 0)
//			{
//				NumDay[0] = 1;
//				return;
//			}
//			if (m_year % 100 == 0)
//			{
//				NumDay[0] = 0;
//				return;
//			}
//			NumDay[0] = 1;
//		}
//		else
//		{
//			NumDay[0] = 0;
//		}
//	}
//
//
//private:
//	int m_year;
//	int m_month;
//	int m_day;
//	int NumDay[13];
//
//
//	
//};
//
//int main()
//{
//	Date d;
//
//
//	return 0;
//
//}
//#include<iostream>
//#include<list>
//using namespace std;
//
//template<typename Type>
//void fun(Type a)
//{
//	cout << typeid(a).name() << endl;
//	cout << "hello world \b" << endl;
//}
//int main()
//{
//	fun(20);
//	list<int> a;
//	fun(2.34);
//	fun('a');
//	return 0;
//}


#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

//class Solution 
//{
//private:
//	string str;
//	//int nums[20] = { 1, 2, 3, 4, 5, 6 };
//	
//public :
//	string toLowerCase(string str)
//	{
//		for (int i = 0; i < str.size(); i++)
//		{
//			if (str[i] > 'a' && str[i] < 'z')
//			{
//				str[i] -= 32;
//			}
//		}
//	}
//public: 
//	void rotate(int * nums, int k)
//	{
//		
//	}
//};
//
//int main()
//{
//	//printf("%d %d", 'a', 'A');
//
//	return 0;
//}

//int main()
//{
//	unsigned int i = 0;
//
//	for (int j = 0; j < i - 1; j++)
//	{
//		cout << j << endl;
//	}
//	//printf("%d = \n %u = \n", i - 1, i - 1);
//	return 0;
//}
//int uadd_ok(unsigned x, unsigned y)
//{
//	unsigned x_y = x + y;
//	if (x_y < x)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int i = -1;
//	i = i >> 1;
//	cout << "-1/2 = " << -1 / 2 << endl;
//	cout << "i = " << i << endl;
//	return 0;
//}



//int main()
//{
//	int i = 12340;
//	int j = -12340;
//	cout << "i / 4  " << (((i >> 3) + 1) >> 1) << endl;
//	cout << "j / 4  " << (((j >> 3) + 1) >> 1) << endl;
//	return 0;
//}


//#include<show-bytes.c>
//int main()
//{
//	show_bytes(int);
//
//}

int main()
{
	double arr[90000] = { 0 };
	arr[90000 - 1] = 1.1;
	return 0;
}