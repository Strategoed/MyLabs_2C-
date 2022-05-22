#include "Header.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string Path1 = "File.txt", Path2 = "ChFile.txt";
	CreateFFile(Path1);
	OutputFile(Path1);
	CreateSFile(Path1, Path2);
	OutputFile(Path2);
	return 0;
}