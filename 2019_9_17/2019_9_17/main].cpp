#define _CRT_SECURE_NO_WARNINGS 1


#include <iostream>
#include <string>
#include <Cstdlib>
#define DATESPACE 16
using namespace std;


class String
{
	int m_size;
	int m_capcity;
	char *date;

public :
	String() :m_capcity(DATESPACE - 1), m_size(0)
	{
		date = (char *)malloc(sizeof(char) * DATESPACE - 1);
	}
	String(char *str)
	{
		int tmp;

		m_size = strlen(str);
		tmp = m_size / DATESPACE;
		date = (char *)malloc(sizeof(char)* (tmp + 1) * DATESPACE - 1);
		strcpy(date, str);
		date[(tmp + 1)*DATESPACE - 2] = '\0';

	}

	int size()
	{
		return m_size;
	}
	int capcity()
	{
		return m_capcity;
	}




	~String()
	{
		if (!date)
		{
			free(date);
			date = NULL;
		}
	}

	friend ostream & operator << (ostream & os, String tmp);
};

ostream & operator << (ostream & os, String tmp)
{
	cout << tmp.date;

	return os;
}



int main()
{
	String me("hello word");
	cout << me << endl;

	return 0;
}