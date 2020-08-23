
#include"common.h"


//class Data
//{
//public:
//	Data(int _year = 0,int _month = 0,int _day = 0,int _hours = 0,int _minutes = 0,string _thing = 0,bool _isdo = 0) : 
//		year(_year), month(_month), day(_day), hours(_hours), minutes(_minutes), thing(_thing), isdo(_isdo)
//	{}
//public:
//	int year;
//	int month;
//	int day;
//	int hours;
//	int minutes;
//	string thing;
//	bool isdo;
//	//int count;
//
//};
#define FILE_NAME "data_config.txt"
class Data
{
public:
	string data;
	string thing;
	string is_do;
};

class DataManger
{
public:
	DataManger()
	{
		//char buf[] = 0;
	}
	~DataManger()
	{
		
	}
	void CreateList()
	{
		string tmp;
		Fp.open(FILE_NAME,ios::in);
		if (!Fp.is_open())
			cout << "file open error" << endl;
		Fp >> tmp;
		Fp.close;

		size = (int)tmp[0] - 48;

		if (size == 0)
			return;
			
		DataList.reserve(size);
		for (int i = 0; i < size; i++)
		{
			
		}
		

	}
	bool InsertList()
	{
		DataList.resize(DataList.size() + 1);
		cout << "输入日期";
		cin >> DataList[DataList.size() - 1].data;
		cout << endl << "输入事件";
		cin >> DataList[DataList.size() - 1].thing;
		cout << endl;
		DataList[DataList.size() - 1].is_do = "否";
		size++;

		return true;
	}
	bool DeleteList()
	{

	}
	void ShowList()
	{
		cout << "<===============================================================>" << endl;
		cout << "<==     日期    ||              事件            ||  是否完成  ==>" << endl;
		cout << "<===============================================================>" << endl;
		
		for (int i = 0; i < DataList.size(); i++)
		{
			printf("<==   %-10s|| %-28s ||     %-6s ==>", DataList[i].data.c_str(), 
														  DataList[i].thing.c_str(), 
														  DataList[i].is_do.c_str());
		}


	}
	void SaveList()
	{
		Fp.open(FILE_NAME, ios::out | ios::trunc);
		Fp << size << endl;
		for (int i = 0; i < size; i++)
		{
			Fp << DataList[i].data;
			Fp << DataList[i].thing;
			Fp << DataList[i].is_do;
		}
		Fp.close();
		
	}
private:
	vector<Data> DataList;
	fstream Fp;
	int size;
};
