#include<iostream>
using namespace std;
void printStars(int);
main()
{
	int rowSize;
	cout<<"Enter the size of row : ";
	cin>>rowSize;
	printStars(rowSize);
}
void printStars(int rowSize)
{
	
	int a = rowSize;
	for(int row = 1;row<=rowSize;row++)
	{
		for(int i = 1;i<=a;i++)
		{
			cout<<"*";
			
		}
		a--;
		cout<<endl;
	}
}