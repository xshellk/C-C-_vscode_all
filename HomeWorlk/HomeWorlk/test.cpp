#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <iostream>
//#include <assert.h>
////using namespace std;
//using namespace std;

//class solution
//{
//private:
//	int length;
//	int capcity;
//
//public:
//
//	void rotate(int nums[], int k)
//	{
//		if (k + length >= capcity)
//		{
//			return;
//		}
//		int tmp = length;
//		while (tmp--)
//		{
//			nums[length + k - 1] = nums[length - 1];
//		}
//	}
//public:
//	int removeElement(int nums[], int val)
//	{
//		int tmp = length;
//		int read;
//		int write;
//		read = write = 0;
//		while (read == length - 1)
//		{
//			if (nums[read] = val)
//			{
//				read++;
//				tmp--;
//				continue;
//			}
//			nums[write] = nums[read];
//			write++;
//			read++;
//		}
//		length = tmp;
//		return length;
//	}
//public:
//	int searchInsert(int nums[], int targrt)
//	{
//		int falg = 0;
//		if (nums[0] > nums[1])
//		{
//			while (length > falg)
//			{
//				if (nums[falg] <= targrt)
//				{
//					return falg;
//				}
//				falg++;
//			}
//		}
//		else
//		{
//			while (length > falg)
//			{
//				if (nums[falg] >= targrt)
//				{
//					return falg;
//				}
//				falg++;
//			}
//		}
//		
//	}
//public:
//	bool canConstruct(char *ransomNote, char *magazine) {
//		int ranson[26] = { 0 };
//		int maga[26] = { 0 };
//		
//		for (int i = 0;magazine[i]; i++)
//		{
//			maga[magazine[i] - 97] = 1;
//		}
//		for (int i = 0; ransomNote[i]; i++)
//		{
//			ranson[ransomNote[i] - 97] = 1;
//		}
//		for (int i ;;i++)
//		{
//			if (ransomNote[i] != magazine[i])
//			{
//				return false;
//			}
//		}
//		return true;
//
//	}
//public:
//	bool isPalindrome(int x)
//	{
//		int i = 0;
//		int j = 0;
//		int m_size[32] = { 0 };
//		while (x!=0)
//		{
//			m_size[i] = x % 10;
//			x /= 10;
//			i++;
//		}
//		i--;
//		while (i > j)
//		{
//			if (m_size[j] != m_size[i])
//			{
//				return false;
//			}
//		}
//		return true;
//	}
//	void merge(int nums1[], int m, int nums2[], int n)
//	{
//		while (n > 0)
//		{
//			nums1[n + m] = nums2[n - 1];
//		}
//	}
//	bool containsDuplicate(int nums[])
//	{
//		//qsort(nums,langth,);
//
//	}
//};
//bool isPalindrome(int x)
//{
//	int i = 0;
//	int j = 0;
//	int m_size[32] = { 0 };
//	while (x != 0)
//	{
//		m_size[i] = x % 10;
//		x /= 10;
//		i++;
//	}
//	i--;
//	while (i > j)
//	{
//		if (m_size[j] != m_size[i])
//		{
//			printf("false\n");
//			return false;
//		}
//		i--;
//		j++;
//	}
//	printf("true\n");
//	return true;
//}


//int main()
//{
//	isPalindrome(2112);
//	string s;
//	return 0;
//}
//int main()
//{
//	string a = "hello world";
//	string b = a;
//	if (a.c_str() == b.c_str())
//	{-		[原始视图]	0x009bf9a4 {...}	std::_String_iterator<std::_String_val<std::_Simple_types<char> > > *

//		cout << "true\n" << endl;
//	}
//	else
//	{
//		cout << "false" << endl;
//	}
//	return 0;
//}
//int main()
//{
//	string str = "hello bit";
//	string::iterator it = str.begin();
//	while (it != str.end())
//	{
//		if (*it != ' ')
//			cout << *it;
//		else
//		{
//			
//			str.erase(it);
//			cout << *it;
//		}
//		
//		it++;
//	}
//	return 0;
//}

//int main()
//{
//	string s1 = "hello world";
//	string s2 = "change world";
//	string::iterator it = s1.begin();
//	swap(s1, s2);
//	while (it != s1.end())
//	{
//		cout << *it;
//	}
//	cout << endl;
//	return 0;
//}
//#define _SIZE 15
//namespace bit
//{
//	class string
//	{
//	private:
//		char *m_str;
//		int m_size;
//		//int m_langth;
//		int m_capacity;
//	public:
//		typedef char* iterator;
//		//string& operator+=(const string& str);
//
//
//		/////////////////////////////////////////////////////////////
//
//	public:
//		string(const char * str = "") :m_str(nullptr), m_size(0), m_capacity(_SIZE)
//		{
//			//if (str == nullptr)
//			//{
//			//	assert(false);
//			//	return;
//			//}
//			m_size = strlen(str) + 1;
//			while (m_size > m_capacity)
//			{
//				m_capacity *= 2;
//				m_capacity += 1;
//			}
//			m_str = new char[m_capacity];
//			strcpy(m_str,str);
//		}
//		string(const string& str) :m_str(new char[strlen(str.m_str) + 1])
//		{
//			//string tmp;
//			//tmp.m_str = str.m_str;
//			//m_size = str.m_size;
//			//m_langth = str.m_langth;
//			//m_capacity = str.m_capacity;
//			//strcpy(tmp.m_str, str.m_str);
//			//tmp.m_size = str.m_size;
//			//string tmp(str.m_str);
//
//			/*string mp;
//			mp = *this;
//			*this = tmp;
//			tmp = mp;*/
//			strcpy(m_str,str.m_str);
//
//		}
///////////////////////////////////////////////////////////////   
//		void resize(int i)
//		{
//			if (i > m_size)
//			{
//				while (m_size < i)
//				{
//					m_str[m_size] = '\0';
//				}
//			}
//			else if (i < m_size)
//			{
//				m_str[i - 1] = '\0';
//			}
//		}
//		void reserve(int i)
//		{
//			if (i > m_capacity)
//			{
//				char * tmp = new char[i];
//				strcpy(tmp, m_str);
//				delete[] m_str;
//				m_str = tmp;
//				m_capacity = i;
//			}
//		}
//		
//		int capacity()
//		{
//			return m_capacity;
//		}
//		int size()
//		{
//			return m_size;
//		}
//		char* str()
//		{
//			return m_str;
//		}
//		size_t find(char c,size_t pos = 1)
//		{
//			while ( pos < m_size)
//			{
//				if (m_str[pos - 1] == c)
//				{
//					return pos;
//				}
//				pos++;
//			}
//			return 0;
//		}
//		size_t find(const char* c, size_t pos = 1)
//		{
//			pos = strstr(m_str, c) - m_str + 1;
//		}
//		string SubStr(size_t pos, size_t n)
//		{
//			string tmp;
//			while (n > 0)
//			{
//				tmp += m_str[pos - 1];
//				pos++;
//				n--;
//			}
//			
//			return tmp;
//		}
//
//		 
///////////////////////////////////////////////////////////////
//		friend ostream& operator<<(ostream & out, string &str);
//		string& operator=(const string& str)
//		{
//			if (m_size < str.m_size)
//			{
//
//			}
//			if (this != &str)
//			{
//				m_str = str.m_str;
//				m_size = str.m_size;
//				//m_langth = str.m_langth;
//				m_capacity = str.m_capacity;
//			}
//			return *this;
//		}
//		/*char* operator=(const char c)
//		{
//			m_str[m_size - 1] = c;
//			return m_str;
//		}*/
//		string& operator+=(const string& str)
//		{
//			if (m_capacity < str.m_size + m_size)
//			{
//				while (str.m_size + m_size > m_capacity)
//				{
//					changeSize();
//				}
//				m_size += str.m_size - 1;
//				char* tmp;
//				tmp = new char[m_capacity];
//				strcpy(tmp, m_str);
//				strcat(tmp, str.m_str);
//				delete[]m_str;
//				m_str = tmp;
//			}
//			else
//			{
//				strcat(m_str, str.m_str);
//				m_size += str.m_size - 1;
//
//			}
//			
//			return *this;
//		}
//
//		string& operator+=(char c)
//		{
//			if (m_capacity < m_size + 1)
//			{
//				changeSize();
//				char* tmp;
//				tmp = new char[m_capacity];
//				strcpy(tmp, m_str);
//				delete[]m_str;
//				m_str[m_size - 1] = c;
//				m_size++;
//				m_str[m_size - 1] = '\0';
//			}
//			else
//			{
//				m_str[m_size - 1] = c;
//				m_size++;
//				m_str[m_size - 1] = '\0';
//			}
//
//			return *this;
//		}
//
//		char operator[](int i)const
//		{
//			assert(i < m_size);
//			return *(m_str + i - 1);
//		}
//		// char operator[](int i)
//		//{
//		//	 assert(i < m_size);
//
//		//	 return m_str[i - 1];
//		//}
//		string & operator+(const string & str)
//		{
//			/*while (str.m_size + m_size > m_capacity)
//			{
//				changeSize();
//			}
//			m_size += str.m_size;
//			char* tmp;
//			tmp = new char[m_capacity];
//			strcpy(tmp, m_str);
//			strcat(tmp, str.m_str);
//			delete[]m_str;
//			m_str = tmp;*/
//			*this += str;
//			return *this;
//		}
//		string &operator+(const char c)
//		{
//			*this += c;
//			return *this;
//		}
//
//		bool operator<(const string & str)const
//		{
//			if (strcmp(str.m_str, m_str) > 0)
//			{
//				return true;
//			}
//			else
//			{
//				return false;
//			}
//		}
//
//		bool operator>(const string & str)const
//		{
//			if (strcmp(str.m_str, m_str) < 0)
//			{
//				return true;
//			}
//			else
//			{
//				return false;
//			}
//		}
//
//		bool operator<=(const string & str)const
//		{
//			if (strcmp(str.m_str, m_str) >= 0)
//			{
//				return true;
//			}
//			else
//			{
//				return false;
//			}
//		}
//		bool operator>=(const string & str)const
//		{
//			if (strcmp(str.m_str, m_str) <= 0)
//			{
//				return true;
//			}
//			else
//			{
//				return false;
//			}
//		}
//
//		bool operator!=(const string& str)const
//		{
//			if (strcmp(str.m_str, m_str) == 0)
//			{
//				return false;
//			}
//			else
//			{
//				return true;
//			}
//		}
//		
//		/////////////////////////////////////////////////////////////
//
//
//
//		/////////////////////////////////////////////////////////////
//
//		iterator begin()
//		{
//			return m_str;
//		}
//		iterator end()
//		{
//			return m_str + m_size - 1;
//		}
//		/////////////////////////////////////////////////////////////
//
//
//		/////////////////////////////////////////////////////////////
//
//		~string()
//		{
//			if (m_str != nullptr)
//			{
//				delete[] m_str;
//				m_str = nullptr;
//			}
//		}
//		/////////////////////////////////////////////////////////////
//
//	private:
//		void changeSize()
//		{
//
//			m_capacity *= 2;
//			m_capacity += 1;
//		}
//	};
//}
///////////////////////////////////////////////////////////////
//
//ostream& bit::operator<<(ostream & out, bit::string &str)
//{
//	out << str.m_str;
//	return out;
//}
//

/////////////////////////////////////////////////////////////

//int main()
//{
//	//bit::string s("hello world");
//	//cout << "s = " << s << endl;
//	//bit::string s2(" Im bit");
//	////s += s2;
//	//cout << "size :" << s.size() << endl;
//	//s = s + s2;
//	//cout << "size :" << s.size() << endl;
//	//cout << s << endl;
//	//cout << "capacity = " << s.capacity() << endl;
//
//	//cout << s[2] << endl;
//	//bit::string::iterator it = s.begin();
//	//while (it < s.end())
//	//{
//	//	cout << *it;
//	//	it++;
//	//}
//	//cout << *it <<endl;
//	//cout << endl;
//	//cout << s.SubStr(5, 5) << endl;
//	////s = s + 'X';
//	//cout << s << endl;
//	char ret[20];
//	cout << sizeof(ret) << endl;
//
//
//	return 0;
//}


#include<stdio.h>
#include<iostream>
#include<vector>
#include<string.h>

//using namespace std;
//
//
//int main()
//{
//	int team = 0;
//	vector<int> player;
//	int popo = 0;
//	int tmp = 0;
//	int count = 0;
//	int max = 0;
//	cin >> team;
//	count = 3 * team;
//	while (count--)
//	{
//		cin >> tmp;
//		player.push_back(tmp);
//	}
//	for (int i = player.size(); i > 0; i--)
//	{
//		for (int j = 0; j < i - 1; j++)
//		{
//			if (player[j] < player[j + 1])
//			{
//				popo = player[j];
//				player[j] = player[j + 1];
//				player[j + 1] = popo;
//			}
//		}
//	}
//	for (int i = 0; i < team; i++)
//	{
//		max += player[team + i];
//	}
//
//	return 0;
//
//
//}

//int main()
//{
//	char str1[1024] = { 0 };
//	int size1 = 0;
//	char str2[1024] = { 0 };
//	int size2 = 0;
//	char tmp[1024] = { 0 };
//	int num = 0;
//	for (size1 = 0;; size1++)
//	{
//		str1[size1] = getchar();
//		if (str1[size1] == '\n')
//			break;
//	}
//	for (size2 = 0;; size2++)
//	{
//		str2[size2] = getchar();
//		if (str2[size2] == '\n')
//			break;
//	}
//
//	for (int i = 0; i < size1; i++)
//	{
//		for (int j = 0; j < size2; j++)
//		{
//			if (str1[i] == str2[j])
//			{
//				break;
//			}
//			if (j == size2 - 1)
//			{
//				tmp[num] = str1[i];
//				++num;
//			}
//		}
//	}
//	printf("%s", tmp);
//
//	return 0;
//}

