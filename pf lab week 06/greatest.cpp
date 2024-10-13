#include<iostream>
using namespace std;
int findGreatest(int , int , int);
main()
{
	int num1 , num2 ,  num3;
	cout<<"enter number 1 ";
	cin>>num1;
	cout<<"enter second number";
	cin>>num2;
	cout<<"enter third number";
	cin>>num3;
	cout<<"greatest is  "<< findGreatest(num1 , num2 , num3);
}
int findGreatest(int num1 , int num2 , int num3 )
{
	int greatest;
	if(num1 > num2 && num1 > num3)
	{
		greatest =  num1;
	}
	if(num2 > num1 && num2 > num3)
	{
		greatest = num2;
	}
	else{
		greatest = num3;
	}
	return greatest;
}