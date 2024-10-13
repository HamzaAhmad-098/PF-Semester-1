#include <iostream>
#include<string>
using namespace std;
string calculateHotelPrices(string month, int numberOfStays);
main()
{
	string month ;
	int numberOfStays;
	cout<<"Enter  your month : ";
	cin>>month;
	cout<<"Enter number of stays  : ";
	cin>>numberOfStays;
	cout<<calculateHotelPrices(month , numberOfStays);
}
string calculateHotelPrices(string month, int numberOfStays)
{
	float studioPrice , apartmentPrice , studio , apartment;
	studioPrice = 50;
	apartmentPrice = 65;
	if(month == "may" || month == "october")
	{
		
		if(numberOfStays>7)
		{
			studioPrice = studioPrice-((studioPrice*5)/100);
			apartmentPrice = apartmentPrice - ((apartmentPrice*5)/100);
			studio = studioPrice*numberOfStays;
			apartment = apartmentPrice*numberOfStays;
		}
		if(numberOfStays>14)
		{
			studioPrice = studioPrice-((studioPrice*30)/100);
			apartmentPrice = apartmentPrice-((apartmentPrice*30)/100);
			studio = studioPrice*numberOfStays;
			apartment = apartmentPrice*numberOfStays;
		}
	}
	if(month == "june" || month == "september")
	{
	  		
		if(numberOfStays>14)
		{
			studioPrice = studioPrice-((studioPrice*20)/100);
			apartmentPrice = apartmentPrice-((apartmentPrice*20)/100);
			studio = studioPrice*numberOfStays;
			apartment = apartmentPrice*numberOfStays;
		}
	}
	if(month == "july" || month == "august" )
	{
		
		studio = studioPrice*numberOfStays;
		apartment = apartmentPrice*numberOfStays;
	}
	string result = "studio : " + to_string(studio)+ "apartment" + to_string(apartment);
	return result;
}