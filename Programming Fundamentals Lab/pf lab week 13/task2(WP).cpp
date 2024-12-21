#include<iostream>
#include<fstream>
using namespace std;
main()
{
	fstream file;
	int intA;
	char charB;
	float floatC;
	cout<<"Enter an integer value : ";
	cin>>intA;
	file.open("file.txt",ios::out);
	file<<intA<<endl;
	cout<<"Enter character value : ";
	cin>>charB;
	file<<charB<<endl;
	cout<<"Enter a string : ";
	cin>>floatC;
	file<<floatC;
	file.close();
}
