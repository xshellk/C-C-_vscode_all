#define _CRT_SECURE_NO_WARNINGS 1


#include <iostream>
#include <vector>
#include <string>
using namespace std;

class HighAcc
{
	int m_num[100];
public:
	HighAcc(string s)
	{
		string tmp(s);
		for (int i = 0, int j = s.size(); i < j; i++, j--)
		{
			swap(tmp[i], tmp[j]);
		}
	}
	

};


int main()
{
	//vector<int> ve(1);
	//cout << ve.size() << endl;

	//vector<int>::iterator it = ve.begin();
	//ve.insert(it,3,10);
	//it = ve.insert(it, 4);
	//for (auto & i : ve)
	//{
	//	cout << i << endl;

	//}

	//ve.insert(ve.begin(), 4);
	//ve.insert(ve.begin() + 2,49);
	//ve.insert(ve.begin(), 4);
	//ve.insert(ve.begin(), 4);
	//ve.insert(ve.end(), 4);
	//ve.insert(ve.end(), 4);
	//ve.insert(ve.end(), 4);
	//for (auto & i : ve)
	//{
	//	cout << i << endl;
	//}
	//cout << endl;
	//ve.erase(ve.begin());
	//cout << ve.capacity() << endl;
	//
	//
	//for (auto & i : ve)
	//{
	//	cout << i << ' ';
	//}
	//ve.erase(ve.begin());
	//ve.erase(ve.begin());
	//ve.erase(ve.begin());
	//ve.erase(ve.begin());
	//cout << endl;
	//for (auto & i : ve)
	//{
	//	cout << i << ' ';
	//}
	//cout << endl;
	//cout << ve.capacity() << endl;

	//string s1("hello word");
	//cout << "s1  " << s1 << endl;
	//cout << "size  " << s1.size() << endl << "capacity  " << s1.capacity() << endl;
	//s1.resize(20);
	//cout << endl;
	//cout << "s1  " << s1 << endl;
	//cout << "size  " << s1.size() << endl;
	//cout << "capacity  " << s1.capacity() << endl;
	//cout << endl;

	//s1.clear();
	//cout << "s1  " << s1 << endl << "size  " << s1.size() << endl << "capacity  " << s1.capacity() << endl;
	//cout << endl;
	//s1.reserve(100);
	//cout << s1.capacity() << endl;
	//cout << s1.size() << endl;
	
	string s("123456789");
	HighAcc ha(s);


	return 0;
}