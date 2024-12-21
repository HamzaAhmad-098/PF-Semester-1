#include<iostream>
#include<fstream>
using namespace std;

void saveToFile(string names[], int ages[], float matricMarks[],
	float fscMarks[], float ecatMarks[], int size, string fileName);
main()
{
	string names[100];
	int ages[100];
	float matricMarks[100] , fscMarks[100] , ecatMarks[100] ;
	string ch;
	int idx=0;
	while(ch!="No")
	{
		cout<<"Enter student's name : "<<endl;
		getline(cin,names[idx]);
		cout<<"Enter student's age : "<<endl;
		cin>>ages[idx];
		cout<<"Enter stuident's matricMarks : "<<endl;
		cin>>matricMarks[idx];
		cout<<"Enter student's fscMarks : "<<endl;
		cin>>fscMarks[idx];
		cout<<"Enetr student's ECAT Marks : "<<endl;
		cin>>ecatMarks[idx];
		cout<<"Enter No for stop and Yes for continue.."<<endl;
		cin.ignore();
		getline(cin,ch);
		idx++;
	}
	int size =idx;
	string fileName = "task4.txt";
	saveToFile(names, ages, matricMarks,fscMarks, ecatMarks, size, fileName);
}
void saveToFile(string names[], int ages[], float matricMarks[],
	float fscMarks[], float ecatMarks[], int size, string fileName){
		fstream file;
		file.open(fileName,ios::out);
		for(int i=0;i<size;i++){
			file<<"Name : "<<names[i]<<endl;
			file<<"Age : "<<ages[i]<<endl;
			file<<"Matric Marks : "<<matricMarks[i]<<endl;
			file<<"Fsc Marks : "<<fscMarks[i]<<endl;
			file<<"ECAT Marks : "<<ecatMarks[i]<<endl;
		}
		file.close();
	}
