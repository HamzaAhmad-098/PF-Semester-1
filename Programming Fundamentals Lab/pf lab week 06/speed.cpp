#include<iostream>
using namespace std;
string checkSpeed(float);
main()
{
	float speed ;
	cout<<"enter your speed ";
	cin>>speed;
	cout<<checkSpeed(speed);
}
string checkSpeed(float speed)
{
	string check;
	if(speed<=10)
	{
		check = "slow";
	}
	if(speed>10&& speed<50)
	{
		check = "average";

	}
	if(speed>50 && speed<150)
	{
        check = "fast";		
	}
	if(speed>150 && speed<1000)
	{
		check = "ultra fast";
	}	
   return check;
}