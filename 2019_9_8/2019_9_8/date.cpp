#define _CRT_SECURE_NO_WARNINGS 1

#include"date.h"

class Date
{
	int m_year;
	int m_month;
	int m_day;
	int m_date[12];
public:
	Date()
	{
		m_year = 1;
		m_month = 1;
		m_day = 1;
		int i = 0;
		for (i = 1; i < 13; i++)
		{
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			{
				m_date[i] = 31;
			}
			else if (i == 2)
			{
				if ((m_year % 4 == 0 && m_year % 100 != 0) || (m_year % 400 == 0))
				{
					m_date[i] = 29;
				}
				else
				{
					m_date[i] = 28;
				}
			}
			else
			{
				m_date[i] = 30;
			}
			m_date[i] = i;
		}

	}
	void setDate(int year,int month ,int day)
	{
		m_year = year;
		m_day = day;
		m_month = month;
	}
	void show()
	{
		cout << m_year << ' ' << m_month << ' ' << m_day << endl;
	}
	void checkDate(int inDay)
	{
		int flag = 0;
		if (m_year % 4 == 0)
		{
			if (m_month > 2)
			{
				flag = inDay / 365;
				if (flag < 4)//year < 4 
				{
					inDay -= flag * 365;
					if ()
					{
					}
				}
			}
		}
	}




};