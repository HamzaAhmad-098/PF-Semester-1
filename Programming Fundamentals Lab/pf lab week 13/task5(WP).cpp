#include<iostream>
#include<fstream>
using namespace std;
main()
{
	fstream file ;
	string line;
	file.open("task5.txt",ios::in);
	getline(file,line);
	file.close();
	cout<<line;
}