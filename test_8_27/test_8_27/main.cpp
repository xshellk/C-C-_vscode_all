#define _CRT_SECURE_NO_WARNINGS 1

//2、使用范围for，通过输入为一个数组赋值
//3、有以下结构：
//
//struct student{
//	char name[32];
//	int age;
//	int class;
//	bool sex;
//};
//
//写出函数，用函数重载的方式编写程序，统计出一个以上述结构为基准的结构体数组中：
//1、名字为X的出现了多少次
//2、年龄为X的出现了多少次
//3、班级为X的出现了多少次
//4、性别的X的出现了多少次
//
//例如：名字为X的可以是这样的声明：
//int countName(student * src, int n, char * name);
//tip:可以考虑用缺省参数的方式，或者回调函数的方式实现。
#include<iostream>

using namespace std;

struct student{
	char _name[32];
	int _class;
	bool _sex;
	int _age;
};


//int main()
//{
//	int arr[] = { 1, 2, 3 };
//	for (auto i : arr)
//	{
//		cin >> i;
//	}
//	for (auto i : arr)
//	{
//		cout << i << "  ";
//	}
//		return 0;
//}



void countName(student * src, int n)
{
	int NumName = 0;
	char name[32] = { 0 };
	cout << "Input name:";
	cin >> name;

	for (int i = 0; i < n; i++)
	{
		if (strcmp(src->_name, name) == 0)
		{
				NumName++;
		}
		src++;
	}
	cout << "名字为 "<< name << " 有" << NumName << "个" << endl;
}

void countClass(student *people, int n)
{
	int NumClass = 0;
	int _class = 0;
	cout << "Input class" << endl;
	cin >> _class;
	for (int i = 0; i < n; i++)
	{
		if (people->_class == _class)
		{
			NumClass++;
		}
		people++;

	}
	cout << " 班级为 " << _class << " 有" << NumClass << "个" << endl;
}

void countSex(student *people, int n)
{
	int NumSex = 0;
	bool sex = 0;
	cout << "Input sex :" << endl;
	cin >> sex;
	for (int i = 0; i < n;i++)
	{
		if (people->_sex == true)
		{
			NumSex++;
		}
		people++;

	}

	cout << "性别为 " << sex << " 有" << NumSex << "个" << endl;
}

void countAge(student *people, int n)
{
	int NumAge = 0;
	int age = 0;
	cout << "Input age:";
	cin >> age;
	for (int i = 0; i < n; i++)
	{
		if (people->_age == age)
		{
			NumAge++;
		}
		people++;

	}

	cout << "年龄为 " << age << " 有" << NumAge << "个" << endl;
}

void DoChange(student *people, int n, int change = 1)
{
	switch (change)
	{
	case 1:
		countName(people, n);
		break;
	case 2:
		countClass(people, n);
		break;
	case 3:
		countSex(people, n);
		break;
	case 4:
		countAge(people, n);
		break;
	default:
		break;
	}

}

int main()
{
	int change = 0;
	int n = 0;
	
	student people[10] = { { "zhangwei", 1, 1, 12 }, { "zhangwei", 1, 1, 11 }, { "xiaoming", 2, 0, 11 }, { "xiaoming", 2, 1, 13 }, { "xiaoming", 2, 1, 16 } };
	n = sizeof(people) / sizeof(people[0]);
	cout << "***********************************************" << endl;
	cout << "*********      1.Name     2.Class    *********" << endl;
	cout << "*********      3.Sex      4.Age      *********" << endl;
	cout << "***********************************************" << endl;

	cout << "Please do change:";
	cin >> change;
	if (change < 5 && change > 0)
	{
		DoChange(people, n, change);
	}
	else
	{
		DoChange(people, n);
	}
	cout << endl;
	system("pause");

	return 0;

}