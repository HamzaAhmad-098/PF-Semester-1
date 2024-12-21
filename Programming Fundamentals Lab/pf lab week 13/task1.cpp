#include<iostream>
#include<fstream>
using namespace std;
int countLines(string fileName);
main()
{
	string fileName = "task1.txt";
	cout<<"Number of lines : "<<countLines(fileName);
}
int countLines(string fileName)
{
	string line;
	fstream file;
	int count =0;
	file.open(fileName,ios::in);
	while(!file.eof())
	{
		getline(file,line);
		count++;
	}
	file.close();
	return count ;
}