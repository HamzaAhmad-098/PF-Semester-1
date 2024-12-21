#include<iostream>
#include<fstream>
using namespace std;
main()
{
	fstream file;
	int a ;
	char b;
	float c;
	file.open("task2.txt",ios::in);
	file>>a;
	cout<<"integer value : "<<a<<endl;
	file>>b;
	cout<<"character value is  : "<<b<<endl;
	file>>c;
	cout<<"floating point value is : "<<c;
	file.close();
}