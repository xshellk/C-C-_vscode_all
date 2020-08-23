#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;

class String {
private:
	char* _str;
public:    
	String(const char* str = "jack")   
	{ 
		_str = (char*)malloc(strlen(str) + 1);   
		strcpy(_str, str); 
	}

  ~String()    
	{
	cout << "~String()" << endl;
	free(_str);   
	
	} 
  
};

int main() {
	String s1("hello");
	String s2("world");
	s1 = s2;
	return 0;
}