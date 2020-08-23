#define _CRT_SECURE_NO_WARNINGS 1

#include"DataManager.h"
#include"Sysutil.h"

SqliteManager::SqliteManager()
{}
SqliteManager::~SqliteManager()
{
	Close();
}

void SqliteManager::Open(const string &path)
{
	char *zErrMsg = 0;
	int rc;
	rc = sqlite3_open(path.c_str(), &m_db);
	if (rc)
	{
		//ERROR_LOG("can't open database : %s", sqlite3_errmsg(m_db);
		exit(0);
	}
	else
	{
		TRACE_LOG("opened database successfully");
	}
}
void SqliteManager::Close()
{
	if (m_db)
	{
		int rc = sqlite3_close(m_db);
		if (rc != SQLITE_OK)
		{
			ERROR_LOG("close database failed:%s", sqlite3_errmsg(m_db));
		}
		else
		{
			TRACE_LOG("close database successfully");
		}
	}
}
void SqliteManager::ExecuteSql(const string &sql)
{
	char *zErrMsg = 0;
	int rc = sqlite3_exec(m_db, sql.c_str(), 0, 0, &zErrMsg);
	if (rc != SQLITE_OK)
	{
		ERROR_LOG("SQL(%s) error: %s", sql.c_str(), zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else
	{
		TRACE_LOG("SQL(%s) Execute successfully.", sql.c_str());
	}
}
void SqliteManager::GetResultTable(const string &sql, int &row, int &col, char**&ppRet)
{
	char *zErrMsg = 0;
	int rc = sqlite3_get_table(m_db, sql.c_str(), &ppRet, &row, &col, &zErrMsg);
	if (rc != SQLITE_OK)
	{
		ERROR_LOG("Get Result Table error: %s", zErrMsg);

	}
	else
	{
		TRACE_LOG("Get Result Table successfully.", zErrMsg);
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////


DataManager::DataManager()
{
	m_dbmgr.Open(DOC_DB);
	InitSqlite();
}
DataManager::~DataManager()
{}

void DataManager::InitSqlite()
{
	char sql[SQL_BUFFER_SIZE] = { 0 };
	sprintf(sql, "create table if not exists %s(id interger primary key autoincreament, doc_name text,doc_path text)", DOC_TABLE);
	m_dbmgr.ExecuteSql(sql);
}
void DataManager::InsertDoc(const string &path, const string &doc)
{

}
void DataManager::GetDocs(const string &path, multiset<string> &doc)
{

}
void DataManager::DeleteDoc(const string &path, const string &doc)
{

}



