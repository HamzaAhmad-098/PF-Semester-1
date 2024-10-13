#include<iostream>
using namespace std;
float cinemaTicket(string , int , int);
main()
{
	string type;
	int rows , column;
	cout<<"enter number of rows : ";
	cin>>rows;
	cout<<"enter number column : ";
	cin>>column;
	cout<<"enter type of your ticket (Premiere , Normal , Discount) : ";
	cin>>type;
	cout<<cinemaTicket( type , rows , column);
}
float cinemaTicket(string type , int rows , int column)
{
	float total;
	if(type =="Premiere")
	{
		total = rows*column*12.00;
	}
	if(type =="Normal")
	{
		total = rows*column*7.50;
	}
	if(type =="Discount")
	{
		total = rows*column*5.00;
	}
	return total;
}