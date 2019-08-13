#include <iostream>
#include <string>
#include <fstream>

#include "task1_8.h"

void task1_8(int argc, char* argv[])
{
	using namespace std;

	if(argc == 1)
	{
		cout << "There are no command line args." << endl;
		string s;

		cin >> s;
		cout << s << endl;
	}
	else
	{
		cout << "Command line args received." << endl;

		string s;
		ifstream ifs(argv[1]);
		getline(ifs, s);

		ofstream ofs(argv[2]);
		ofs << s;
	}

	cout << "Success!" << endl;
}
