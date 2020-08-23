#define _CRT_SECURE_NO_WARNINGS 1
#include"Sysutil.h"

void DirectionList(const string &path,vector<string> &subfile,vector<string> & subdir)
{

	string _path = path;
	_path += "\\*.*";

	_finddata_t file;
	long handle = _findfirst(_path.c_str(), &file);
	if (handle == -1)
	{
		perror("findfirst");
		return;
	}

	do{

		// dir . and .. 
		if (strcmp(file.name, ".") == 0)
			continue;
		else if (strcmp(file.name, "..") == 0)
			continue;
		else
			cout << file.name << endl;


		//push back to subdir or subfile
		if (file.attrib & _A_SUBDIR)
		{
			subdir.push_back(file.name);
		}
		else
		{
			subfile.push_back(file.name);
		}


	} while (_findnext(handle,&file) == 0);

	_findclose(handle);
}