#include<iostream>
#include<string>
using namespace std;
string calculateCost(float budget, string category, int numPeople);
int main()
{
	int numPeople ;
	string category ;
	float budget;
	cout<<"Enter your budget : ";
	cin>>budget;
	cout<<"Enter your category(VIP / Normal) :";
	cin>>category;
	cout<<"Enter number of people  : ";
	cin>> numPeople;
    cout<<calculateCost( budget,  category, numPeople);
	

}
string calculateCost(float budget, string category, int numPeople)
{
	float transport , ticketCost , total , remaining;
	string result ;
	if(numPeople>=1 && numPeople<=4)
	{
		transport = (budget*75)/100;
	}
	if(numPeople>=5 && numPeople<=9)
	{
		transport = (budget*60)/100;
	}
	if(numPeople>=10 && numPeople<=24)
	{
		transport = (budget*50)/100;
	}
	if(numPeople>=25 && numPeople<=49)
	{
		transport = (budget*40)/100;
	}
	if(numPeople>=50)
	{
		transport = (budget*25)/100;
	}
	if(category =="VIP")
	{
		ticketCost = 499.99;
	}
	if(category =="Normal")
	{
		ticketCost = 249.99;
	}
	total = transport + ticketCost;
	remaining = budget - total;
	if(remaining>0)
	{
        remaining = -remaining;		
		result = "Yes ! you have"+ to_string(remaining)+" leva left";
	}
	if(remaining<0)
	{
		result = "Not enough amount! you need"+ to_string(remaining)+" leva";
	}
	return result;
}