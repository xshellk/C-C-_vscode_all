#pragma once

#include"DataManager.h"
#include"Common.h"

class SqliteManager
{
public:
	SqliteManager();
	~SqliteManager();
public:
	void Open(const string &path);
	void Close();
	void ExecuteSql(const string &sql);
	void GetResultTable(const string &sql,int &row,int &col,char**&ppRet);
private:
	sqlite3 *m_db;
};
/////////////////////////////////////////////////////////////////////////////////////////////////

#define DOC_DB    "doc.db"
#define DOC_TABLE "doc.tb"

class DataManager
{
public:
	DataManager();
	~DataManager();
public:
	void InitSqlite();
public:
	void InsertDoc(const string &path, const string &doc);
	void GetDocs(const string &path, multiset<string> &doc);
	void DeleteDoc(const string &path, const string &doc);
private:
	SqliteManager m_dbmgr;
};
