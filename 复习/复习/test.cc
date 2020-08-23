#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<list>
using namespace std;
#define HELLO "hello world";

typedef decltype(nullptr) nullptr_t;

int main()
{

	return 0;
}
//void A::fun()
//{
//	cout << "hello world" << endl;
//}
//int A::i = 23;
//class A
//{
//public:
//	A() :ci(10)
//	{}
//private:
//	void fun();
//	void fun2()
//	{
//		for (int i = 0; i < 3; ++i)
//		{
//			cout << "how are you" << endl;
//		}
//	}
//private:
//	int val;
//	static int i;
//	const int ci;
//};
//class A
//{
//public:
//	int i;
//	void fun()
//	{}
//protected:
//	int proI;
//	void proFun()
//	{}
//private:
//	int priI;
//	void priFun()
//	{}
//};
//class B : protected A
//{
//public:
//	void Bfun()
//	{
//		cout << proI << endl;
//	}
//};
//
//int main()
//{
//	cout << sizeof(A) << endl;
//	cout << sizeof(B) << endl;
//	B b;
//	b.fun();
//	return 0;
//}
//int main()
//{
//	list<int> v;
//	v.resize(10);
//	int i = 0;
//	for (auto &e : v )
//	{
//		e = i;
//		i++;
//	}
//	for (auto e : v)
//	{
//		cout << e << endl;
//		v.push_back(i++);
//	}
//	//vector<int>::iterator it = v.begin();
//	for (auto it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	return 0;
//}
//int main()
//{
//	double i = 1;
//	double &ri = i;
//	double &rri = ri;
//	cout << i << endl;
//	cout << sizeof(ri) << endl;
//	rri = 4;
//	cout << i << endl;
//
//	char &c = NULL;
//	char &c = nullptr;
//
//	return 0;
//
//}
//void fun(int i)
//{
//	cout << "this is int,ret val is void" << endl;
//}
//
//int fun(int i)
//{
//	cout << "this is int,ret val is int"
//}
//
//void fun(char c, int i)
//{
//	cout << "this is char and int" << endl;
//}
//char fun(double d, int i)
//{
//
//}
//
//int main()
//{
//
//	return 0;
//}

//dynamic_cast
//class base
//{
//public:
//
//	virtual void fun()
//	{}
//	virtual ~base()
//	{}
//};
//class drive : public base
//{
//public:
//
//	virtual void fun()
//	{}
//	virtual ~drive()
//	{}
//
//};
//class child : public drive
//{
//	virtual void fun()
//	{}
//	virtual ~child()
//	{}
//
//};
//
//int main()
//{
//	child *c = new child();
//	base* bp = dynamic_cast<base*>(c);
//	drive* dp = dynamic_cast<drive*>(c);
//
//	child * cc = dynamic_cast<child*>(bp);
//	//甚至可以使用转换过的进行复原，并不是只能向上，而且可以在合理的时候向下
//
//	base b;
//	drive *dp2 = dynamic_cast<drive*>(&b);
//	child *cp2 = dynamic_cast<child*>(&b);
//	return 0;
//}
//class base
//{
//
//};
//int main()
//{
//	int val = 0;
//	base *dp = reinterpret_cast<base*>(val);
//
//	return 0;
//}
//int main()
//{
//	const int* ci = 0;
//	volatile int *vi = nullptr;
//
//	int *nci = ci;
//	int *nvi = vi;
//
//	int *nci = const_cast<int*>(ci);
//	int *nvi = const_cast<int*>(vi);
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int *pi = &i;
//
//	int ii = static_cast<int>(i);
//	char ci = static_cast<char>(i);
//	double b = static_cast<double>(i);
//	int ib = static_cast<int>(b);
//
//	void *pp = static_cast<int*>(pi);
//
//	char *ppc = static_cast<char*>(pi);
//
//
//	return 0;
//}

//int main()
//{
//	cout << __LINE__ << endl;
//	cout << __DATE__ << endl;
//	cout << __TIME__ << endl;
//	cout << __FILE__ << endl;
//
//	cout << HELLO
//	return 0;
//}
//#include<Windows.h>
//#include<stack>
//
//
//struct BinTree
//{
//public:
//	BinTree *left;
//	BinTree *right;
//	int val;
//};
//void fun(BinTree *root)//before
//{
//	BinTree *head = root;
//	stack<BinTree*> st;
//	st.push(head);
//	while (!st.empty())
//	{
//		while (head->left)
//		{
//			cout << head->val << endl;
//			st.push(head->left);
//		}
//		head = st.top();
//
//	}
//
//
//}
//int main()
//{
//	
//	return 0;
//}

//class base
//{
//public:
//
//	virtual void basefun()
//	{
//		cout << "hello world" << endl;
//	}
//};
//class base2
//{
//public:
//
//	virtual void base2fun()
//	{
//		cout << "hello world base2" << endl;
//	}
//};
//class drive : public base,public base2
//{
//public:
//	int k;
//};
//int main()
//{
//	drive d;
//	return 0;
//}
//class base
//{
//public:
//	virtual void fun() = 0
//	{
//		cout << "hello world" << endl;
//	}
//	static void test()
//	{
//		cout << "hello test" << endl;
//	}
//private:
//
//};
//class drive
//{
//	virtual void fun(int i) = 0
//	{
//		cout << "hello " << endl;
//	}
//	virtual void doit() = 0
//	{
//		cout << "this do it" << endl;
//	}
//private:
//};
//class dri :  public drive
//{
//};
//class ddri : public dri
//{
//	virtual void fun(int i )
//	{
//		cout << " hellooooooo" << endl;
//	}
//
//	virtual void doit()
//	{
//		cout << "this is ddri doit" << endl;
//	}
//};
//int main()
//{
//	
//	ddri d;
//	cout << sizeof(base) << endl;
//	system("pause");
//	return 0;
//}
//class sigleton
//{
//	int get_key()
//	{
//		return val.key;
//	}
//
//private:
//	sigleton() :key()
//	{}
//	sigleton(const sigleton&tmp)
//	{}
//
//	int key;
//	static sigleton val;
//};
//class sigleton_lazy
//{
//public:
//	int get_key()
//	{
//		if (val == nullptr)
//		{
//			val = new sigleton_lazy;
//		}
//		return val->key;
//	}
//
//private:
//	sigleton_lazy()
//	{}
//	sigleton_lazy(const sigleton_lazy&tmp)
//	{}
//
//	static sigleton_lazy *val;
//	int key;
//};
//class data
//{
//public:
//	data() : key(10)
//	{}
//private:
//	friend void operator<<(ostream&out, data& tmp);
//	int key;
//};
//void operator<<(ostream&out, data& tmp)
//{
//	cout << "hello operator <<" << endl;
//	cout << tmp.key << endl;
//}
//class test
//{
//public:
//	test()
//	{
//		arr = new int[10];
//		cout << "hello,leaking memroy" << endl;
//	}
//	int *arr;
//};
//int * fun(int *p)
//{
//	test tmp;
//	return p;
//}

//int main()
//{
//	int *ptr = (int *)malloc(sizeof(int));
//	*ptr = 1;
//	cout << sizeof(*ptr) << endl;
//	int *ptr2 = (int *)realloc(ptr,sizeof(int)* 10);
//	
//	*ptr = 10;
//	cout << *ptr << endl;
//	//data A;
//	//cout << A;
//	system("pause");
//	return 0;
//}
////typedef struct{
//	double d;
//	char c;
//	int i;
//	char cc;
//
//}st;
//
//void fun()
//{
//	//
//}
//int main()
//{
//	enum Color//颜色
//	{
//		RED = 1,
//		GREEN = 2,
//		BLUE = 4
//	};
//	enum{COUNT = 10};
//	char arr[COUNT];
//	printf("%d\n", sizeof(st));
//	printf("%d\n", sizeof(arr));
//
//	enum Color clr = GREEN;
//	clr = 3;
//	/*st tmp;
//	printf("%d\n", &(tmp));
//
//	printf("%d\n", &(tmp.c));
//	int j = (&(tmp.c) - (&(tmp.c) - 1));*/
//
//	//printf("%d\n", &(tmp.i));
//	//int ip = &(tmp.i) - 1;
//	//int ipp = &(tmp.i);
//	//int i = ipp - ip;
//
//
//
//	printf("%d\n", sizeof(double));
//	
//
//	return 0;
//}
//void test(int n)
//{
//	printf("%d\n", n);
//}
//
//int main()
//{
//	int n = 3;
//	
//	void (*p)(int) = &test;
//	//(*p)(n);
//	p(n,n);
//	//printf(p, sz);
//	return 0;
//}
//typedef union{
//	int i;
//	char c;
//}un;
//
//int main()
//{
//	un u;
//	u.i = 1;
//	u.c = 1;
//	printf("%d\n", u.c);
//	//printf("%d\n", u.c2);
//
//
//	system("pause");
//	return 0;
//}
//typedef struct A1
//{
//	short data1;
//	char data2;
//}A1;
//typedef struct A2
//{
//	int data6;
//}A2;
//typedef struct A3
//{
//	A1 tmp1;
//	A2 tmp2;
//	char date4;
//}A3;
//int main()
//{
//	printf("%d\n",sizeof(A2));//size = 12
//	return 0;
//}
