#include<iostream>
using namespace std ;
string checkPointPosition(int h, int x, int y);
main()
{
	int x , y , h;
	cout<<" Enter height : ";
	cin >>h;
	cout<<"Enter x coordinate : ";
	cin>>x;
	cout<<"Enter y coordinate : ";
	cin>>y;
	cout<<checkPointPosition(h , x , y);
	
}
string checkPointPosition(int h, int x, int y)
{
	int rangeOfx , rangeOfY ;
	string result;
	rangeOfx = 3*h;
	rangeOfY = 4*h;
	if(x>rangeOfx || y>rangeOfY)
	{
		result = "outside";
	}
	if(x<rangeOfx)
	{
		result = "inside";
	}
	if(x==rangeOfx ||  y == rangeOfY)
	{
		result ="Equal";
	}
	return result;
}