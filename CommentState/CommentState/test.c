
#include"Comment.h"
int main()
{
	FILE* lfinput;
	FILE* lfoutput;
	fopen(lfinput, "r");
	fopen(lfoutput, "w");
	if (lfinput == NULL)
	{
		perror("cannot open this file");
		exit(0);
	}

	return 0;

}