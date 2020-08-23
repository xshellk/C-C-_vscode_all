#define _CRT_SECURE_NO_WARNINGS 1

//2��ʹ�÷�Χfor��ͨ������Ϊһ�����鸳ֵ
//3�������½ṹ��
//
//struct student{
//	char name[32];
//	int age;
//	int class;
//	bool sex;
//};
//
//д���������ú������صķ�ʽ��д����ͳ�Ƴ�һ���������ṹΪ��׼�Ľṹ�������У�
//1������ΪX�ĳ����˶��ٴ�
//2������ΪX�ĳ����˶��ٴ�
//3���༶ΪX�ĳ����˶��ٴ�
//4���Ա��X�ĳ����˶��ٴ�
//
//���磺����ΪX�Ŀ�����������������
//int countName(student * src, int n, char * name);
//tip:���Կ�����ȱʡ�����ķ�ʽ�����߻ص������ķ�ʽʵ�֡�
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
	cout << "����Ϊ "<< name << " ��" << NumName << "��" << endl;
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
	cout << " �༶Ϊ " << _class << " ��" << NumClass << "��" << endl;
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

	cout << "�Ա�Ϊ " << sex << " ��" << NumSex << "��" << endl;
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

	cout << "����Ϊ " << age << " ��" << NumAge << "��" << endl;
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