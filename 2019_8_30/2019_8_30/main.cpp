#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

class c1
{
public:
	const int i;
	int b;
	c1() :i(1), b(3)
	{
	}
	int fun() const
	{
		fun2();
	}
	int fun2() 
	{
		fun();
	}
};

int main()
{
	const c1 my;
	my.fun();
	my.fun2();

	return 0;
	
}