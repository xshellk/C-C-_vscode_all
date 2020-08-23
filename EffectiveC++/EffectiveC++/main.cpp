#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>

using namespace std;

template<typename T>
class rational{
public:

	rational(const T& _numberator = 0, const T& _denominator = 1):
	numberator(_numberator), (_denominator)
	friend const rational operator*(const rational &lhs, const rational &rhs)
	{
		return rational(lhs.numberator()* rhs.numberator(), lhs.denominator() * rhs.denominator());
	}
	const T numberator() const
	{
		return T;
	}
	const T denominator() const
	{
		return T;
	}
private:
	
};

int main()
{
	rational<int> one(1, 2);
	rational<int> result = one * 2;

	return 0;
}



//class TextBlock{
//public:
//	const char&operator[](size_t position)const
//	{
//		//
//		//
//		//
//		return text[position];
//	}
//	char&operator[](size_t position)
//	{
//		return const_cast<char&>(static_cast<const TextBlock&>(*this)[position]);
//	}
//private:
//	string text;
//};
//class Shape{
//public:
//	int object() const
//	{
//		cout << "hello world" << endl;
//	}
//};
//class A : public Shape
//{
//public:
//	int object()
//	{
//		cout << " This is class A" << endl;
//	}
//};
//
//int main()
//{
//
//	return 0;
//}