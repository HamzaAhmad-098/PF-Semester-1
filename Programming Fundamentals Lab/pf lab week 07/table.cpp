#include<iostream>
using namespace std;
void printTable(int);
main()
{
	int number;
	cout<<"Enter the number : ";
	cin>>number;
	printTable(number);
}
void printTable(int number)
{
	for(int i = 1 ; i<=10 ; i++)
	{
		cout<<number<<" * "<<i<<" = "<<number*i<<endl;
	}
}
		
		
		
		
		
		