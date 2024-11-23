#include<iostream>
using namespace std;
float lowestPrice(int , string );
main()
{
	int kilometers;
	string time;
	cout<<"Enter distance in kilometers";
	cin>>kilometers;
	cout<<"enter your time (Day / night)";
	cin>>time;
	cout<<"lowest price will be "<<lowestPrice(kilometers , time)<<" Euro";
}
float lowestPrice(int kilometers , string time)
{
	float lowestCost;
	if(kilometers < 20)
	{
		if(time == "Day")
		{
			lowestCost = 0.70 +(0.79*kilometers); 
		}
		if(time == "Night")
		{
			lowestCost = 0.70+(0.90*kilometers);
		}
	}
	if(kilometers>=20 && kilometers<100)
	{
		lowestCost = 0.09*kilometers;
	}
	if(kilometers>=100)
	{
		lowestCost = 0.06*kilometers;
	}
	return lowestCost;
}