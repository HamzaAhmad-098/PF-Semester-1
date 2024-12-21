#include<iostream>
#include<fstream>
using namespace std;
main()
{
	string name ;
	fstream file;
	file.open("task3.txt",ios::in);
	getline(file,name);
	file.close();
	cout<<name;
}