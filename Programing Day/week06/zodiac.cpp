#include <iostream>
using namespace std ;
string findZodiacSign(int day, string month);
main()
{
	int day ;
	string month;
	cout<< "Enter your date of birth : ";
	cin>>day;
	cout<<"Enter your month : ";
	cin>>month;
	cout<<findZodiacSign(day , month);
}
string findZodiacSign(int day, string month)
{
	string zodiacSign;
	if((day>=21 && month == "march" )|| ( day<=19 && month=="april" ))
	{
			zodiacSign = "Aries";
	}
	if((day>=20 && month == "april") || (day<=20 && month=="may"))
	{
		zodiacSign = "Taurus";
	}
	if((day>=21 && month =="may") || (day<=20 && month =="june"))
	{
		zodiacSign = "Gemini";
	}
	if((day>=21 && month =="june") || (day<=22 && month =="july"))
	{
		zodiacSign = "Cancer";
	}
	if((day>=23 && month =="july") || (day<=22 && month =="august"))
	{
		zodiacSign = "Leo";
	}
	if((day>=23 && month== "august") || (day<=22 && month =="september"))
	{
		zodiacSign = "Virgo";
	}
	if(( day >=23 && month =="september") || (day<=22 && month=="october"))
	{
		zodiacSign = "Libra";
	}
	if((day>=23 && month =="october") || (day<=21 && month == "november"))
	{
		zodiacSign = "Scorpio";
	}
	if((day>=22 && month =="november") || (day<=21 && month=="december"))
	{
		zodiacSign = "Sagittarius";
	}
	if((day>=22 && month =="december") || (day<=19 || month== "january"))
	{
		zodiacSign = "capricorn";
	}
	if((day<=20 && month =="january") || (day>=18 && month== "february"))
	{
		zodiacSign = "Aquarius";
	}
	
	return zodiacSign;
}