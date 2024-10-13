#include<iostream>
using namespace std;
float bill( char , int);
main()
{
	char serviceCode, time ;
	int minutes;
	string serviceType;
	cout<<"enter service code (R/r for regular , p/P for premium): ";
	cin>>serviceCode;
	cout<<"enter number of minutes used :";
	cin>>minutes;
	float amount = bill(serviceCode , minutes );
	if(serviceCode =='r'|| serviceCode =='R')
	{
		serviceType = "regular";
	}
	if(serviceCode=='p'|| serviceCode =='P')
	{
		serviceType ="premium";
	}
	cout<<"service type: "<<serviceType<<endl;
	cout<<"Total minutes used :"<<minutes<<endl;
	cout<<"Amount Due :"<<amount<<endl;
	
  
}
float bill(char serviceCode , int minutes )
{
	int cost;
	float totalBill , minuteUsed ;
	if(serviceCode=='r' || serviceCode =='R')
	{
	    cost = 10;
		minuteUsed = minutes - 50;
		if(minutes>minuteUsed)
		{
			totalBill = cost + (minuteUsed*0.20);
		}
		if(minutes<minuteUsed)
		{
			totalBill = cost;
		}
		
	}
	if(serviceCode =='p' ||serviceCode =='P')
	{
		cost = 25;
		char time;
		cout<<"enter your time (d/D for day , n/N for night)";
	    cin>>time;
		if(time == 'd' || time == 'D')
		{ 
		    minuteUsed = minutes-75;
		    if(minutes >minuteUsed)
		    {
			totalBill =  cost + (minuteUsed*0.10);
		    }
		    else if(minutes<minuteUsed)
		    {
			totalBill = 0;
		    }
		}
		if(time == 'n'||time == 'N')
		{
			minuteUsed = minutes-100;
		    if(minutes>minuteUsed)
		    {
			totalBill = cost + (minuteUsed*0.05);
		    }
		    else if(minutes<minuteUsed)
		    {
			totalBill = 0;
		    }
		}
	}
	return totalBill;
}