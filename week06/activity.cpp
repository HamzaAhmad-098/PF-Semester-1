#include<iostream>
using namespace std;
string decideActivity(string , string);
main()
{
	string temperature; 
    string humidity;
	cout<<"enter temperature (warm or cold)";
	cin>>temperature;
	cout<<"enter humidity (humid or dry)";
	cin>>humidity;
	cout<<"Recommended activity  "<<decideActivity(temperature , humidity);

}
string decideActivity(string temperature , string humidity)
{
	string activity;
	if(temperature =="warm" && humidity =="dry")
	{
		activity = "play tennis";
	}
	if(temperature =="warm" && humidity == "humid")
	{
		activity ="swim";
	}
	if(temperature == "cold" && humidity == "dry")
	{
		activity = "play basketball";
	}
	if(temperature =="cold" && humidity =="humid")
	{
		activity ="watch tv";
	}
	return activity;
}