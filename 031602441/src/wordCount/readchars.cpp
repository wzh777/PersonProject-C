#include"pch.h"
#include"readchars.h"
#include"structword.h"
#include<fstream>
using namespace std;


/**********************��ȡ�ַ�*********************/
int readchars(struct word *& head, char *filename, int file_chars)
{

	FILE *file = _fsopen(filename, "r", _SH_DENYNO);
	if (!file)
	{
		printf( "���ļ�����" );
		return 0;
	}
	char chars = -1;
	while (1)
	{
		chars = fgetc(file);
		if (chars == EOF)
			break;
		file_chars++;
	}
	std::ofstream openfile("result.txt", std::ios::trunc);
	openfile << "characters:" << file_chars << endl;
	openfile.close();
	return 0;
}