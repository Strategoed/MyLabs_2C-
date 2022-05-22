#include "Header.h"

void CreateFFile(string path)
{
	ofstream File(path);
	if (File)
	{
		cout << "Введите текст\n<Enter> - начать новую строку\n<Ctrl + Z + Enter>  - прекратить запись в файл\n";
		string Line;
		while (getline(cin, Line, '\26'))
		{
			File << Line;
		}
		File.close();
	}
	else
	{
		cout << "Не удалось открыть файл";
	}
}

void CreateSFile(string path, string path2)
{
	ifstream FFile(path);
	ofstream SFile(path2);
	if (FFile)
	{
		string Line;
		while (!FFile.eof())
		{
			getline(FFile, Line);
			SFile << Line.length() << "\t" << Line << endl;
		}
		FFile.close();
		SFile.close();
	}
	else
	{
		cout << "Не удалось открыть файл";
	}

}

void OutputFile(string path)
{
	ifstream File(path);
	if (!File.eof())
	{
		cout << endl << path << ':' << endl;;
		string Line;
		while (File)
		{
			Line = "";
			getline(File, Line);
			cout << Line << endl;
		}
		File.close();
	}
	else
	{
		cout << "Не удалось открыть файл";
	}
}