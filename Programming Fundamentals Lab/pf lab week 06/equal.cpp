#include<iostream>
using namespace std;
bool checkNumber(int , int , int);
main()
{
	int num1 , num2 , num3 ;
	bool check ;
	cout<<"enter first number  : ";
	cin >>num1;
	cout<<"enter second number : ";
	cin>>num2;
	cout<<"enter third number : ";
	cin>>num3 ;
	check = checkNumber(num1 , num2 , num3 );
	cout<<check;
	
}
bool checkNumber(int num1 ,int num2 ,int num3 )
{
	bool result;
	if(num1 == num2 && num2 == num3)
	{
		result = true;
	}
	else
	{
		result = false;
	}
	return result;
}
