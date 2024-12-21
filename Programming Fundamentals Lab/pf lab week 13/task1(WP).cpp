#include<iostream>
#include<fstream>
using namespace std;
main()
{
	fstream file;
	file.open("example.txt",ios::out);
	file<<"hazmz ahmad";
	file.close();
}
