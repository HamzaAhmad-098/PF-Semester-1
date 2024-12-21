#include<iostream>
#include<fstream>
using namespace std;
void saveToFile(string names[], int adNumbers[], float percentages[], int size, string fileName);
main()
{
	string names[100];
	int adNumbers[100];
	float percentages[100];
	fstream file;
	file.open("task5.txt",ios::in);
	int idx =0;
	while(!file.eof())
	{
		file>>names[idx];
		file>>adNumbers[idx];
		file>>percentages[idx];
		idx++;
	}
	file.close();
	int size = idx;
	string fileName = "topperStudents.txt";
	saveToFile(names,  adNumbers, percentages,  size,  fileName);
} 
void saveToFile(string names[], int adNumbers[], float
	percentages[], int size, string fileName)
	{
		fstream file;
		file.open(fileName,ios::out);
		for(int i=0; i<size ; i++){
			if(percentages[i]>70){
					file<<"Name : "<<names[i]<<endl;
					file<<"Admission number : "<<adNumbers[i]<<endl;
					file<<"Percentage : "<<percentages[i]<<endl;
			}
		}
		file.close();
	}