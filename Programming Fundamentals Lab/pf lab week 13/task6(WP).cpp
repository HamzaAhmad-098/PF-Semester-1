#include<iostream>
#include<fstream>
using namespace std;
main()
{
	fstream file;
	file.open("task6.txt",ios::in);
	string line;
	while(!file.eof())
	{
		getline(file,line);
		cout<<line<<endl;
	}
	file.close();
}