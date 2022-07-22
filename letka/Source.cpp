#include <iostream>		
#include <fstream>
#include <cctype>
#include "Header.h"


using namespace std;


int main()
{
	int variabe;
	setlocale(LC_ALL, "rus");

	ifstream fin("Text.txt");
	ofstream fout("Text1.txt");
	char First[200];
	char Second[200];
	char Last[200];

	while (!fin.eof())
	{
		fin >> First;
		fin >> Second;
		fin >> Last;

		
		Changer(Second);
	
		variabe = strlen(Last);
		fout << Second << " ";
		if (Last[variabe-1] == ',')
			fout << First << ", ";
		else
			fout << First;
	}

	fin.close();
	fout.close();


	return 0;
}