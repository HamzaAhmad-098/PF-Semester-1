#include<iostream>
using namespace std;
bool trueFalse(int ,int);
main()
{
	int num1 , num2 ;
	cout<<"enter number 1 ";
	cin>>num1;
	cout<<"enter 2 number:";
	cin>>num2;
	cout<<trueFalse(num1 , num2);
	
}
bool trueFalse(int num1 , int num2)
{
	bool result;
	if(num1>num2)
	{
		result = true;
	}
	else
	{
		result=false;
	}
	return result;
}