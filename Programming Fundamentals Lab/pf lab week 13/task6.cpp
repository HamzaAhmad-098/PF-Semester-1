#include<iostream>
#include<fstream>
using namespace std;
int countLines(string fileName);
main()
{
	string fileName ="task6.txt";
	cout<<"Number of lines : "<<countLines(fileName);
}
int countLines(string fileName)
{
	fstream file;
	file.open(fileName,ios::in);
	char first;
	file>>first;
	int count =-1;
	string line;
	while(getline(file,line)){
		if(line[0]!=first){
			count++;
		}
	}
	return count;
}